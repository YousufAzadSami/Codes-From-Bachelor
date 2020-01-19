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
	private ArrayList<String> arr = new ArrayList<String>();
	private int a[] = new int[30];
	private int lengthOfa;

	private Border border;
	private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
	private JTextField jTextFieldArray, jTextFieldZ;
	private JButton jButtonStart, jButtonNext, jButtonClear;
	private JLabel jLabelGridArr[][] = new JLabel[7][];

	private Thread t;

	public void init() {
		setLayout(new BorderLayout());
		jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
		jPanelHeader.setBackground(Color.red);
		jPanelHeader.add(new JLabel("Array"));
		jTextFieldArray = new JTextField(25);
		jPanelHeader.add(jTextFieldArray);
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

		border = BorderFactory.createLineBorder(Color.CYAN);
		RandomGenerator();
	}

	private void RandomGenerator() {
		String t;
		String r = (new Integer((int) (Math.random() * 100))).toString();
		int cnt = 1;
		while (cnt <= 7) {
			t = (new Integer((int) (Math.random() * 100))).toString();

			r += ", " + t;
			cnt++;
			if (cnt == 6)
				jTextFieldZ.setText(t);
		}
		jTextFieldArray.setText(r);
	}

	private void Init() {
		String temp;
		lengthOfa = 0;
		StringTokenizer st = new StringTokenizer(jTextFieldArray.getText(), ",");

		System.out.println(st);

		arr.clear();
		while (st.hasMoreTokens()) {
			temp = st.nextToken().trim();
			if (temp.length() > 0) {

				// arr.add(temp);
				a[lengthOfa++] = Integer.parseInt(temp);
			}
		}
		if (lengthOfa == 0) {
			ShowMessage("Please Insert An Array To Search");
			return;
		} else if (lengthOfa > 25) {
			ShowMessage("Array Cannot Be Greater Than 25");
			return;
		}

		z = jTextFieldZ.getText().trim();

		if (z.trim().equals("")) {
			ShowMessage("Please Insert A Searching Value");
			return;
		}

		// // jLabelGridArr = new JLabel[0][lengthOfa];
		// jPanelArray.setLayout(new GridLayout(1, lengthOfa));
		//
		// jLabelGridArr[0] = new JLabel[lengthOfa];
		//
		// for (int i = 0; i < lengthOfa; i++) {
		// jLabelGridArr[0][i] = new JLabel(String.format("%2d", a[i]));
		// jLabelGridArr[0][i].setBorder(border);
		// jLabelGridArr[0][i].setBackground(Color.LIGHT_GRAY);
		// jLabelGridArr[0][i].setFont(new Font("Serif", Font.PLAIN, 24));
		// jLabelGridArr[0][i].setHorizontalAlignment(JLabel.CENTER);
		// jLabelGridArr[0][i].setVerticalAlignment(JLabel.CENTER);
		// jLabelGridArr[0][i].setOpaque(true);
		// jPanelArray.add(jLabelGridArr[0][i]);
		// }
		I = -1;
		jButtonStart.setEnabled(false);
		jButtonNext.setEnabled(true);
		refresh();
	}

	private void refresh() {
		setSize(1950, 500);
		setSize(950, 125);
	}

	private void refresh(int multiplier) {
		setSize(1950, 500);
		setSize(950, 125 + (multiplier * 50));
	}

	private int[] mergeSort(int passedArray[], int low, int high,
			int recusiveLevelCounter) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;

		System.out.printf("\n\n");
		System.out.println("PASSED_ARRAY:");
		for (int k = 0; k < lengthOfa; k++) {
			System.out.printf("%3d  ", passedArray[k]);
		}

		drawLabel(passedArray, recusiveLevelCounter);

		System.out.printf("\n\n");

		if ((high - low) == 1) {
			temporary = new int[passedArray.length];

			for (int i = 0; i < lengthOfa; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid, recusiveLevelCounter + 1);
		temporary = mergeSort(temporary, mid, high, recusiveLevelCounter + 1);

		int returndArray[] = new int[passedArray.length];

		for (int i = 0; i < lengthOfa; i++) {
			returndArray[i] = passedArray[i];
		}

		int i, j, counter = low;
		i = low;
		j = mid;

		// SOME OPTIMIZATION IS URGENTLY NEEDED
		while (counter < (high)) {

			if (i == mid) {
				while (j < high) {
					returndArray[counter] = temporary[j];
					j++;
					counter++;
				}
			} else if (j == high) {
				while (i < mid) {
					returndArray[counter] = temporary[i];
					i++;
					counter++;
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

		}

		// SHOWING RESULTS
		System.out.printf("\n\n");
		System.out.println("temporary:");
		for (int k = 0; k < lengthOfa; k++) {
			System.out.printf("%3d  ", temporary[k]);
		}
		System.out.println();

		System.out.println("returndArray:");
		for (int k = 0; k < lengthOfa; k++) {
			System.out.printf("%3d  ", returndArray[k]);
		}
		System.out.printf("\n\n");

		return returndArray;
	}

	private void drawLabel(int[] passed, int counter) {
		
		System.out.println("B4 REFRESH");
		try {
			Thread.sleep(3000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		refresh(counter);
		jPanelArray.setLayout(new GridLayout(counter + 1, lengthOfa, 0, 5));

		jLabelGridArr[counter] = new JLabel[lengthOfa];

		for (int i = 0; i < lengthOfa; i++) {
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			jLabelGridArr[counter][i] = new JLabel(String.format("%2d",
					passed[i]));
			jLabelGridArr[counter][i].setBorder(border);
			jLabelGridArr[counter][i].setBackground(Color.LIGHT_GRAY);
			jLabelGridArr[counter][i]
					.setFont(new Font("Serif", Font.PLAIN, 24));
			jLabelGridArr[counter][i].setHorizontalAlignment(JLabel.CENTER);
			jLabelGridArr[counter][i].setVerticalAlignment(JLabel.CENTER);
			jLabelGridArr[counter][i].setOpaque(true);
			jPanelArray.add(jLabelGridArr[counter][i]);
		}
	}

	private static int[] mergeSort(int passedArray[], int low, int high) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;

		System.out.printf("\n\n");
		System.out.println("PASSED_ARRAY:");
		for (int k = 0; k < passedArray.length; k++) {
			System.out.printf("%3d  ", passedArray[k]);
		}
		System.out.printf("\n\n");

		if ((high - low) == 1) {
			temporary = new int[passedArray.length];

			for (int i = 0; i < passedArray.length; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid);
		temporary = mergeSort(temporary, mid, high);

		int returndArray[] = new int[passedArray.length];

		for (int i = 0; i < passedArray.length; i++) {
			returndArray[i] = passedArray[i];
		}

		int i, j, counter = low;
		i = low;
		j = mid;

		// SOME OPTIMIZATION IS URGENTLY NEEDED
		while (counter < (high)) {

			if (i == mid) {
				while (j < high) {
					returndArray[counter] = temporary[j];
					j++;
					counter++;
				}
			} else if (j == high) {
				while (i < mid) {
					returndArray[counter] = temporary[i];
					i++;
					counter++;
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

		}

		// SHOWING RESULTS
		System.out.printf("\n\n");
		System.out.println("temporary:");
		for (int k = 0; k < temporary.length; k++) {
			System.out.printf("%3d  ", temporary[k]);
		}
		System.out.println();

		System.out.println("returndArray:");
		for (int k = 0; k < returndArray.length; k++) {
			System.out.printf("%3d  ", returndArray[k]);
		}
		System.out.printf("\n\n");

		return returndArray;
	}

	public void run() {
		// searchAuto();
		// quickSort(0, arr.size() - 1);
		mergeSort(a, 0, lengthOfa, 0);
	}

	private void ShowMessage(String message) {
		JOptionPane.showMessageDialog(null, message);
	}

	@Override
	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == jButtonStart) {
			Init();
		} else if (ae.getSource() == jButtonNext) {
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