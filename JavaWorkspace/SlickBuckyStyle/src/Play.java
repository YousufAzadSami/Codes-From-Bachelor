import org.newdawn.slick.BasicGame;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.Image;
import org.newdawn.slick.Input;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.state.BasicGameState;
import org.newdawn.slick.state.StateBasedGame;
import org.lwjgl.input.Mouse;
 
public class Play extends BasicGameState{
	
	public float xPosBall , yPosBall, updaterX, updaterY; 
	public float updateMultiplierX, updateMultiplierY;	
	Image background;
	Image bar;
	Image ball;
	private float xPosBar1, xPosBar2;
	private float yPosBar1, yPosBar2;
	
	private boolean quit=false;
	
	private float updaterBar1, updaterBar2;
	private float xBallLeftPoint;
	private float yBallLeftPoint;
	private float xBallRightPoint;
	private float yBallRightPoint;
	
	private final int CIRCLE_RADIUS = 10;
	private final int BAR_BORDER_GAP=40;
	private final int BAR_WIDTH = 15;
	private final int BAR_HEIGHT= 80;
	private float xUpdateFraction = 0.4f ;
	private float yUpdateFraction = 0.4f ;
	private final int UP = -1;
	private final int DOWN =1;
	int str, str2=0;
	private int RIGHT_BOUNDARY = 780;
	private float LEFT_BOUNDARY = 20;
	private int LOWER_BOUNDARY = 520;
	private float UPPER_BOUNDARY = 80;
	private int player1Score;
	private int player2Score;
	
	
	public Play(int state){
	   
	}
 
    @Override
    public void init(GameContainer gc, StateBasedGame sbg) throws SlickException {
    	updateMultiplierX= updateMultiplierY=1;
    	xPosBall = 400;
    	yPosBall = 300;
    	
    	xPosBar1 = BAR_BORDER_GAP;
    	yPosBar1 = 300;
    	
    	xPosBar2 = 800 - BAR_BORDER_GAP - BAR_WIDTH ;
    	yPosBar2 = 300;
    	
    	background = new Image("d:\\gameImage\\backOpu4.jpg");
    	bar = new Image("d:\\gameImage\\gamebar2.jpg");
    	ball = new Image("d:\\gameImage\\bb.jpg");
    }
 
