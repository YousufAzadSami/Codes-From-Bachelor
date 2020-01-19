import java.util.Scanner;


public class PrintAstericks
{
	public static void main(String[] args)
	{
		//System.out.print("  ******\n *      * \n*        *\n*        *\n *      * \n  ******\n");

		//System.out.print("  *\n ***\n*****\n  *\n  *\n  *\n  *\n  *\n  *\n  *\n");

		Scanner input=new Scanner(System.in);

		int a,b,c,d,e,large,small;

		System.out.println("Enter ur five numbers: ");

		a=input.nextInt();
		b=input.nextInt();
		c=input.nextInt();
		d=input.nextInt();
		e=input.nextInt();

		if(a>b)
			if(a>c)
				if(a>d)
					if(a>e)
						large=a;
					else
						large=e;
				else
					if(d>e)
						large=d;
					else
						large=e;
		else




	}
}