import java.util.Scanner;

public class Test1
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);

		int a,b;

		a=input.nextInt();
		b=input.nextInt();

		System.out.print("sum"+(a+b)+"difference"+(a-b)+"product"+a*b+"division"+a/b);
	}
}