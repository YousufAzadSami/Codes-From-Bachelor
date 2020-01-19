import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

import javax.swing.JFrame;
import javax.swing.JPanel;


public class Rotate extends JPanel {

    public void paint(Graphics g) {
        super.paint(g);

        Graphics2D g2d = (Graphics2D) g;

        g2d.setColor(new Color(0, 150, 150));
        g2d.fillRect(20, 20, 80, 50);
        g2d.drawLine(180,50,300,50);
        g2d.drawLine(180,50,180,250);

        g2d.translate(180, 50);
        g2d.rotate(Math.PI/4);

        g2d.fillRect(8, 8, 80, 80);
        g2d.setColor(Color.YELLOW);
        g2d.drawLine(0 , 0, 100,100);

    }

    public static void main(String[] args) {

        JFrame frame = new JFrame("Rotation");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(new Rotate());
        frame.setSize(300, 200);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}