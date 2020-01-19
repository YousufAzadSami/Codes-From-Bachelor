import java.util.Random;

public class MathClass {

	public static void main ( String args[] )
	{
		//int a, b, c;
		int number;
		
		Random dice = new Random();
		
		System.out.printf("the value of PI is %f\n", Math.PI);
		
		System.out.printf("ceiling func %.0f\n", Math.ceil(4.5));
		
		System.out.printf("the maximum number of this two is %f\n", Math.max( 234.45, 2342342.12));
		
		System.out.printf("the square of the number %f is %f\n" , 24.0, Math.pow(24 , 2));
		
		System.out.printf("the square of the number %f is %f\n" , 24.0 , Math.sqrt(24 ));
		
		for(int counter=1 ; counter<11; counter++)
		{
			number = dice.nextInt(100);
			System.out.printf("%2d=%3d\n",counter,  number);
		}
		
	}
}
