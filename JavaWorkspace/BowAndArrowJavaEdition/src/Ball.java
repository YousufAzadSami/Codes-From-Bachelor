import java.awt.Graphics;
import java.awt.Graphics2D;

public class Ball {

	int x;
	int y;
	int diameter;
	private int directionX = 1;
	private int directionY = 1;
	private float xFloat;
	private float yFloat;

	public Ball(int x, int y, int diameter) {
		this.x = x;
		this.y = y;
		xFloat = 200;
		yFloat = 200;
		this.diameter = diameter;

		System.out.println("x:" + x + "y:" + y);
		System.out.println("this.x:" + this.x + "this.y:" + this.y);
	}

	public void drawBall(Graphics2D g2d) {
		g2d.drawOval(x, y, diameter, diameter);
		//g.drawOval(x + 1, y + 1, diameter, diameter);
	}

	/*
	 * public void incrementX() { x = x + pixelIncreasePerFrame * directionX; }
	 * 
	 * public void incrementY() { y = y + pixelIncreasePerFrame * directionY; }
	 */

	public void incrementX(float pixelIncreasePerFrame) {
		xFloat = xFloat + pixelIncreasePerFrame * directionX;
		// x = x + pixelIncreasePerFrame * directionX;
		x = (int) xFloat;
	}

	public void incrementY(float pixelIncreasePerFrame) {
		yFloat = yFloat + pixelIncreasePerFrame * directionY;
		y = (int) yFloat;
	}

	public int getDirectionX() {
		return directionX;
	}

	public void setDirectionX(int directionX) {
		this.directionX *= directionX;
	}

	public int getDirectionY() {
		return directionY;
	}

	public void setDirectionY(int directionY) {
		this.directionY *= directionY;
	}
}
