import java.util.Scanner;

public class Pyramid
{
	public static void main(String[] args)
	{
		char chart[][] = new char[4][4];
		int i=0,j=0,count=0;

		char ch='0';
		String str=new String();

		Scanner in = new Scanner(System.in);

		while(ch!='Q' || ch!='q')
		{
			System.out.printf("Please press 'A' or 'R' or 'Q'\n");

			str= in.nextLine();
			ch= str.charAt(0);
			//ch = in.nextChar();
			//ch=Str.charAt(0)

			switch (ch)
			{
				case 'a':
				case 'A':
						{
							chart[i][j]=(char)('A'+ count++);

							j++;
							if(i+j>3)
							{
								i++;
								j=0;
							}

							chart[i][j]='0';

						}
						break;

				case 'd':
				case 'D':
						{
							int ii,jj;

							for(ii=0;ii<=i;ii++)
							{

								for(jj=0;chart[ii][jj]!='0';jj++)
								{
									System.out.printf("%c ",chart[ii][jj]);
								}

								System.out.println();
							}
						}
						break;

				case 'q':
				case 'Q':
						break;

			}
		}
	}
}