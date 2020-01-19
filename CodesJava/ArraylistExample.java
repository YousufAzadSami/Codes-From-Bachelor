import java.util.ArrayList;

public class ArraylistExample{
	public static void main(String[] args){

		ArrayList<Integer> name = new ArrayList<Integer>();
		//ArrayList<String> items = new ArrayList<String>();


		name.add(0);
		name.add(1);
		name.add(2);
		name.add(3);
		name.add(4);
		name.add(5);
		name.add(6);

		for(int i=0; i<name.size(); i++)
		{
			System.out.println("index "+ i +" ur f***ing arraylist element ::: " + name.get(i) );
			System.out.printf("index %d ur f***ing arraylist element ::: %d\n\n",i, name.get(i) );
		}

		System.out.println("//////////////////////////////////////////////////////////");
		name.remove(3);

		for(int i=0; i<name.size(); i++)
		{
			System.out.println("index "+ i +" ur f***ing arraylist element ::: " + name.get(i) );
			System.out.printf("index %d ur f***ing arraylist element ::: %d\n\n",i, name.get(i) );
		}

		name.add(4,3);

		System.out.println("//////////////////////////////////////////////////////////");

		for(int i=0; i<name.size(); i++)
		{
			System.out.println("index "+ i +" ur f***ing arraylist element ::: " + name.get(i) );
			System.out.printf("index %d ur f***ing arraylist element ::: %d\n\n",i, name.get(i) );
		}

	}
}