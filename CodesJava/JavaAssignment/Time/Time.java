class Time
{
	int hour,min,sec;
	String ampm;

	Time(int h, int m, int s, String str)
	{
		hour=setHour(h);
		min=setMin(m);
		sec=setSec(s);

		ampm=str;
	}

	int setHour(int h)
	{
		if(h>=0 && h<=24)
			return h;
		else
			return 0;
	}

	int setMin(int m)
	{
		if(m>=0 && m<=60)
			return m;
		else
			return 0;
	}

	int setSec(int s)
	{
		if(s>=0 && s<=60)
			return s;
		else
			return 0;
	}

	void format24()
	{
		System.out.printf("Time in 24 hour format is: %2d:%2d:%2d \n", (ampm.equals("pm")? hour+12:hour), min, sec);
	}

	void increase()
	{
		//min++;

		//if(min+1==60)
		//{
		//	if(hour==12)
		//	{
				//hour++;
		//		if(equals(str, "AM"))
		//		{
		//			System.out.printf("");
		//		}
				System.out.printf("Increased time is : %2d:%2d:%2d %s\n", ( (min+1==60) ? (hour==12?(hour+1)%12:hour+1) : hour), (min+1)==60? 00:min+1, sec, (min+1==60 && hour+1==12)? (ampm.equals("pm")? "am":"pm"):ampm );

		//	}
		//}
	}


}