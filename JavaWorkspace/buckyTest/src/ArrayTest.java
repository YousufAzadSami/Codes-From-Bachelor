import java.util.Scanner;


public class ArrayTest {
	
	public static void main( String args[])
	{
		int one[]={ 1,2,3,4,5,6,7,8,9};
		int one2[] = new int[50];		// int one2[50];
		
		for( int i=0 ; i< one.length ; i++)
		{
			System.out.printf("%3d   %3d\n", i, one[i]+10);
		}
		
		String name[] = new String[10];
		Scanner input = new Scanner (System.in);
		/*
		for(int i=0 ; i< name.length ; i++)
		{
			name[i] = input.nextLine();
		}
		
		for(int i=0 ; i< name.length ; i++)
		{
			System.out.printf("%3d ... %s\n", i, name[i]);
		}
		*/
		
		int two[][] = { {1,2,3,4,5} , {1,3} , {1,2,3,4,5,6,7,8} , {1} };
		
		for( int row=0 ; row< two.length ; row++)
		{
			
			System.out.print("row length:" + two[row].length + " :::row "+row+":" );
			
			for( int coloum=0 ; coloum< two[row].length; coloum++ )
			{
				System.out.printf("%5d", two[row][coloum] + row);
			}
			
			System.out.println();
		}
		
		int two2[][] = new int[5][3];
		/*
		for(int row =0 ; row< two2.length ; row++)
		{
			
			for(int coloum=0 ; coloum< two2[row].length ;coloum++)
			{
				two2[row][coloum] = input.nextInt();
			}
		}
		*/
		
		System.out.printf("Calculate average %f\n", calculate(12.54,123,2342.12312,34212.24123) );
				
	}
	
	public static double calculate (double...num)
	{
		double total = 0;
		
		for(int i=0 ; i<num.length ; i++)
		{
			total += num[i];
		}
		
		return total/num.length;
	}

}
