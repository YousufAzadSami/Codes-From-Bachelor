import java.awt.Color;
import java.awt.Graphics;

import java.awt.Graphics2D;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class Translation extends JPanel {

    public void paint(Graphics g) {
        super.paint(g);

        Graphics2D g2d = (Graphics2D) g;

        g2d.setColor(new Color(150, 150, 150));
        g2d.fillRect(20, 20, 80, 50);
        g2d.translate(150, 50);
        g2d.fillRect(20, 20, 50, 50);

    }

    public static void main(String[] args) {

        JFrame frame = new JFrame("Translation");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(new Translation());
        frame.setSize(300, 200);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}