    @Override
    public void update(GameContainer gc, StateBasedGame sbg, int delta) throws SlickException     
    {
    	Input input = gc.getInput();
    	updaterX = xUpdateFraction * delta;
    	updaterY = yUpdateFraction * delta;
    	
    	updaterBar1 = 0.5f * delta;
    	updaterBar2 = 0.5f * delta;
    	
    	xBallLeftPoint = xPosBall;
    	yBallLeftPoint = yPosBall + CIRCLE_RADIUS/2;
    	
    	xBallRightPoint = xPosBall + CIRCLE_RADIUS;
    	yBallRightPoint = yPosBall + CIRCLE_RADIUS/2;
    	   	
       	
    	if(xPosBall >= (RIGHT_BOUNDARY-CIRCLE_RADIUS))
    	{
    		player1Score = player1Score + 5;
    		updateMultiplierX = -updateMultiplierX;
    		xPosBall = RIGHT_BOUNDARY - CIRCLE_RADIUS - 2;
    	}
    	else if(xPosBall<=LEFT_BOUNDARY)
    	{
    		player2Score = player2Score + 5;
    		updateMultiplierX = -updateMultiplierX;
    		xPosBall = LEFT_BOUNDARY + 2;
    	}
    	if(yPosBall >= (LOWER_BOUNDARY-CIRCLE_RADIUS))
    	{
    		/*
    		if()
    		{
    			
    		}
    		*/
    		
    		updateMultiplierY = -updateMultiplierY;
    		yPosBall = LOWER_BOUNDARY - CIRCLE_RADIUS - 2;
    	}
    	else if( yPosBall<=UPPER_BOUNDARY)
    	{
    		/*
    		if(!(( 180<= xPosBall + CIRCLE_RADIUS/2) && (xPosBall + CIRCLE_RADIUS/2 <=630) ))
    		{
    			
    		}
    		*/
    		
    		updateMultiplierY = -updateMultiplierY;
    		yPosBall = UPPER_BOUNDARY + 2;
    	}
    	
    	xPosBall = xPosBall + updaterX * updateMultiplierX;
    	yPosBall = yPosBall + updaterY * updateMultiplierY;
    	
    
    	
    	//// BAR 1
    	if(input.isKeyDown(Input.KEY_S))
    	{
    		if( yPosBar1 >= LOWER_BOUNDARY - BAR_HEIGHT)
    			yPosBar1=LOWER_BOUNDARY - BAR_HEIGHT;
    		else
    			yPosBar1 = yPosBar1 + updaterBar1;
    	}
    	if(input.isKeyDown(Input.KEY_W))
    	{
    		if( yPosBar1 <= UPPER_BOUNDARY)
    			yPosBar1=UPPER_BOUNDARY;
    		else
    			yPosBar1 = yPosBar1 - updaterBar1;
    	}
    	
    	if(input.isKeyDown(Input.KEY_A))
    	{
    		if(xPosBar1 <= LEFT_BOUNDARY)
    			xPosBar1 = LEFT_BOUNDARY;
    		else 
    			xPosBar1 = xPosBar1 - updaterBar1;
    	}
    	if(input.isKeyDown(Input.KEY_D))
    	{
    		if(xPosBar1 >= (400 - 70 - BAR_WIDTH ) )
    			xPosBar1 = (400 - 70 - BAR_WIDTH );
    		else
    			xPosBar1 = xPosBar1 + updaterBar1;
    	}
    	
    	//// BAR 2
    	if(input.isKeyDown(Input.KEY_NUMPAD8))
    	{
    		if( yPosBar2 <= UPPER_BOUNDARY )
    			yPosBar2=UPPER_BOUNDARY ;
    		else
    			yPosBar2 = yPosBar2 - updaterBar1;
    	}
    	if(input.isKeyDown(Input.KEY_NUMPAD5))
    	{
    		if( yPosBar2 >= LOWER_BOUNDARY - BAR_HEIGHT)
    			yPosBar2= LOWER_BOUNDARY - BAR_HEIGHT;
    		else
    			yPosBar2 = yPosBar2 + updaterBar1;
    	}
    	
    	if(input.isKeyDown(Input.KEY_NUMPAD4))
    	{
    		if(xPosBar2 <= (400 + 70) )
    			xPosBar2 = (400 + 70);
    		else 
    			xPosBar2 = xPosBar2 - updaterBar2;
    	}
    	if(input.isKeyDown(Input.KEY_NUMPAD6))
    	{
    		if(xPosBar2 >= RIGHT_BOUNDARY - BAR_WIDTH)
    			xPosBar2 = RIGHT_BOUNDARY - BAR_WIDTH;
    		else 
    			xPosBar2 = xPosBar2 + updaterBar2;
    	}
    	
    	if(input.isKeyDown(Input.KEY_ESCAPE))
    	{
    		System.exit(0);
    	}
    	////////////////////////////////
    	//if( xBallLeftPoint >= BAR_BORDER_GAP + BAR_WIDTH - 3 && xBallLeftPoint<= BAR_BORDER_GAP + BAR_WIDTH + 3)
    	if( xBallLeftPoint >= xPosBar1 + BAR_WIDTH - 3 && xBallLeftPoint<= xPosBar1+ BAR_WIDTH + 3)

    	//if( xBallLeftPoint == BAR_BORDER_GAP+BAR_WIDTH-1 )
    	{
    		if(yBallLeftPoint >= yPosBar1 && yBallLeftPoint <= yPosBar1 + BAR_HEIGHT)
    		{    			
    			//xBallLeftPoint = xBallLeftPoint+2;
    			//xPosBall = BAR_BORDER_GAP + BAR_WIDTH + 4;
    			xPosBall = xPosBar1+ BAR_WIDTH + 4;
    			updateMultiplierX = -updateMultiplierX;
    			
    			if((yPosBar1+32 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1+40))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.1f;
    				str=3;
    				updateMultiplierY = UP;
    			}
    			if((yPosBar1+40 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1+48))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.1f;
    				str=3;
    				updateMultiplierY = DOWN;
    			}
    			
    			else if(((yPosBar1 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1 + 16)))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.5f;
    				updateMultiplierY = UP;
    				str=1;
    			}
    			else if(((yPosBar1  + 16<= yBallLeftPoint) && (yBallLeftPoint < yPosBar1 + 32)))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.2f;
    				updateMultiplierY = UP;
    				str=2;
    			}
    			else if(( (yPosBar1 +48<=yBallLeftPoint) && (yBallLeftPoint<yPosBar1+64)))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.2f;
    				updateMultiplierY = DOWN;
    				str=4;
    			}
    			else if(( (yPosBar1 +64<=yBallLeftPoint) && (yBallLeftPoint<yPosBar1+80)))
    			{
    				xUpdateFraction = 0.4f;
    				yUpdateFraction = 0.5f;
    				updateMultiplierY = DOWN;
    				str=5;
    			}
    			else
    			{
    				str = 0; 
    			}
    			
    		}
    	}
    	
    	if( xBallRightPoint >= xPosBar1 - 3 && xBallRightPoint<= xPosBar1 + 3)

        	//if( xBallLeftPoint == BAR_BORDER_GAP+BAR_WIDTH-1 )
        	{
        		if(yBallRightPoint >= yPosBar1 && yBallRightPoint <= yPosBar1 + BAR_HEIGHT)
        		{    			
        			//xBallLeftPoint = xBallLeftPoint+2;
        			//xPosBall = BAR_BORDER_GAP + BAR_WIDTH + 4;
        			xPosBall = xPosBar1 - CIRCLE_RADIUS - 4;
        			updateMultiplierX = -updateMultiplierX;
        			
        			if((yPosBar1+32 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1+40))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.1f;
        				str=3;
        				updateMultiplierY = UP;
        			}
        			if((yPosBar1+40 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1+48))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.1f;
        				str=3;
        				updateMultiplierY = DOWN;
        			}
        			
        			else if(((yPosBar1 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar1 + 16)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.5f;
        				updateMultiplierY = UP;
        				str=1;
        			}
        			else if(((yPosBar1  + 16<= yBallLeftPoint) && (yBallLeftPoint < yPosBar1 + 32)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.2f;
        				updateMultiplierY = UP;
        				str=2;
        			}
        			else if(( (yPosBar1 +48<=yBallLeftPoint) && (yBallLeftPoint<yPosBar1+64)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.2f;
        				updateMultiplierY = DOWN;
        				str=4;
        			}
        			else if(( (yPosBar1 +64<=yBallLeftPoint) && (yBallLeftPoint<yPosBar1+80)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.5f;
        				updateMultiplierY = DOWN;
        				str=5;
        			}
        			else
        			{
        				str = 0; 
        			}
        			
        		}
        	}
    	
    	//if( xBallRightPoint >=800 - BAR_WIDTH - BAR_BORDER_GAP - 3 && xBallRightPoint<= 800 - BAR_WIDTH - BAR_BORDER_GAP + 3)
    		if( xBallRightPoint >= xPosBar2- 3 && xBallRightPoint <= xPosBar2 + 3)
        	//if( xBallLeftPoint == BAR_BORDER_GAP+BAR_WIDTH-1 )
        	{
        		if(yBallRightPoint >= yPosBar2 && yBallRightPoint <= yPosBar2 + BAR_HEIGHT)
        		{        			
        			//xBallLeftPoint = xBallLeftPoint+2;
        			//xPosBall = xPosBall - 8;
        			//xPosBall = 800 - BAR_BORDER_GAP - BAR_WIDTH - CIRCLE_RADIUS - 4;
        			xPosBall = xPosBar2 -CIRCLE_RADIUS- 4;
        			updateMultiplierX = -updateMultiplierX;
        			
        			if((yPosBar2+32 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2+40))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.1f;
        				str2=3;
        				updateMultiplierY = UP;
        			}
        			
        			else if((yPosBar2+40 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2+48))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.1f;
        				str2=3;
        				updateMultiplierY = DOWN;
        			}
        			
        			else if(((yPosBar2 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2 + 16)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.5f;
        				updateMultiplierY = UP;
        				str2=1;
        			}
        			else if(((yPosBar2  + 16<= yBallLeftPoint) && (yBallLeftPoint < yPosBar2 + 32)))
        			{
        				xUpdateFraction = 0.48f;
        				yUpdateFraction = 0.2f;
        				updateMultiplierY = UP;
        				str2=2;
        			}
        			else if(( (yPosBar2 +48<=yBallLeftPoint) && (yBallLeftPoint<yPosBar2+64)))
        			{
        				xUpdateFraction = 0.48f;
        				yUpdateFraction = 0.2f;
        				updateMultiplierY = DOWN;
        				str2=4;
        			}
        			else if(( (yPosBar2 +64<=yBallLeftPoint) && (yBallLeftPoint<yPosBar2+80)))
        			{
        				xUpdateFraction = 0.4f;
        				yUpdateFraction = 0.5f;
        				updateMultiplierY = DOWN;
        				str2=5;
        			}
        			else
        			{
        				str2 = 0; 
        			}
        		}
        	}
    	
    		
    		if( xBallLeftPoint >= xPosBar2 + BAR_WIDTH - 3 && xBallLeftPoint <= xPosBar2 +BAR_WIDTH + 3)
            	//if( xBallLeftPoint == BAR_BORDER_GAP+BAR_WIDTH-1 )
            	{
            		if(yBallLeftPoint >= yPosBar2 && yBallLeftPoint <= yPosBar2 + BAR_HEIGHT)
            		{        			
            			//xBallLeftPoint = xBallLeftPoint+2;
            			//xPosBall = xPosBall - 8;
            			//xPosBall = 800 - BAR_BORDER_GAP - BAR_WIDTH - CIRCLE_RADIUS - 4;
            			xPosBall = xPosBar2 + BAR_WIDTH + 4;
            			updateMultiplierX = -updateMultiplierX;
            			
            			if((yPosBar2+32 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2+40))
            			{
            				xUpdateFraction = 0.4f;
            				yUpdateFraction = 0.1f;
            				str2=3;
            				updateMultiplierY = UP;
            			}
            			
            			else if((yPosBar2+40 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2+48))
            			{
            				xUpdateFraction = 0.4f;
            				yUpdateFraction = 0.1f;
            				str2=3;
            				updateMultiplierY = DOWN;
            			}
            			else if(((yPosBar2 <= yBallLeftPoint) && (yBallLeftPoint < yPosBar2 + 16)))
            			{
            				xUpdateFraction = 0.4f;
            				yUpdateFraction = 0.5f;
            				updateMultiplierY = UP;
            				str2=1;
            			}
            			else if(((yPosBar2  + 16<= yBallLeftPoint) && (yBallLeftPoint < yPosBar2 + 32)))
            			{
            				xUpdateFraction = 0.48f;
            				yUpdateFraction = 0.2f;
            				updateMultiplierY = UP;
            				str2=2;
            			}
            			else if(( (yPosBar2 +48<=yBallLeftPoint) && (yBallLeftPoint<yPosBar2+64)))
            			{
            				xUpdateFraction = 0.48f;
            				yUpdateFraction = 0.2f;
            				updateMultiplierY = DOWN;
            				str2=4;
            			}
            			else if(( (yPosBar2 +64<=yBallLeftPoint) && (yBallLeftPoint<yPosBar2+80)))
            			{
            				xUpdateFraction = 0.4f;
            				yUpdateFraction = 0.5f;
            				updateMultiplierY = DOWN;
            				str2=5;
            			}
            			else
            			{
            				str2 = 0; 
            			}
            		}
            	}
    		
    		
    		if(player1Score >= 150)
    		{
    			sbg.enterState(3);
    		}
    		if(player2Score >= 150)
    		{
    			sbg.enterState(4);
    		}
    }
 
    public void render(GameContainer gc, StateBasedGame sbg, Graphics g) throws SlickException 
    {
    		background.draw(0,0);
    		//g.drawOval(xPosBall , yPosBall, CIRCLE_RADIUS , CIRCLE_RADIUS);
    		ball.draw(xPosBall , yPosBall);
    		//g.setColor(Color.);
    		//g.drawRect(xPosBar, yPosBar, 50 , 20);
    		
    		//g.drawRect( xPosBar1, yPosBar1, BAR_WIDTH, BAR_HEIGHT);
    		//g.drawRect( xPosBar2, yPosBar2, BAR_WIDTH, BAR_HEIGHT);
    		
    		//g.drawRect(30,90,710,540);
    		
    		bar.draw( xPosBar1, yPosBar1, BAR_WIDTH, BAR_HEIGHT);
    		bar.draw( xPosBar2, yPosBar2, BAR_WIDTH, BAR_HEIGHT);
    		
    		/*
    		g.drawString("xm::"+ Mouse.getX()+" ym::"+(600 -Mouse.getY()), 10,30);
    		g.drawString("x::"+ xPosBall +" y::"+ yPosBall , 10,50);
    		g.drawString("xbar::"+ xPosBar1 +" ybar::"+ yPosBar1 , 10,70);
    		g.drawString("xl::"+ xBallLeftPoint +" yl::"+ yBallLeftPoint , 10,90);
    		g.drawString("updaterX:: "+updaterX+" updaterY "+updaterY , 10,110);
    		g.drawString("C: "+str+" "+str2, 10,130);
    		*/
    		g.drawString(""+player1Score , 140, 20);
    		g.drawString(""+player2Score , 710, 20);
    }

	@Override
	public int getID() {
		// TODO Auto-generated method stub
		return 1;
	}
 
  
}