abstract class Shape
{
	private double height;
	private double width;

	Shape(double h, double w)
	{
		height=h;
		width=w;
	}

	abstract double area();

	double getHeight()
	{
		return height;
	}

	double getWidth()
	{
		return width;
	}

	void show()
	{
		System.out.printf("the height and width is %f %f\n",height, width);
	}
}