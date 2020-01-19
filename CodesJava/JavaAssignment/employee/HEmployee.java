class HEmployee extends Employee
{

	float hr;

	HEmployee(String a,String b,String c,String d,float e,float f)
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