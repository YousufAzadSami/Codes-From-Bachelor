import java.awt.Graphics;

public class Bullet {

	private static final int X_VELOCITY = 1;
	public int x;
	public int y;
	public int yForBase;
	public int yOriginalBase;
	public final int RADIUS = 20;
	public final double RADIEN;
	public int panelWidth, panelHeight;
	private int xDirection = 1;
	private int yDirection = 1;

	public Bullet(double radien, int cannon_1_x2, int cannon_1_y1,
			int panelWidth, int panelHeight) {
		RADIEN = radien;
		yOriginalBase = cannon_1_y1;
		this.panelWidth = panelWidth;
		this.panelHeight = panelHeight;
		x = cannon_1_x2;
		yForBase = (int) (x * Math.tan(radien));
		y = yOriginalBase - yForBase;

	}

	public void draw(Graphics g) {

		g.drawOval(x, y, RADIUS, RADIUS);
	}

	public void checkBoundary() {
		if (x > panelWidth || x < 0) {
			xDirection = xDirection * -1;
		}
		if (y > panelHeight || y < 0) {
			yDirection = yDirection * -1;
		}

	}

	public void changXY() {
		x = x + X_VELOCITY ;
		yForBase = (int) (x * Math.tan(RADIEN));
		y = yOriginalBase - yForBase ;

	}

}
