import java.util.*;


class Staff{

	String name;
	String address;
	String phone;
	Staff(String naam,String add,String phn)
	{
		name=naam;
		address=add;
		phone=phn;
	}

	void show()
	{
		System.out.println("Name:"+name);
		System.out.println("Address:"+address);
		System.out.println("Phone:"+phone);
	}

}

class Employee extends Staff
{

	String id;
	private float basic;

	Employee(String a,String b,String c,String d,float e)
	{
		super(a,b,c);
		id=d;
		basic=e;
	}

	public float getbasic()
	{
		return basic;
	}

	void show()
	{
		super.show();
		System.out.println("Id:"+id);
		System.out.println("Basic:"+basic);
	}

}

class H_employee extends Employee
{

	float hr;

	H_employee(String a,String b,String c,String d,float e,float f)
	{
		super(a,b,c,d,e);
		hr=f;
	}

	void show()
	{
		super.show();
		System.out.println("Total salary:"+hr*getbasic());
	}

}

class Office
{

	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String name,address,phone,id;

		float basic,hour;

		System.out.print("Name:");
		name=scan.nextLine();

		System.out.print("Address:");

		address=scan.nextLine();
		System.out.print("Phone no:");

		phone=scan.nextLine();
		System.out.print("Id:");

		id=scan.nextLine();
		System.out.print("Basic:");

		basic=scan.nextFloat();
			System.out.print("Working hour:");
		hour=scan.nextFloat();

		H_employee ob=new H_employee(name,address,phone,id,basic,hour);

		ob.show();

	}
}