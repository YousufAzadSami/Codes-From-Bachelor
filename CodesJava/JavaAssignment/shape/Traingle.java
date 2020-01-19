class Traingle extends Shape
{
	Traingle(double h, double w)
	{
		super(h,w);
	}

	double area()
	{
		return ( .5 * getHeight() * getWidth() );
	}

}