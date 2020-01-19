class Staff{
	String name;
	String address;
	String phone;

	Staff(String n,String ad,String ph)
	{
		name=n;
		address=ad;
		phone=ph;
	}
	void show()
	{
		System.out.println("Name:"+ name);
		System.out.println("Address:"+ address);
		System.out.println("Phone:"+ phone);
	}

}