import java.util.*;

public class buckyScanner {
	
		public static void main(String args[])
		{
			Scanner input = new Scanner( System.in);
			
			while(true)
			{	
				int i=input.nextInt();
				int j=input.nextInt();
				
				if(i==0 && j==0)
					break;
				
				int ans = i + j;
				
				System.out.printf("the ans is %d\n", ans);
			}
			
		}

}
