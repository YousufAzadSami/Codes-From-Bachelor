import java.util.Scanner;
import java.util.InputMismatchException;

public class ExceptionHandling {

	/**
	 * @param args
	 */
	public static int division(int n1,int n2)
	{
		return division2(n1, n2);
	}
	public static int division2(int num1, int num2)
	{
		return num1/num2;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner input = new Scanner( System.in);
		int a1=1,a2=2;
//		boolean flag = true;
		

		try
		{
			System.out.println("Pls enter ur FIRST number:");
			a1 = input.nextInt();
			System.out.println("Pls enter ur SECOND number:");
			a2 = input.nextInt();
			
			int result = division( a1, a2);
			System.out.printf("Result is %d\n", result);
			
			System.out.println("yes full code has been executed! :)");
		}
		
		catch(InputMismatchException a)
		{
			System.err.printf("Exception: %s\nUR FUCKED NOW !!!\n", a);
		}
		
		/*
		catch(ArithmeticException a)
		{
			System.err.printf("Exception: %s\nMUHAHAHAAAA\n", a);
		}
		*/
		
		
		System.out.printf("ur inputed numbers ar %d %d", a1, a2);
		

	}

}
