import java.util.*;

class Stack
{
	public static void main(String args[])
	{

		Scanner in= new Scanner(System.in);

		int[] arr= new int[10];

		int n=1,top=0,i,var;

		System.out.printf("press 1 to add\npress 2 to remove \n press 3 to show\n");


		while(n!=0)
		{
			n=in.nextInt();

			switch(n)
			{
				case 1:
					var=in.nextInt();
					arr[top]=var;
					top++;
					break;

				case 2:arr[--top]=0;
					break;

				case 3:for(i=0;i<top;i++)
					{
						System.out.printf("%d\n",arr[i]);
					}
			}
		}
	}
}