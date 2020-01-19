
import javax.swing.JFrame;

public class StarAnimationTest extends JFrame {

    public StarAnimationTest() {

        add(new BoardThreadTimer());

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(280, 240);
        setLocationRelativeTo(null);
        setTitle("Star");
        setResizable(false);
        setVisible(true);

    }

    public static void main(String[] args) {
        new StarAnimationTest();
    }
}