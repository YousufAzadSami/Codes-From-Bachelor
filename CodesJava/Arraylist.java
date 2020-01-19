import java.util.Arraylist;

public Arraylist{
	public static void main(String args[]){

		Arraylist<int> name = new Arraylist<int>();


		name.add(0);
		name.add(1);
		name.add(2);
		name.add(3);
		name.add(4);
		name.add(5);
		name.add(6);

		for(int i=0; i<name.size(); i++)
		{
			System.out.println("ur f***ing arraylist element ::: " + name.get(i) );
		}

	}
}