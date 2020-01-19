import org.lwjgl.input.Mouse;
import org.newdawn.slick.*;
import org.newdawn.slick.state.*;

public class Menu extends BasicGameState{
   
	Image menuPic;
	Image help;
	int mouseX;
	int mouseY;
	private boolean control = false;
   
   public Menu(int state){
   }
   
   public void init(GameContainer gc, StateBasedGame sbg) throws SlickException{
	 menuPic = new Image("d:\\gameImage\\SamiMenu.jpg");
	 help = new Image("d:\\gameImage\\help.jpg");
   }
   
   public void render(GameContainer gc, StateBasedGame sbg, Graphics g) throws SlickException{
	   menuPic.draw(0,0);
	   
	   /*
	   if(control)
	   {		   
		   try{
			   Thread.sleep(3000);
			}catch(InterruptedException e){
			   e.printStackTrace();
			}
		   
		   menuPic.draw(0,0);
		   
	   }
	   */
	   g.drawString("x::"+mouseX + " y::"+mouseY, 20,20);
   }
   
   public void update(GameContainer gc, StateBasedGame sbg, int delta) throws SlickException{
	   mouseX = Mouse.getX();
	   mouseY = 600 - Mouse.getY();
	   
	   if( (mouseX>= 55 && mouseX<=335) && ( mouseY>=145 && mouseY<=190) )
	   {
		   if(Mouse.isButtonDown(0))
		   {
			   sbg.enterState(1);
		   }
	   }
	   
	   if( (mouseX>= 55 && mouseX<=280) && ( mouseY>=270 && mouseY<=315) )
	   {
		   if(Mouse.isButtonDown(0))
		   {
			   sbg.enterState(2);
		   }
	   }
	   
	   if( (mouseX>= 55 && mouseX<=170) && ( mouseY>=390 && mouseY<=430) )
	   {
		   if(Mouse.isButtonDown(0))
		   {
			   System.exit(0);
		   }
	   }
   }
   
   public int getID(){
      return 0;
   }
}
