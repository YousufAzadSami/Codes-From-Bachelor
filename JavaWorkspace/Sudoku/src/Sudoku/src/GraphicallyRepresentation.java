package Sudoku.src;



import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class GraphicallyRepresentation extends JFrame implements ActionListener {

    Container con;
    JButton b[][] = new JButton[9][9];
    JButton sb[] = new JButton[9];
    TextField t[] = new TextField[61];
    JMenuBar mbar;
    JMenu game,option;
    JMenuItem submit, exit,help, newgame;
    JCheckBoxMenuItem beginner, intermediate, expert;
    ButtonGroup g1, g2;
    JFrame nf;
    int level = 0;
    int[][] cp = new int[9][9];
    int[][] ip = new int[9][9];
    boolean mode = true;
    String getnum = "";

    GraphicallyRepresentation(int z) {
        super("The Game Of Sudoku...(By Jarin,Koly & Upama)");
        setSize(500, 500);
        setResizable(false);
        setLocationRelativeTo(this);
        setLocation(getLocation());

        con = getContentPane();
        con.setLayout(new GridLayout(9, 9));

        level = z;
        Mylogic ob1 = new Mylogic();
        ob1.complet_puzzle();
        if (level == 0) {
            ob1.puzzle();
        } else if (level == 2) {
            ob1.puzzle2();
        } else if (level == 3) {
            ob1.puzzle3();
        }

        int c = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9 ; j++) {
                b[i][j] = new JButton("" + ip[i][j]);
                b[i][j].setFont(new Font("ARIALBD", Font.BOLD, 20));
                b[i][j].setForeground(Color.BLUE);
                if (ip[i][j] == 0) {
                   
                    b[i][j].setText("");
                    b[i][j].setBackground(Color.WHITE);
                    b[i][j].addActionListener(this);

                }

                con.add(b[i][j]);

                if (i == 3 || i == 4 || i == 5 || j == 3 || j == 4 || j == 5) {
                    if (2 < i && i < 6 && 2 < j && j < 6) {
                        b[i][j].setBackground(Color.WHITE);
                        continue;
                    }
                    b[i][j].setBackground(Color.pink);

                } else {
                    b[i][j].setBackground(Color.WHITE);
                }
            }
        }

        mbar = new JMenuBar();
        setJMenuBar(mbar);

        game = new JMenu("Game");
        option = new JMenu("Option");
      
        help = new JMenuItem("Help");
        newgame = new JMenuItem("New Game");
        submit = new JMenuItem("Submit");
        exit = new JMenuItem("Exit");

        beginner = new JCheckBoxMenuItem("Begineer");
        beginner.addItemListener(
                new ItemListener() {

                    public void itemStateChanged(ItemEvent e) {
                        level = 0;
                        recall(0);
                    }
                });
        intermediate = new JCheckBoxMenuItem("Intermediate");
        intermediate.addItemListener(
                new ItemListener() {

                    public void itemStateChanged(ItemEvent e) {
                        level = 2;
                        recall(2);
                    }
                });
        expert = new JCheckBoxMenuItem("Expert");
        expert.addItemListener(
                new ItemListener() {

                    public void itemStateChanged(ItemEvent e) {
                        level = 3;
                        recall(3);
                    }
                });
        g1 = new ButtonGroup();
        g1.add(beginner);
        g1.add(intermediate);
        g1.add(expert);

        JCheckBoxMenuItem safemode = new JCheckBoxMenuItem("Safe Mode");
        safemode.addItemListener(
                new ItemListener() {

                    public void itemStateChanged(ItemEvent e) {
                        if (mode == true) {
                            mode = false;
                        } else {
                            mode = true;
                        }
                    }
                });
       
        submit.addActionListener(
                new ActionListener() {

                    public void actionPerformed(ActionEvent e) {
                        int r = 0;
                        try {
                            for (int i = 0; i < 9; i++) {
                                for (int j = 0; j < 9; j++) {
                                    if (cp[i][j] != Integer.parseInt(b[i][j].getText())) {
                                        r = 1;
                                        break;
                                    }
                                }
                            }

                            if (r == 0) {
                                JOptionPane.showMessageDialog(GraphicallyRepresentation.this, "You won the Game");
                            } 
                            else 
                            {
                                JOptionPane.showMessageDialog(GraphicallyRepresentation.this, "You lose the Game");
                            }
                        } catch (NumberFormatException nume) {
                            JOptionPane.showMessageDialog(GraphicallyRepresentation.this, "Empty boxes");
                        }
                    }
                });
        exit.addActionListener(
                new ActionListener() {

                    public void actionPerformed(ActionEvent e) {
                        System.exit(0);
                    }
                });

        help.addActionListener(
                new ActionListener() {

                    public void actionPerformed(ActionEvent e) {
                        JOptionPane.showMessageDialog(GraphicallyRepresentation.this,
                                " In this game you have to assume the numbers of missing box. "
                                + "If a same number exists in its corresponding row or column or grid,"
                                + "your assumption is wrong.If not you're right. "
                                + "Best of Luck.",


                                "Help", JOptionPane.PLAIN_MESSAGE);
                    }
                });
        newgame.addActionListener(
                new ActionListener() {

                    public void actionPerformed(ActionEvent e) {
                        recall(level);
                    }
                });

        game.add(newgame);
        game.add(submit);
        game.addSeparator();
        game.add(exit);
        option.add(beginner);
        option.add(intermediate);
        option.add(expert);
        option.addSeparator();
        option.add(safemode);
       
        mbar.add(game);
        mbar.add(option);
        mbar.add(help);
      


        show();

     

        MyWindowAdapter mwa = new MyWindowAdapter();
        addWindowListener(mwa);

    }

    class Mylogic extends Logic {

        void complet_puzzle() {
            cp = save();

        }

        void puzzle() {
            ip = hide();
            
        }

        void puzzle2() {
            ip = hide2();

        }

        void puzzle3() {
            ip = hide3();

        }
    }

    class MyWindowAdapter extends WindowAdapter {

        public void windowClosing(WindowEvent e) {
            System.exit(0);
        }
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0 ; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (e.getSource() == b[i][j]) {
                    String s = selectnum();
                    b[i][j].setText(s);
                    b[i][j].setFont(new Font("ARIALBD", Font.BOLD, 25));
                    if (mode == true) {
                        b[i][j].setForeground(Color.BLUE);
                    } else {
                        if (Integer.parseInt(b[i][j].getText()) != cp[i][j]) {
                            b[i][j].setForeground(Color.RED);
                        } else {
                            b[i][j].setForeground(Color.BLUE);
                        }
                    }
                    

                    break;
                }
            }
        }

    }

    String selectnum() {
        nf = new JFrame();
        nf.setSize(400, 100);
        nf.getContentPane().setLayout(new GridLayout(1, 9));
        nf.setLocationRelativeTo(this);

        for (int i = 0; i < 9; i++) {
            sb[i] = new JButton("" + i);
            nf.getContentPane().add(sb[i]);
            sb[i].addActionListener(
                    new ActionListener() {

                        public void actionPerformed(ActionEvent e) {
                            int j;
                            for (j = 0; j < 9; j++) {
                                if (e.getSource() == sb[j]) {
                                    getnum = "" + j;
                                }
                            }
                            nf.dispose();
                            enable();
                        }
                    });
        }
        disable();
        nf.show();
        return getnum;
    }

    void recall(int x) {
        dispose();
        GraphicallyRepresentation rs = new GraphicallyRepresentation(x);
    }
}
	