
public class TestSleep
{

	public static void main ( String [ ] args )
	{
		System.out.println("Do this stuff");
		
		try { 
			Thread.currentThread().sleep(3000); 
		}
		
		catch ( Exception e ) { 
			System.out.println(e.getMessage());
		}
		
		
		System.out.println("Now do everything after this");
	}
}