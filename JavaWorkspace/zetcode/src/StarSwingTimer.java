//package star;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;

import java.awt.Toolkit;
import java.awt.event.ActionEvent;

import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.Timer;

public class StarSwingTimer extends JPanel implements ActionListener {

    Image star;
    Timer timer;
    int x, y;
	private int i=0;

    public StarSwingTimer() {
        setBackground(Color.BLACK);

        ImageIcon ii = new ImageIcon(this.getClass().getResource("star.png"));
        //ImageIcon ii = new ImageIcon(d:\\images\\star.png, "starII");
        star = ii.getImage();

        setDoubleBuffered(true);

        x = y = 0;
        timer = new Timer(1000, this);
        timer.start();
    }


    public void paint(Graphics g) {
        super.paint(g);

        Graphics2D g2d = (Graphics2D)g;
        g2d.drawImage(star, x, y, this);
        Toolkit.getDefaultToolkit().sync();
        g.dispose();
        
        System.out.println("i came first, paint");
    }
    
    public void buttonClass(){
    	i++;
    	JButton jb = new JButton("no meaning:::"+i);
    	add(jb);
    	
    }


    public void actionPerformed(ActionEvent e) {
 
    	/*
    	for(i=0;i<5;i++)
    	{
	    	JButton jb = new JButton("no meaning");
	    	add(jb);
    	}
    	*/
    	
        x += 10;
        y += 10;

        /*
        if (y > 240) {
            y = -45;
            x = -45;
        }
        */
        repaint();
        
    	/*
    	if(i<6)
    		buttonClass();
    	*/
    }
}