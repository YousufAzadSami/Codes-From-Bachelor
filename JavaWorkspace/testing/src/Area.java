
public class Area {
	private double length;
	private double width;
	
	Area()
	{
		length = 1;
		width = 1;
	}
	Area( double l, double w)
	{
		length = l;
		width =w;
	}
	
	void showOff()
	{
		System.out.printf("The length is %f\nThe width is %f", length, width);
	}
	
	
	double calculateArea()
	{
		return length * width;
	}
}
