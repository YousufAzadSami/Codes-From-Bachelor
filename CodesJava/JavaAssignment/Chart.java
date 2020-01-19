import java.util.*;

public class Chart
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);

		int count=0, n=0,i,j,flag;

		char ch='a';
		String str;

		System.out.printf("press A to add\npress D to show\npress Q to quit\n");

		while(ch!='q' || ch!='Q')
		{
			str=in.nextLine();
			ch=str.charAt(0);

			switch(ch)
			{
				case 'a':
				case 'A':
						count++;
						break;

				case 'd':
				case 'D':
				{
					flag=1;
					n=0;

					System.out.printf("chart:\n");

					for(i=0;i<4;i++)
					{
						for(j=0;j<(4-i);j++)
						{
							System.out.printf("%c ",('A'+n) );
							n++;

							if(n==count)
							{
								flag=0;
								break;
							}
						}

						System.out.println();

						if(flag==0)
							break;

					}

					//System.out.println();
				}

				break;

				case 'q':
				case 'Q':

			}
		}
	}
}
