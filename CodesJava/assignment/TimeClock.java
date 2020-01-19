// Java Lab assignment
// Roll: 11.01.04.096

class Time
{
   private int hour;
   private int minute;
   private int second;


   public void setTime( int h, int m, int s )
   {
	    if(hour>=0 && h<24)
		   hour=h;
		else
			hour=0;


		if(minute>=0 && m<60)
			minute=m;
		else
			minute=0;


		if(s>=0 && s<60)
			second=s;
		else
			second=0;

   }

   public void _24hour()
   {
      System.out.printf( "%02d:%02d:%02d", hour, minute, second );
   }

   public void normal()
   {
	   	int hHour;
	   	String ampm;


	    if(( hour == 0 || hour == 12 ))
	   		hHour=12;
	   	else
	   		hHour=hour%12;

	   	if(hour<12)
	   		ampm="AM";
	   	else
	   		ampm="PM";
      System.out.printf( "%d:%02d:%02d %s",hHour,minute, second, ampm );
   }
}

public class TimeClock
{
	public static void main(String[] args)
	{
		Time somoi= new Time();

		somoi.setTime(13,123,23);

		System.out.printf("time in 24 hour format is:\n");
		somoi._24hour();

		System.out.printf("\nthe conventional System:\n");
		somoi.normal();
	}
}

