/*
public class TraiangleFile {

}
package filereadwrite;
import java.io.*;
*/

import java.io.*;
import java.util.Scanner;;

public class TraiangleFile
{
	public static String[] str = new String[10];
	public static Scanner in = new Scanner(System.in);
	   

   public static void main(String[] args) 
   {      
       fileWrite();
       fileRead();
   }
   
   public static void fileWrite()
   {
	   try
       {
            FileWriter fstream= new FileWriter("out.txt");
            BufferedWriter out=new BufferedWriter(fstream);
            
            System.out.println();
            System.out.println();
            System.out.println("input the 3 co-ordinates of a traingle:");
            System.out.println();
            
            for(int i=0; i<6; i++)
            {
            	str[i] = in.nextLine();
            	out.write(str[i]);
            }
            //out.write("Hello Java");
            
            
            out.close();
       }
       catch(Exception e)
       {
            System.err.println("Eror:"+e.getMessage());
       }
   }
   public static void fileRead()
   {
       try
       {
            FileInputStream fstream=new FileInputStream("out.txt");
            DataInputStream in=new DataInputStream(fstream);
            BufferedReader br=new BufferedReader(new InputStreamReader(in));
            String strLine;
            while((strLine=br.readLine())!=null)
            {
            	System.out.println();System.out.println();
                System.out.println(strLine);
                System.out.println();
            }
       }
       catch(Exception e)
       {
            System.err.println("Error:"+e.getMessage());
       }


   }
  
}

