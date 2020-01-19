import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JPanel;

public class JPanelClass extends JPanel implements Runnable {

	Thread t;
	Ball ball_1;
	Cannon cannon_1;
	private final float xPixelincreasePerFrame = (float) 0.5;
	private final float yPixelincreasePerFrame = 1;
	Bullet b;

	public JPanelClass() {
		// t = Thread.currentThread(); // this doesn't work, i have no idea
		// why!!! :@
		System.out.printf("%20s : %s\n", "b4 thread", Thread.currentThread());
		t = new Thread(this);
		System.out.printf("%20s : %s\n", "aftr thread", Thread.currentThread());
		System.out.printf("%20s : %s\n", "only t", t);
		// this.t = t;
		ball_1 = new Ball(105, 105, 30);
		System.out.println("in constructor x:" + ball_1.x + "y:" + ball_1.y);
		cannon_1 = new Cannon(20, 562 / 2, 70, 562 / 2);

		ActionListenerKey keyListener = new ActionListenerKey();
		addKeyListener(keyListener);
		// NEED THIS METHOD, I DONT WHY ....... NEVER USED IT B4
		setFocusable(true);
		// //////////////////////////////////////////////////////

		setBackground(Color.CYAN);

		t.start();
	}

	public void paint(Graphics g) {
		super.paint(g);

		Graphics2D g2d = (Graphics2D) g;
		// System.out.println("in paint");

		g2d.drawLine(100, 0, 100, 600);
		g2d.drawString("x:" + ball_1.x + "y:" + ball_1.y, 20, 550);
		g2d.drawString("height:" + getHeight() + "width:" + getWidth(), 20, 530);
		g2d.drawString("Degree:" + cannon_1.degree, 20, 510);
		g2d.drawString("radien:" + cannon_1.radien, 20, 490);
		g2d.drawString("x2:: " + cannon_1.x2 + "y2:: " + cannon_1.y2, 20, 470);

		g2d.setColor(Color.BLACK);
		ball_1.drawBall(g2d);

		cannon_1.drawCannon(g2d);

		if (b != null) {
			b.draw(g);
			b.checkBoundary();
		}

	}

	public void run() {
		System.out.printf("%20s : %s\n", "in run", Thread.currentThread());

		while (true) {
			repaint();
			change();

			try {
				Thread.sleep(5);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}

	}

	private void change() {
		// System.out.println("in change");
		if (ball_1.x > (getWidth() - ball_1.diameter) || ball_1.x <= 100) {
			ball_1.setDirectionX(-1);
		}
		if (ball_1.y > (getHeight() - ball_1.diameter) || ball_1.y < -2) {
			ball_1.setDirectionY(-1);
		}

		ball_1.incrementX(xPixelincreasePerFrame);
		ball_1.incrementY(yPixelincreasePerFrame);
		cannon_1.setX2();
		cannon_1.setY2();

		if (b != null) {
			b.changXY();
		}
	}

	public class ActionListenerKey extends KeyAdapter {
		public void keyPressed(KeyEvent ke) {

			int keyTemp = ke.getKeyCode();

			if (KeyEvent.VK_DOWN == keyTemp) {
				cannon_1.incrementY();
			}
			if (KeyEvent.VK_UP == keyTemp) {
				cannon_1.decrementY();
			}
			if (KeyEvent.VK_W == keyTemp) {
				cannon_1.incrementDegree();
			}
			if (KeyEvent.VK_S == keyTemp) {
				cannon_1.decrementDegree();
			}
			if (KeyEvent.VK_SPACE == keyTemp) {
				b = new Bullet(cannon_1.radien , cannon_1.x2 , cannon_1.y1, getWidth(), getHeight());
			}
		}

		public void keyReleased(KeyEvent ke) {
			cannon_1.xFraction = 1;
			cannon_1.yFraction = 1;
			cannon_1.floatDegree = 1;
		}
	}

}
