import java.awt.BasicStroke;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JPanel;

public class TestRotation extends JPanel implements Runnable {

	private int x1;
	private int y1;
	private int y2;
	int x2;
	private int radius;
	private Thread t;
	private int degree;
	private int x2ForBase;
	private int y2ForBase;
	private int xForGuli;
	public boolean guliFlag = false;

	public TestRotation() {
		x1 = y1 = y2 = 100;
		x2 = 150;

		radius = x2 - x1;

		ListenerForKey listenerForKey = new ListenerForKey();
		addKeyListener(listenerForKey);
		setFocusable(true);

		t = new Thread(this);
		t.start();

	}

	public void run() {
		while (true) {
			repaint();

			try {
				Thread.sleep(10);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}

	public void paint(Graphics g) {
		Graphics2D g2d = (Graphics2D) g;
		g.clearRect(0, 0, getWidth(), getHeight());

		g2d.setStroke(new BasicStroke(6));
		g.drawLine(x1, y1, x1 + x2ForBase, y1 - y2ForBase);
		g.drawString("degree : " + degree, 10, 10);
		g.drawString("degree : " + degreeToRadian(), 10, 30);
		
		positionOfX2();
		positionOfY2();
		
		g.drawString("x2Base: " + x2ForBase + " y2Base :" + y2ForBase , 10, 50);
		g.drawString("x2: " + (x2ForBase + x1) + " y2 :" + (y2ForBase + y1) , 10, 90);
		
		if(guliFlag = true && xForGuli<getWidth())
		{
			g.drawOval(xForGuli++, (int) (xForGuli * Math.tan(degreeToRadian())) , 20 ,20);
		}

	}

	private double degreeToRadian() {

		return (3.1416 / 180 * degree);
	}

	public void positionOfX2() {
		x2ForBase = (int) (radius * Math.cos(degreeToRadian()));
	}

	public void positionOfY2() {
		y2ForBase = (int) (radius * Math.sin(degreeToRadian()));
	}

	public class ListenerForKey extends KeyAdapter {

		public void keyPressed(KeyEvent ke) {

			if (KeyEvent.VK_UP == ke.getKeyCode()) {
				y1--;
				y2--;
				System.out.println("up");
			}
			if (ke.getKeyCode() == KeyEvent.VK_DOWN) {
				y1++;
				y2++;
				System.out.println("down");
			}
			if (ke.getKeyCode() == KeyEvent.VK_LEFT) {
				x1--;
				x2--;
				System.out.println("left");
			}
			if (ke.getKeyCode() == KeyEvent.VK_RIGHT) {
				x1++;
				x2++;
				System.out.println("right");
			}
			if (KeyEvent.VK_W == ke.getKeyCode()) {
				degree++;
				if (degree > 359)
					degree = 0;
				System.out.println("W");
			}
			if (ke.getKeyCode() == KeyEvent.VK_S) {
				degree--;
				if (degree < 0)
					degree = 360;
				System.out.println("S");
			}
			if(ke.getKeyCode() == KeyEvent.VK_SPACE)
			{
				xForGuli = x1 + x2ForBase;
				guliFlag = true;
				
			}
		}
		public void KeyReleased(KeyEvent ke){
			
		}
		// repaint();

	}

}
