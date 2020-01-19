import java.awt.Graphics2D;

public class Cannon {

	public int x1, x2 = 50;
	public int y1, y2 = 10;
	public float xFraction = 1;
	public float yFraction = 1;
	public double degree = 0;
	public double radien = 0;
	public float floatDegree = 1;
	private int radius;

	public Cannon(int x1, int y1, int x2, int y2) {
		this.x1 = x1;
		this.y1 = y1;
		this.x2 = x2;
		this.y2 = y2;
		radius = x2 - x1;

	}

	public void drawCannon(Graphics2D g2d) {
		g2d.drawLine(x1, y1, x2, y2);
	}

	public void incrementY() {
		yFraction = yFraction + .1f;
		y1 = y2 = (int) (y1 + yFraction);
	}

	public void decrementY() {
		yFraction = yFraction + .1f;
		y1 = y2 = (int) (y1 - yFraction);
	}

	public void incrementDegree() {
		floatDegree = floatDegree + .1f;
		degree = (int) (degree + floatDegree);
		if(degree>360)
			degree = 0;
		
		degreeToRadien();
	}

	public void decrementDegree() {
		floatDegree = floatDegree + .1f;
		degree = (int) (degree - floatDegree);
		if(degree<0)
			degree = 360;
		
		degreeToRadien();
	}

	public void setX2() {
		int x2ForBaseZero = (int) (radius * Math.cos(radien)) ;
		x2 = x1 + x2ForBaseZero ;
	}

	public void setY2() {
		int y2ForBaseZero = (int) (radius * Math.sin(radien));
		y2 = y1 - y2ForBaseZero ;
	}

	public void degreeToRadien() {
		radien = (3.1416 / 180 * degree);
		//return (3.1416 / 180 * degree);
	}

}
