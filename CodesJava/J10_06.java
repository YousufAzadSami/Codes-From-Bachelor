import java.util.*;

class Student
{
	int roll;
	String name=new String();
	int mark;

	Student()
	{
		Scanner scForInteger = new Scanner(System.in);	//integer aar String er jonno "Scanner" class er dui ta alada object use korle ei
		Scanner scForString = new Scanner(System.in);	//prb ta hobe na...arektu details jante chaile fn de :P
														//likhe bujhano ektu tough, specially cz ami nij o ektu kom bujhi baper ta

		int r=scForInteger.nextInt();
		String n=scForString.nextLine(); // can't handle the error !!
		int m=scForInteger.nextInt();

		roll=r;
		name=n;
		mark=m;
		}
		void Display(){
		System.out.println("Roll: "+roll);
		System.out.println("Name: "+name);
		System.out.println("Mark: "+mark);
	}
}

class J10_06
{
	public static void main(String args[])
	{
		Student S = new Student();
		S.Display();
	}
}