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

public class bubbleSort extends JApplet implements ActionListener, Runnable {

	// private Integer I;
	private int I;

	private String z;
	private ArrayList<String> arr = new ArrayList<String>();

	private Border border;
	private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
	private JTextField jTextFieldArr, jTextFieldZ;
	private JButton jButtonStart, jButtonNext, jButtonClear;
	private JLabel jLabelGridArr[];

	private Thread t;

	public void init() {
		setLayout(new BorderLayout());
		jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
		jPanelHeader.setBackground(Color.DARK_GRAY);
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
		jPanelArray.setBackground(Color.LIGHT_GRAY);

		jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
		jPanelFooter.add(new JLabel(
				"Developed By :: Md. Yousuf Azad (ID :: 11.01.04.096"));
		add(jPanelFooter, BorderLayout.SOUTH);
		setSize(950, 125);

		border = BorderFactory.createLineBorder(Color.BLACK);
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


		arr.clear();
		while (st.hasMoreTokens()) {
			temp = st.nextToken().trim();
			if (temp.length() > 0) {
				arr.add(temp);
			}
		}
		if (arr.size() == 0) {
			ShowMessage("Please Insert An Array To Search");
			return;
		} else if (arr.size() > 25) {
			ShowMessage("Array Cannot Be Greater Than 25");
			return;
		}

		z = jTextFieldZ.getText().trim();

		if (z.trim().equals("")) {
			ShowMessage("Please Insert A Searching Value");
			return;
		}

		jLabelGridArr = new JLabel[arr.size()];
		jPanelArray.setLayout(new GridLayout(1, arr.size()));

		for (int i = 0; i < arr.size(); i++) {
			jLabelGridArr[i] = new JLabel(arr.get(i));
			jLabelGridArr[i].setBorder(border);
			jLabelGridArr[i].setBackground(Color.LIGHT_GRAY);
			jLabelGridArr[i].setFont(new Font("Serif", Font.PLAIN, 24));
			jLabelGridArr[i].setHorizontalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setVerticalAlignment(JLabel.CENTER);
			jLabelGridArr[i].setOpaque(true);
			jPanelArray.add(jLabelGridArr[i]);
		}
		I = -1;
		jButtonStart.setEnabled(false);
		jButtonNext.setEnabled(true);
		refresh();
	}

	private void refresh() {
		setSize(1950, 500);
		setSize(950, 125);
	}

	void bubbleSort(int n) {
		int i, j;
		String temp;

		n = n - 1;

		for (i = 0; i < n; i++) {
			for (j = 0; j < n - i; j++) {
				
				jLabelGridArr[j].setBackground(Color.CYAN);
				jLabelGridArr[j + 1].setBackground(Color.BLUE);
				
				if (Integer.parseInt(jLabelGridArr[j].getText()) > Integer
						.parseInt(jLabelGridArr[j + 1].getText())) {
					
					temp = jLabelGridArr[j + 1].getText();
					jLabelGridArr[j + 1].setText((jLabelGridArr[j].getText()));
					jLabelGridArr[j].setText(temp);

					try {
						Thread.sleep(700);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}

					jLabelGridArr[j].setBackground(Color.BLUE);
					jLabelGridArr[j + 1].setBackground(Color.CYAN);
				}

				try {
					Thread.sleep(400);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}

				jLabelGridArr[j].setBackground(Color.LIGHT_GRAY);
				jLabelGridArr[j + 1].setBackground(Color.LIGHT_GRAY);

			}

			jLabelGridArr[n - i].setBorder(BorderFactory.createLineBorder(
					Color.BLACK, 5));

		}

	}

	public void run() {
		// searchAuto();
		// quickSort(0, arr.size() - 1);
		bubbleSort(arr.size());
	}

	private void ShowMessage(String message) {
		JOptionPane.showMessageDialog(null, message);
	}

	@Override
	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == jButtonStart) {
			Init();
		} else if (ae.getSource() == jButtonNext) {
			t = new Thread(this);
			// WITH THREAD, ANIMATION WORKS :)
			t.start();
		} else if (ae.getSource() == jButtonClear) {
			jButtonStart.setEnabled(true);
			jButtonNext.setEnabled(false);
			jPanelArray.removeAll();
			refresh();
			RandomGenerator();
		}
	}
}