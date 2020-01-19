import java.io.*;

class FileWriter
{
	public static void main(String args[])
	{
		try{
			//create file
			FileWriter fststream=new FileWriter("out.txt");
			BufferedWriter out=new BufferedWriter(fststream);
			out.write("Hello java");
			//close the output stream
			out.close();
		}
		catch(Exception e){//Catch exception if any
		         System.err.println("Error"+ e.getMessage());
         }

	}
}