import java.util.*;

public class Main
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		Scanner input = new Scanner(System.in);

		int hour, min, sec;
		String ampm;

		hour = in.nextInt();
		min = in.nextInt();
		sec = in.nextInt();

		ampm = input.nextLine();

		Time somoi = new Time(hour, min, sec , ampm);

		somoi.format24();

		somoi.increase();


	}
}