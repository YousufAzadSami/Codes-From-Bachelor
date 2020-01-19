import java.io*;
class FileRead
{
public static void main(String args[])
{
try{
//open the file that is the first
//command line parameter
FileInputStream fstream=new FileInputStream("textfile.txt");
//Get the object of DataInputStream
DataInputStream in=new DataInputStream(fstream);
BufferedReader br=new BufferedReader(new InputStreamReader(in));
string strLine;
//Read File Line by Line
while((strline=br.readline()!=null){
//print the content on the console
   System.out.println(strLine);
   }


  //Close the input stream
  in.close();
  }
  catch(Exception e){//Catch exception if any
         System.err.println("Error:"+e.getMessage());
         }
         }