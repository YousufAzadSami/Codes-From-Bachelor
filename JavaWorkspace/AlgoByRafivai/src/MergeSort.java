import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.StringTokenizer;

import javax.swing.BorderFactory;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;
import javax.swing.border.Border;

public class MergeSort extends JApplet implements ActionListener, Runnable {

	private static final int HIGHEST_ROW_NUM_POSSIBLE = 6;

	private int[] a = new int[30];

	private Border border;
	private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
	private JTextField jTextFieldArray;
	private JButton jButtonStart, jButtonSimulate, jButtonClear;
	private JLabel jLabel2D[][];

	private Thread t;

	private int lengthOfArray = 0;
	private int rowNumber = 0;

	private final int SLEEP_TIME = 500;
	private final int SLEEP_TIME_LOW = 1200;

	public void init() {
		setLayout(new BorderLayout());
		jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
		jPanelHeader.setBackground(Color.DARK_GRAY);
		jPanelHeader.add(new JLabel("Array"));
		jTextFieldArray = new JTextField(35);
		jPanelHeader.add(jTextFieldArray);


		jButtonStart = new JButton("Start");
		jButtonStart.addActionListener(this);
		jPanelHeader.add(jButtonStart);
		jButtonSimulate = new JButton("Simulate");
		jButtonSimulate.setEnabled(false);
		jButtonSimulate.addActionListener(this);
		jPanelHeader.add(jButtonSimulate);
		jButtonClear = new JButton("Clear");
		jButtonClear.addActionListener(this);
		jPanelHeader.add(jButtonClear);
		add(jPanelHeader, BorderLayout.NORTH);

		jPanelMiddle = new JPanel(new BorderLayout());
		jPanelArray = new JPanel();
		jPanelMiddle.add(jPanelArray, BorderLayout.CENTER);
		add(jPanelMiddle, BorderLayout.CENTER);
		jPanelArray.setBackground(Color.LIGHT_GRAY);

		jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
		jPanelFooter.add(new JLabel(
				"Developed By :: Md. Fasihul Kabir (ID :: 09.01.04.065"));
		add(jPanelFooter, BorderLayout.SOUTH);
		setSize(950, 125);

		border = BorderFactory.createLineBorder(Color.DARK_GRAY);
		RandomGenerator();
		refresh(HIGHEST_ROW_NUM_POSSIBLE);
	}

	private void RandomGenerator() {
		String t;
		String r = (new Integer((int) (Math.random() * 100))).toString();
		int cnt = 1;
		while (cnt <= 10) {
			t = (new Integer((int) (Math.random() * 100))).toString();

			r += ", " + t;
			cnt++;
		}
		jTextFieldArray.setText(r);
	}

	private void Init() {
		String temp;
		StringTokenizer st = new StringTokenizer(jTextFieldArray.getText(), ",");

		System.out.println(st);

		while (st.hasMoreTokens()) {
			temp = st.nextToken().trim();
			if (temp.length() > 0) {
				a[lengthOfArray] = Integer.parseInt(temp);
				lengthOfArray++;
			}
		}
		if (lengthOfArray < 2) {
			ShowMessage("Array is not long enough to sort");
			return;
		} else if (lengthOfArray > 25) {
			ShowMessage("Array Cannot Be Greater Than 25");
			return;
		}

		rowNumber = rowNumberDecider((double) lengthOfArray);
		jLabel2D = new JLabel[rowNumber][lengthOfArray];

		jPanelArray.setLayout(new GridLayout(rowNumber, lengthOfArray));
		creatLabels2();
		initializeLabels2();
		setValuesToLabels2(0);

		jButtonStart.setEnabled(false);
		jButtonSimulate.setEnabled(true);
	}

	private int rowNumberDecider(double num) {
		double i = 0;

		while (true) {
			if (Math.pow(2.0, i) < num && num <= Math.pow(2.0, i + 1)) {
				break;
			}
			i++;
		}

		return (int) i + 2;
	}

