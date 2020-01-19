import java.util.*;

class Loop
{
	public static void main(String[] args)
	{
		System.out.printf("Press any key between 1 and 5:\n");

		Scanner in=new Scanner(System.in);

		int ch=65,i,j;

		int n=in.nextInt();

		for(i=n;i>0;i--)
		{
			for(j=1;j<=i;j++)
			{
				System.out.printf("%c",ch++);
			}

			System.out.printf("\n");
		}

		System.out.println();


	}
}