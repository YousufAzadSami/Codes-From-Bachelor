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

public class MergeSortTest extends JApplet implements ActionListener, Runnable {

	// private Integer I;
	private int I;

	private String z;
	// private ArrayList<String> arr = new ArrayList<String>();
	private int[] a = new int[30];

	private Border border;
	private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
	private JTextField jTextFieldArr, jTextFieldZ;
	private JButton jButtonStart, jButtonNext, jButtonClear;
	private JLabel jLabelGridArr[];
	private JLabel jLabel2D[][] = new JLabel[4][];

	private Thread t;

	private int indexOfa = 0;

	private final int SLEEP_TIME = 200;

	public void init() {
		setLayout(new BorderLayout());
		jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
		jPanelHeader.setBackground(Color.red);
		jPanelHeader.add(new JLabel("Array"));
		jTextFieldArr = new JTextField(25);
		jPanelHeader.add(jTextFieldArr);
		jPanelHeader.add(new JLabel("Search"));
		jTextFieldZ = new JTextField(25);
		jPanelHeader.add(jTextFieldZ);
		jButtonStart = new JButton("Start");
		jButtonStart.addActionListener(this);
		jPanelHeader.add(jButtonStart);
		jButtonNext = new JButton("Next");
		jButtonNext.setEnabled(false);
		jButtonNext.addActionListener(this);
		jPanelHeader.add(jButtonNext);
		jButtonClear = new JButton("Clear");
		jButtonClear.addActionListener(this);
		jPanelHeader.add(jButtonClear);
		add(jPanelHeader, BorderLayout.NORTH);

		jPanelMiddle = new JPanel(new BorderLayout());
		jPanelArray = new JPanel();
		jPanelMiddle.add(jPanelArray, BorderLayout.CENTER);
		add(jPanelMiddle, BorderLayout.CENTER);
		jPanelArray.setBackground(Color.GREEN);

		jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
		jPanelFooter.add(new JLabel(
				"Developed By :: Md. Fasihul Kabir (ID :: 09.01.04.065"));
		add(jPanelFooter, BorderLayout.SOUTH);
		setSize(950, 125);

		border = BorderFactory.createLineBorder(Color.DARK_GRAY);
		RandomGenerator();
	}

	private void RandomGenerator() {
		String t;
		String r = (new Integer((int) (Math.random() * 100))).toString();
		int cnt = 1;
		while (cnt <= 10) {
			t = (new Integer((int) (Math.random() * 100))).toString();

			r += ", " + t;
			cnt++;
			if (cnt == 6)
				jTextFieldZ.setText(t);
		}
		jTextFieldArr.setText(r);
	}

	private void Init() {
		String temp;
		StringTokenizer st = new StringTokenizer(jTextFieldArr.getText(), ",");

		System.out.println(st);

		// arr.clear();
		while (st.hasMoreTokens()) {
			temp = st.nextToken().trim();
			if (temp.length() > 0) {
				// arr.add(temp);
				a[indexOfa] = Integer.parseInt(temp);
				indexOfa++;
			}
		}
		if (indexOfa == 0) {
			ShowMessage("Please Insert An Array To Search");
			return;
		} else if (indexOfa > 25) {
			ShowMessage("Array Cannot Be Greater Than 25");
			return;
		}

		z = jTextFieldZ.getText().trim();

		if (z.trim().equals("")) {
			ShowMessage("Please Insert A Searching Value");
			return;
		}

		jLabelGridArr = new JLabel[indexOfa];

		// creatLabels();
		// initializeLabels();
		// setValuesToLabels();
		refresh(4);
		jPanelArray.setLayout(new GridLayout(4, indexOfa));
		creatLabels2();
		initializeLabels2();
		setValuesToLabels2(0);

		I = -1;
		jButtonStart.setEnabled(false);
		jButtonNext.setEnabled(true);
		refresh();
	}

