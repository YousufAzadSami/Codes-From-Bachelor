import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);

		System.out.printf("Enter height:");
		double ucchota = in.nextDouble();

		System.out.printf("Rnter width:");
		double prostho = in.nextDouble();

		Square box = new Square(ucchota, prostho);
		Traingle trivuz = new Traingle(ucchota, prostho);

		System.out.printf("show mehtod in shape class:\n");
		box.show();

		//System.out.printf("The area of square is:");
		System.out.printf("the area of square is : %10.3f\n",box.area());

		//System.out.printf("The area of triangle is:");
		System.out.printf("the area of traingle is : %10.3f\n",trivuz.area());
	}
}