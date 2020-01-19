import org.newdawn.slick.*;
import org.newdawn.slick.state.*;

public class Game extends StateBasedGame{
   
   public static final String gamename = "Ping Pong";
   public static final int menu = 0;
   public static final int play = 1;
   public static final int help = 2;
   public static final int score1 = 3;
   public static final int score2 = 4;
   
   public Game(String gamename){
      super(gamename);
      this.addState(new Menu(menu));
      this.addState(new Play(play));
      this.addState(new Help(help));
      this.addState(new gameOver1(score1));
      this.addState(new gameOver2(score2));
   }
   
   public void initStatesList(GameContainer gc) throws SlickException{
      this.getState(menu).init(gc, this);
      this.getState(play).init(gc, this);
      this.getState(help).init(gc, this);
      this.getState(score1).init(gc,this);
      this.getState(score2).init(gc,this);
      this.enterState(menu);
   }
   
   public static void main(String[] args) {
      AppGameContainer appgc;
      try{
         appgc = new AppGameContainer(new Game(gamename));
         appgc.setDisplayMode(800, 600, false);
         appgc.start();
      }catch(SlickException e){
         e.printStackTrace();
      }
   }

}