	private void creatLabels2() {
		int i, j;

		for (i = 0; i < rowNumber; i++) {

			for (j = 0; j < lengthOfArray; j++) {
				jLabel2D[i][j] = new JLabel();

			}
		}
	}

	private void initializeLabels2() {
		int i, j;
		for (i = 0; i < rowNumber; i++) {
			for (j = 0; j < lengthOfArray; j++) {
				jLabel2D[i][j].setText("");
				jLabel2D[i][j].setBorder(border);
				jLabel2D[i][j].setBackground(Color.LIGHT_GRAY);
				jLabel2D[i][j].setFont(new Font("Serif", Font.PLAIN, 24));
				jLabel2D[i][j].setHorizontalAlignment(JLabel.CENTER);
				jLabel2D[i][j].setVerticalAlignment(JLabel.CENTER);
				jLabel2D[i][j].setOpaque(true);
				jPanelArray.add(jLabel2D[i][j]);
			}
		}
	}

	private void setValuesToLabels2(int rowNumber) {
		int i;

		for (i = 0; i < lengthOfArray; i++) {
			jLabel2D[rowNumber][i].setText(String.format("%3d", a[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(Color.LIGHT_GRAY);
			jLabel2D[rowNumber][i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabel2D[rowNumber][i].setHorizontalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setVerticalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setOpaque(true);
		}
	}

	private void setValuesToLabels2(int rowNumber, int[] passed, Color col) {
		int i;

		for (i = 0; i < lengthOfArray; i++) {
			jLabel2D[rowNumber][i].setText(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(col);
		}
	}

	private void setValuesToLabels2(int rowNumber, int[] passed, Color col,
			int low, int high) {
		int i;

		for (i = low; i < high; i++) {

			try {
				Thread.sleep(SLEEP_TIME);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

			jLabel2D[rowNumber][i].setText(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(col);
		}
	}

	private void refresh() {
		setSize(1950, 500);
		setSize(950, 125);
	}

	private void refresh(int mul) {
		setSize(1950, 500);
		setSize(950, ((125) + mul * 50));
	}

	public void run() {
		a = mergeSort(a, 0, lengthOfArray, 0);

		t = null;
		jButtonSimulate.setEnabled(false);
	}

	private int[] mergeSort(int passedArray[], int low, int high,
			int recursiveCounter) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;

		try {
			Thread.sleep(SLEEP_TIME_LOW);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}

		setValuesToLabels2(recursiveCounter, passedArray, Color.PINK, low, high);

		// BREAK POINT
		if ((high - low) == 1) {
			temporary = new int[lengthOfArray];

			for (int i = 0; i < lengthOfArray; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid, recursiveCounter + 1);
		temporary = mergeSort(temporary, mid, high, recursiveCounter + 1);

		int returndArray[] = new int[passedArray.length];

		for (int i = 0; i < lengthOfArray; i++) {
			returndArray[i] = passedArray[i];
		}

		int i, j, counter = low;
		i = low;
		j = mid;

		// SOME OPTIMIZATION IS URGENTLY NEEDED
		while (counter < high) {

			// COLOR THE COMPARING LABELS
			if (i < mid)
				jLabel2D[recursiveCounter + 1][i].setBorder(BorderFactory
						.createLineBorder(Color.GREEN, 3));
			if (j < high)
				jLabel2D[recursiveCounter + 1][j].setBorder(BorderFactory
						.createLineBorder(Color.BLUE, 3));

			// PAUSE
			try {
				Thread.sleep(SLEEP_TIME_LOW);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

			if (i == mid) {
				while (j < high) {
					// SAME CODE
					if (i < mid)
						jLabel2D[recursiveCounter + 1][i]
								.setBorder(BorderFactory.createLineBorder(
										Color.GREEN, 3));
					if (j < high)
						jLabel2D[recursiveCounter + 1][j]
								.setBorder(BorderFactory.createLineBorder(
										Color.BLUE, 3));
					// /////////////////////////////////////////////////////////////////////
					returndArray[counter] = temporary[j];
					j++;
					counter++;

					// same coloring code :O
					// i know, i know ... bad coding
					// COLOR THE RESULT
					jLabel2D[recursiveCounter][counter - 1].setText(String
							.format("%3d", returndArray[counter - 1]));
					jLabel2D[recursiveCounter][counter - 1]
							.setBorder(BorderFactory.createLineBorder(
									Color.RED, 10));
					// PAUSE AGIAN
					try {
						Thread.sleep(SLEEP_TIME_LOW);
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
					// RE COLORING
					jLabel2D[recursiveCounter][counter - 1]
							.setBorder(BorderFactory.createLineBorder(
									Color.DARK_GRAY, 3));
					//

				}
			} else if (j == high) {
				while (i < mid) {

					// SAME CODE
					if (i < mid)
						jLabel2D[recursiveCounter + 1][i]
								.setBorder(BorderFactory.createLineBorder(
										Color.GREEN, 3));
					if (j < high)
						jLabel2D[recursiveCounter + 1][j]
								.setBorder(BorderFactory.createLineBorder(
										Color.BLUE, 3));
					// /////////////////////////////////////////////////////////////////////

					returndArray[counter] = temporary[i];
					i++;
					counter++;

					// same coloring code :O
					// i know, i know ... bad coding
					// COLOR THE RESULT
					jLabel2D[recursiveCounter][counter - 1].setText(String
							.format("%3d", returndArray[counter - 1]));
					jLabel2D[recursiveCounter][counter - 1]
							.setBorder(BorderFactory.createLineBorder(
									Color.RED, 10));
					// PAUSE AGIAN
					try {
						Thread.sleep(SLEEP_TIME_LOW);
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
					// RE COLORING
					jLabel2D[recursiveCounter][counter - 1]
							.setBorder(BorderFactory.createLineBorder(
									Color.DARK_GRAY, 3));
					//

				}
			} else if (temporary[i] <= temporary[j]) {
				returndArray[counter] = temporary[i];
				i++;
				counter++;
			} else if (temporary[j] < temporary[i]) {
				returndArray[counter] = temporary[j];
				j++;
				counter++;
			}

			// COLOR THE RESULT
			jLabel2D[recursiveCounter][counter - 1].setText(String.format(
					"%3d", returndArray[counter - 1]));
			jLabel2D[recursiveCounter][counter - 1].setBorder(BorderFactory
					.createLineBorder(Color.RED, 10));
			// PAUSE AGIAN
			try {
				Thread.sleep(SLEEP_TIME_LOW);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			// RE COLORING
			jLabel2D[recursiveCounter][counter - 1].setBorder(BorderFactory
					.createLineBorder(Color.DARK_GRAY, 3));
			// if (i-1 < mid)
			// jLabel2D[recursiveCounter + 1][i-1].setBorder(BorderFactory
			// .createLineBorder(Color.DARK_GRAY));
			// if (j-1 < high)
			// jLabel2D[recursiveCounter + 1][j-1].setBorder(BorderFactory
			// .createLineBorder(Color.DARK_GRAY));

		}

		// SHOWING RESULTS
		try {
			Thread.sleep(SLEEP_TIME_LOW);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}

		return returndArray;
	}

	private void ShowMessage(String message) {
		JOptionPane.showMessageDialog(null, message);
	}

	@Override
	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == jButtonStart) {
			refresh(HIGHEST_ROW_NUM_POSSIBLE);
			Init();
		} else if (ae.getSource() == jButtonSimulate) {

			t = new Thread(this);
			System.out.println("next is pressed");
			System.out
					.println("edt: " + SwingUtilities.isEventDispatchThread());
			// WITH THREAD, ANIMATION WORKS :)
			t.start();
		} else if (ae.getSource() == jButtonClear) {
			jLabel2D = null;
			lengthOfArray = 0;
			jButtonStart.setEnabled(true);
			jButtonSimulate.setEnabled(false);
			jPanelArray.removeAll();
			refresh(HIGHEST_ROW_NUM_POSSIBLE);
			RandomGenerator();
		}
	}
}