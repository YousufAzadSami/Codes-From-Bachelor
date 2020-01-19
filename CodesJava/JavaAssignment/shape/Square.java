class Square extends Shape
{
	Square(double h, double w)
	{
		super(h,w);
	}

	double area()
	{
		return ( getHeight() * getWidth() );
	}


}