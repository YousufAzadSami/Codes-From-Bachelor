import org.lwjgl.input.Mouse;
import org.newdawn.slick.*;
import org.newdawn.slick.state.*;

public class gameOver2 extends BasicGameState{
   
  
   private boolean flag = false;
   private Image player2;

public gameOver2(int state){
   }
   
   public void init(GameContainer gc, StateBasedGame sbg) throws SlickException{
	   player2 = new Image("d:\\gameImage\\player2.jpg");
   }
   
   public void render(GameContainer gc, StateBasedGame sbg, Graphics g) throws SlickException{
	   player2.draw(0,0);
	   flag = true;
   }
   
   public void update(GameContainer gc, StateBasedGame sbg, int delta) throws SlickException{
	   
	if(flag)
	{
	   try{
		   Thread.sleep(3000);
		}catch(InterruptedException e){
		   e.printStackTrace();
		}
	   
	   System.exit(0);
	}
   }
   
   public int getID(){
      return 4;
   }
}
