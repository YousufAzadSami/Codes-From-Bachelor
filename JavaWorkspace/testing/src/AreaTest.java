
public class AreaTest {

	public static void main( String args[] )
	{
		Area ob1 = new Area(33.33, 44.3294);
		Area ob2 = new Area();
		
		System.out.println("from object 1:");
		ob1.showOff();
		System.out.println();
		System.out.println("from object 2:");
		ob2.showOff();
		System.out.println();
		
		
		System.out.println("from object 1:");
		System.out.println(ob1.calculateArea());
		System.out.println();
		System.out.println("from object 2:");
		System.out.println(ob2.calculateArea());
		System.out.println();
		
	}
}
