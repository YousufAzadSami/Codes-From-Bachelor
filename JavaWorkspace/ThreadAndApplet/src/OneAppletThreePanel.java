import java.applet.Applet;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Component;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.management.ListenerNotFoundException;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JPanel;

public class OneAppletThreePanel extends JApplet implements Runnable, ActionListener {
	private JPanel j1;
	private JPanel j2;
	private JPanel j3;
	private JButton jb1;
	private Component jb2;
	private JButton jb3;
	private Thread t = null;

	public void init() {

		setLayout(new BorderLayout());
		setSize(300, 500);
		//ListenerForButtons lfb = new ListenerForButtons();

		j1 = new JPanel();
		j2 = new JPanel();
		j3 = new JPanel();

		// ////////////////////////////
		// j1.setSize(width, height)
		// System.out.println("height:" + j1.getHeight() + "width" +
		// j1.getWidth());
		j1.setBackground(Color.red);
		jb1 = new JButton("panel_1");
		j1.add(jb1);
		jb1.addActionListener(this);

		j2.setBackground(Color.blue);
		jb2 = new JButton("panel_2");
		j2.add(jb2);
		//jb2.addActionListener(this);                               //showing error :O
		
		

		j3.setBackground(Color.YELLOW);
		jb3 = new JButton("panel_3");
		j3.add(jb3);
		jb3.addActionListener(this);

		// ////////////////////////////

		add(j1, BorderLayout.NORTH);
		add(j2, BorderLayout.SOUTH);
		add(j3, BorderLayout.CENTER);

		System.out.printf("%20s : %s", "b4 Thread", Thread.currentThread());

		System.out
				.printf("\n%20s : %s", "after Thread", Thread.currentThread());

	}

	public void run() {

		System.out.printf("\n%20s : %s", "in run", Thread.currentThread());

		while (true) {

			try {
				Thread.sleep(1000);
			} catch (InterruptedException e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}

			jb3.setVisible(false);

			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

			jb3.setVisible(true);
		}

	}

	public void start() {
		System.out.printf("\n%20s : %s", "in start", Thread.currentThread());
	}

	// PAINT MAETHOD THAKLE jBUTTON AAR jPANEL PRB KORE, KANO JANI NA. OTHERWISE
	// THE CODE WORKS AS EXPECTED
	/*
	 * public void paint(Graphics g){ System.out.printf("\n%20s : %s",
	 * "in paint", Thread.currentThread()); }
	 */

	public void stop() {
		System.out.printf("\n%20s : %s", "in stop", Thread.currentThread());
	}

	public void destroy() {
		System.out.printf("\n%20s : %s", "in destroy", Thread.currentThread());
	}
	
	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == jb1) {
			System.out.printf("\n%20s : %s", "actionPerformed_Jb1", Thread.currentThread());
			if(t==null){
				t = new Thread(this);
				t.start();
			}
		}
		if (ae.getSource() == jb2) {

		}
		if (ae.getSource() == jb3) {
			System.out.printf("\n%20s : %s", "actionPerformed_Jb3", Thread.currentThread());
			if(t!=null){
				t.stop();
				t=null;
			}
			System.out.printf("\n%20s : %s", "actionPerformed_Jb3", Thread.currentThread());
		}

	}

	
}
