import org.lwjgl.input.Mouse;
import org.newdawn.slick.*;
import org.newdawn.slick.state.*;

public class Help extends BasicGameState{
   
  
   private boolean flag = false;
   private Image help;

public Help(int state){
   }
   
   public void init(GameContainer gc, StateBasedGame sbg) throws SlickException{
	   help = new Image("d:\\gameImage\\help.jpg");
   }
   
   public void render(GameContainer gc, StateBasedGame sbg, Graphics g) throws SlickException{
	   help.draw(0,0);
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
	   
	   sbg.enterState(0);
	}
   }
   
   public int getID(){
      return 2;
   }
}
