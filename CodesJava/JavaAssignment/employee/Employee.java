class Employee extends Staff{

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