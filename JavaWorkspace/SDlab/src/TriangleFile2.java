import java.io.*;
import java.util.*;




public class TriangleFile2 {
	
	String[] a,b = new String[2];
	Scanner in = new Scanner(System.in);
	private Formatter fi;
	
	public void openFile()
	{
		try{
			fi = new Formatter("triangle.txt");
		}
		catch(Exception e)
		{
			System.out.println("Cannot open file");
		}
	}	
	
	public void write(){

		for(int i=0; i<3; i++)
		{
			a[i] = in.nextLine();
			b[i] = in.nextLine();
			fi.format("%s %s", a[i], b[i]);
		}
	}
	
	public void close()
	{
		fi.close();
	}
	

}
