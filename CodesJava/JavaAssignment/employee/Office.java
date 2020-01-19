
import java.util.Scanner;



public class Office
{

	public static void main(String args[])
	{
		String name;
		String address;
		String phone;
		String id;
		float basic;
		float hour;

		Scanner scan=new Scanner(System.in);

		System.out.print("Enter your name:");
		name=scan.nextLine();

		System.out.print("Enter your address:");
		address=scan.nextLine();

		System.out.print("Enter your phone no:");
		phone=scan.nextLine();

		System.out.print("Enter your ID:");
		id=scan.nextLine();

		System.out.print("Enter your basic:");
		basic=scan.nextFloat();

		System.out.print("Enter your working hour:");
		hour=scan.nextFloat();

		HEmployee salary=new HEmployee(name,address,phone,id,basic,hour);
		salary.show();

	}
}