	private void initializeLabels() {
		for (int i = 0; i < indexOfa; i++) {
			// jLabelGridArr[i] = new JLabel(String.format("%3d", a[i]));
			jLabelGridArr[i].setText("N/A");
			jLabelGridArr[i].setBorder(border);
			jLabelGridArr[i].setBackground(Color.LIGHT_GRAY);
			jLabelGridArr[i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabelGridArr[i].setHorizontalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setVerticalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setOpaque(true);
			jPanelArray.add(jLabelGridArr[i]);
		}
	}

	private void setValuesToLabels() {
		for (int i = 0; i < indexOfa; i++) {
			// jLabelGridArr[i] = new JLabel(String.format("%3d", a[i]));
			jLabelGridArr[i].setText(String.format("%3d", a[i]));
			jLabelGridArr[i].setBorder(border);
			jLabelGridArr[i].setBackground(Color.LIGHT_GRAY);
			jLabelGridArr[i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabelGridArr[i].setHorizontalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setVerticalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setOpaque(true);
			jPanelArray.add(jLabelGridArr[i]);
		}
	}

	private void creatLabels() {
		int i;

		for (i = 0; i < indexOfa; i++) {
			jLabelGridArr[i] = new JLabel();
		}
	}

	private void creatLabels2() {
		int i, j;

		for (i = 0; i < 4; i++) {

			jLabel2D[i] = new JLabel[indexOfa];

			for (j = 0; j < indexOfa; j++) {
				jLabel2D[i][j] = new JLabel();

			}
		}
	}

	private void initializeLabels2() {
		int i, j;
		for (i = 0; i < 4; i++) {
			for (j = 0; j < indexOfa; j++) {
				// jLabel2D[i][j] = new JLabel(String.format("%3d", a[i]));
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

		for (i = 0; i < indexOfa; i++) {
			// jLabel2D[i][j] = new JLabel(String.format("%3d", a[i]));
			jLabel2D[rowNumber][i].setText(String.format("%3d", a[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(Color.LIGHT_GRAY);
			jLabel2D[rowNumber][i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabel2D[rowNumber][i].setHorizontalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setVerticalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setOpaque(true);
			// jPanelArray.add(jLabel2D[0][i]);
		}
	}

	private void setValuesToLabels2(int rowNumber, int[] passed, Color col) {
		int i;

		for (i = 0; i < indexOfa; i++) {
			// jLabel2D[i][j] = new JLabel(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setText(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(col);
			jLabel2D[rowNumber][i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabel2D[rowNumber][i].setHorizontalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setVerticalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setOpaque(true);
			// jPanelArray.add(jLabel2D[0][i]);
		}
	}

	private void setValuesToLabels2(int rowNumber, int[] passed, Color col,
			int low, int high) {
		int i;

		for (i = low; i < high; i++) {

			try {
				Thread.sleep(SLEEP_TIME);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

			// jLabel2D[i][j] = new JLabel(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setText(String.format("%3d", passed[i]));
			jLabel2D[rowNumber][i].setBorder(border);
			jLabel2D[rowNumber][i].setBackground(col);
			jLabel2D[rowNumber][i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabel2D[rowNumber][i].setHorizontalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setVerticalAlignment(JLabel.CENTER);
			jLabel2D[rowNumber][i].setOpaque(true);
			// jPanelArray.add(jLabel2D[0][i]);
		}
	}

	private void refresh() {
		setSize(1950, 500);
		setSize(950, 125);
	}

	private void refresh(int mul) {
		setSize(1950, SLEEP_TIME);
		setSize(950, ((125) + mul * 50));
	}

	public void run() {
		// searchAuto();
		// quickSort(0, arr.size() - 1);
		a = mergeSort(a, 0, indexOfa, 0);
	}

	private int[] mergeSort(int passedArray[], int low, int high,
			int recursiveCounter) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;

		System.out.printf("\n\n");
		System.out.println("PASSED_ARRAY::: " + recursiveCounter);
		for (int k = 0; k < indexOfa; k++) {
			System.out.printf("%3d  ", passedArray[k]);
		}
		System.out.printf("\n\n");

		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		setValuesToLabels2(recursiveCounter, passedArray, Color.PINK, low, high);

		// BREAK POINT
		if ((high - low) == 1) {
			temporary = new int[indexOfa];

			for (int i = 0; i < indexOfa; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid, recursiveCounter + 1);
		temporary = mergeSort(temporary, mid, high, recursiveCounter + 1);

		int returndArray[] = new int[passedArray.length];

		for (int i = 0; i < indexOfa; i++) {
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
				Thread.sleep(2000);
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
						Thread.sleep(2000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
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
						Thread.sleep(2000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					// RE COLORING
					jLabel2D[recursiveCounter][counter - 1]
							.setBorder(BorderFactory.createLineBorder(
									Color.DARK_GRAY, 3));
					//

				}
			} else if (temporary[i] < temporary[j]) {
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
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
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
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		// setValuesToLabels2(recursiveCounter, returndArray, Color.MAGENTA,
		// low,high);

		System.out.printf("\n\n");
		System.out.println("temporary:");
		for (int k = 0; k < indexOfa; k++) {
			System.out.printf("%3d  ", temporary[k]);
		}
		System.out.println();

		System.out.println("returndArray:");
		for (int k = 0; k < indexOfa; k++) {
			System.out.printf("%3d  ", returndArray[k]);
		}
		System.out.printf("\n\n");

		return returndArray;
	}

	private void ShowMessage(String message) {
		JOptionPane.showMessageDialog(null, message);
	}

	@Override
	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == jButtonStart) {
			Init();
		} else if (ae.getSource() == jButtonNext) {
			refresh(4);
			// Search();
			t = new Thread(this);
			System.out.println("next is pressed");
			System.out
					.println("edt: " + SwingUtilities.isEventDispatchThread());
			// WITH THREAD, ANIMATION WORKS :)
			t.start();
			System.out.printf("\n\n\n");
			// showArray(0, arr.size() - 1);
		} else if (ae.getSource() == jButtonClear) {
			// showArray(0, arr.size() - 1);
			jButtonStart.setEnabled(true);
			jButtonNext.setEnabled(false);
			jPanelArray.removeAll();
			refresh();
			RandomGenerator();
		}
	}
}