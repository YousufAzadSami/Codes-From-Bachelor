//package donut;

import java.awt.Color;

import javax.swing.JFrame;

/*
public class Donut extends JFrame {


    public Donut() {

        add(new Board());

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(360, 310);
        setLocationRelativeTo(null);
        setTitle("Donut");
        //setResizable(false);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Donut();
    }
}
*/

//THEY R ALTERNATIVES

public class Donut{
	
	public static void main( String args[])
	{
		JFrame j = new JFrame("so what should be the title?");
		Board b = new Board();
		
		
		j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		j.setBackground(Color.WHITE);
		j.setSize(360, 310);
		j.setLocationRelativeTo(null);
		j.setVisible(true);
		
		j.add(b);
		
		
	}
}

