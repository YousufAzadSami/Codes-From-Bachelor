import javax.swing.JOptionPane;

public class Dialog1P96
{
	public static void main(String[] args)
	{
		int a,b;

		String name1 = JOptionPane.showInputDialog("what is your name..1,BITCH!!!");
		a=Integer.parseInt(name1);

		String name2 = JOptionPane.showInputDialog("what is your name..2,BITCH!!!");
		b=Integer.parseInt(name2);


		String message = String.format("welcome %s and %s,\nwelcome to a user friendly interface!!! \nthe fun begins now.... 3:\nthe number is %d and %d",name1,name2,a,b);

		JOptionPane.showMessageDialog( null , message );

		JOptionPane.showMessageDialog( null ,"Welcome\nto\nJava\n i would like to say to you that i want to see how far it can strech!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nthis is fun!!!\n:)\n");

		JOptionPane.showMessageDialog( null , a+b );

	}
}