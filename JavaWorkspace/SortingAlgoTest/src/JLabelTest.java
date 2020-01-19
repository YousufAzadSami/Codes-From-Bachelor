import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GridLayout;

import javax.swing.BorderFactory;
import javax.swing.BoxLayout;
import javax.swing.JApplet;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class JLabelTest extends JApplet implements Runnable {

	private JLabel j[][] = new JLabel[4][];
	private JLabel jj[] = new JLabel[50];
	private JPanel panel;
	int count = 0;

	// Thread t;

	@Override
	public void destroy() {
		super.destroy();
	}

	@Override
	public void init() {
		super.init();

		this.setSize(800, 400);
		setLayout(new BorderLayout());
		panel = new JPanel();
		// setLayout(new BorderLayout());
		add(panel, BorderLayout.CENTER);
		// //panel.setSize(600, 400);
		panel.setBackground(Color.red);
		// //System.out.println(panel.getBounds());
		// //System.out.println(panel.getX() + " " + panel.getY());
		// System.out.println(this.getBounds());
		panel.setLayout(new GridLayout(2, 10, 1, 10));
		// t = new Thread(this);
		// t.start();

		// setLabels();
		initializeLabels();
		setLabelsTwo();
		
		jj[11].setText("fuck");

	}

	private void setLabels() {

		for (int k = 0; k < 4; k++) {
			j[k] = new JLabel[10];
			for (int i = 0; i < 10; i++) {
				j[k][i] = new JLabel("" + count++);
				j[k][i].setBorder(BorderFactory.createLineBorder(Color.CYAN));
				j[k][i].setFont(new Font("Serif", Font.PLAIN, 24));
				j[k][i].setHorizontalAlignment(JLabel.CENTER);
				j[k][i].setVerticalAlignment(JLabel.CENTER);
				// j[k][i].setOpaque(true);
				panel.add(j[k][i]);
				
			}

			// panel.setLayout(new GridLayout(k + 1, 10, 0, 5));

			// try {
			// Thread.sleep(2000);
			// } catch (InterruptedException e) {
			// // TODO Auto-generated catch block
			// e.printStackTrace();
			// }

		}
	}
	
	private void initializeLabels(){
		int i;
		for(i=0;i<jj.length;i++){
			jj[i] = new JLabel();
		}
	}

	private void setLabelsTwo() {
		int i = 0;

		for (i = 0; i < 21; i++) {
//			jj[i] = new JLabel("" + count++);
			jj[i].setText(""+count++);
			jj[i].setBorder(BorderFactory.createLineBorder(Color.YELLOW));
			jj[i].setFont(new Font("Serif", Font.PLAIN, 24));
			jj[i].setHorizontalAlignment(JLabel.CENTER);
			jj[i].setVerticalAlignment(JLabel.CENTER);
			panel.add(jj[i]);
		}
	}

	@Override
	public void run() {
		setLabels();
		System.out.println("in run .........");
	}

	@Override
	public void stop() {
		super.stop();
	}

}
