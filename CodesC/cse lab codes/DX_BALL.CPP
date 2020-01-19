#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   int cl=0,midx,midy,style=12,size;
   setbkcolor(0);

   settextjustify(CENTER_TEXT, CENTER_TEXT);
   setcolor(3);                            //LIGHTRED=12;
   settextstyle(4, HORIZ_DIR, 4);
   outtextxy(150,100,"Welcome to");
   setcolor(2);
   outtextxy(320,400,"Loading...");
   setcolor(12);
   settextstyle(4, HORIZ_DIR, 10);
   outtextxy(320, 200, "DX-BALL");
   setcolor(3);                              //CYAN=3;
  // settextstyle(0, HORIZ_DIR, 3);
  // outtextxy(320,340,"Press any key");
  // getch();
   delay(3000);
   cleardevice();
   outtextxy(320,80,"Controller");
   settextjustify(LEFT_TEXT, LEFT_TEXT);
   setcolor(12);                                        //LIGHTRED=12;
   settextstyle(0, HORIZ_DIR, 2);
   outtextxy(80,200,"a: moves the var to the left");
   setcolor(9);                                         //LIGHTBLUE=9;
   outtextxy(80,250,"s: starts the game simulation");
   setcolor(8);                                         //DARKGRAY=8;
   outtextxy(80,300,"d: moves the var to the right");
   setcolor(6);                                         //BROWN=6;
   outtextxy(80,350,"q: quits the game");
   setcolor(2);					 //GREEN=2;
   settextstyle(0, HORIZ_DIR,1);
   outtextxy(200,420,"Press s to start the game");
   outtextxy(250,450,"or q to quit");

   int quit=1,stage=2,back_color=8,x,y,score=0,life=2,i;

   for(;quit;)
   {
	settextstyle(0, HORIZ_DIR,1);
	outtextxy(200,420,"Press s to start the game");
	outtextxy(250,450,"or q to quit");
	switch(getch())
	{
		case 'S':
		case 's':
			st:
			switch(stage)
			{
				case 1:
					cleardevice();
					setbkcolor(back_color);
					setfillstyle(SOLID_FILL,back_color);
					floodfill(0,0,DARKGRAY);
					setcolor(15);
					line(0,20,639,20);
					line(0,0,0,468);
					line(639,0,639,468);
					setfillstyle(SOLID_FILL,1);
					bar(80,280,560,265);
					setfillstyle(SOLID_FILL,2);
					bar(80,263,560,248);
					setfillstyle(SOLID_FILL,3);
					bar(80,246,560,231);
					setfillstyle(SOLID_FILL,4);
					bar(80,229,560,214);
					setfillstyle(SOLID_FILL,5);
					bar(80,212,560,197);
					setfillstyle(SOLID_FILL,6);
					bar(80,195,560,180);
					setfillstyle(SOLID_FILL,4);
					bar(80,178,560,163);
					setfillstyle(SOLID_FILL,3);
					bar(80,161,560,146);
					setfillstyle(SOLID_FILL,2);
					bar(80,144,560,129);
					setfillstyle(SOLID_FILL,14);
					bar(80,127,560,112);
					setcolor(8);
					for(x=110;x<=560;x=x+30)
					{
						y=110;
						line(x,y,x,y+170);
					}

					gotoxy(1,1);
					printf("score= &d",score);
					printf("\t\t\t\t\t\tlife remaining: %d",life);
					break;
				case 2:
					cleardevice();
					setbkcolor(back_color);
					setfillstyle(SOLID_FILL,back_color);
					floodfill(0,0,DARKGRAY);
					setcolor(15);
					line(0,20,639,20);
					line(0,0,0,468);
					line(639,0,639,468);
					setfillstyle(SOLID_FILL,1);
					bar(2,280,212,265);
					bar(637,280,427,265);
					bar(182,265,212,120);
					bar(427,265,457,120);
					setfillstyle(SOLID_FILL,2);
					bar(32,265,182,250);
					bar(152,250,182,150);
					setfillstyle(SOLID_FILL,3);
					bar(607,265,457,250);
					bar(457,250,487,150);
					setfillstyle(SOLID_FILL,4);
					bar(62,250,152,235);
					bar(122,235,152,180);
					setfillstyle(SOLID_FILL,5);
					bar(577,250,487,235);
					bar(487,235,517,180);
					setfillstyle(SOLID_FILL,14);
					bar(92,235,122,210);
					bar(547,235,517,210);
					setcolor(8);
					for(x=2;x<=212;x=x+30)
						line(x,120,x,280);
					for(x=637;x>=457;x=x-30)
						line(x,120,x,280);
					for(y=265;y>=120;y=y-15)
						line(2,y,637,y);
					gotoxy(1,1);
					printf("score= &d",score);
					printf("\t\t\t\t\t\tlife remaining: %d",life);
					break;
				case 3:
					cleardevice();
					setbkcolor(back_color);
					setfillstyle(SOLID_FILL,back_color);
					floodfill(0,0,DARKGRAY);
					setcolor(15);
					line(0,20,639,20);
					line(0,0,0,468);
					line(639,0,639,468);
					for(x=310,y=120,i=1;x>=40;x=x-30,y=y+16,i++)
					{
						if(i<=6)
							setfillstyle(SOLID_FILL,7-i);
						else if(i==7)
							setfillstyle(SOLID_FILL,14);
						else
							setfillstyle(SOLID_FILL,i-4);
						bar(x,y,x+(2*i-1)*30,y+16);
					}
					setcolor(8);
					for(x=40;x<610;x=x+30)
						line(x,120,x,280);
					for(y=120;y<280;y=y+16)
						line(40,y,610,y);
					gotoxy(1,1);
					printf("score= %d",score);
					printf("\t\t\t\t\t\tlife remaining: %d",life);

					break;
			}
			break;
		case 'Q':
		case 'q':
			quit=0;
			break;
	}

	ball:

	setfillstyle(SOLID_FILL,WHITE);     //Drawing the bar
	setcolor(WHITE);
	bar( 270, 469, 350, 479);

	setfillstyle(SOLID_FILL,RED);       //Drawing the ball
	setcolor(RED);
	sector( 310, 464, 0, 360, 4, 4);

	getch();

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	sector( 310, 464, 0, 360, 4, 4);

	int x_bar=270,x_ball,y_bar=469,y_ball,r[8],i;
	int count=1,tangent=10,condition=1,block_number;


	for(x_ball=310,y_ball=464;quit;count++)
	{
		switch(condition)                       //condition for ball movement way
		{
			case 1:
				y_ball--;
				if(count==tangent)
				{
					x_ball++;
					count=0;
				}
					break;
			case 2:
				y_ball++;
				if(count==tangent)
				{
					x_ball++;
					count=0;
				}
					break;
			case 3:
				y_ball++;
				if(count==tangent)
				{
					x_ball--;
					count=0;
				}
					break;
			case 4:
				y_ball--;
				if(count==tangent)
				{
					x_ball--;
					count=0;
				}
					break;
			case 5:
				y_ball++;
				count=0;
				break;
			case 6:
				y_ball--;
				count=0;
			default:
				break;
		}

		setfillstyle(SOLID_FILL,RED);             //ball animation
		setcolor(RED);
	       //	sector(x_ball,y_ball,0,360,4,4);
		circle(x_ball,y_ball,4);
		floodfill(x_ball,y_ball,RED);
		if(tangent!=1)
			delay(5);
		else
			delay(8);
		setfillstyle(SOLID_FILL,DARKGRAY);
		setcolor(DARKGRAY);
	       //	sector(x_ball,y_ball,0,360,4,4);
		circle(x_ball,y_ball,4);
		floodfill(x_ball,y_ball,DARKGRAY);
		if(kbhit())                                        //bar movement
		{
			switch(getch())
			{
				 case 'A':
				 case 'a':                                       //bar move left

					setfillstyle(SOLID_FILL,DARKGRAY);
					bar(x_bar,y_bar,x_bar+80,y_bar+10);
					if(x_bar!=0)
						x_bar=x_bar-5;
					setfillstyle(SOLID_FILL,WHITE);
					bar(x_bar,y_bar,x_bar+80,y_bar+10);
					break;


				 case 'D':
				 case 'd':                                       //bar move right

					setfillstyle(SOLID_FILL,DARKGRAY);
					bar(x_bar,y_bar,x_bar+80,y_bar+10);
					if(x_bar+80!=640)
						x_bar=x_bar+5;
					setfillstyle(SOLID_FILL,WHITE);
					bar(x_bar,y_bar,x_bar+80,y_bar+10);
					break;
				 case 'Q':
				 case 'q':
					quit=0;
					break;
				 default:
					break;
			}
		}

		r[0]=getpixel(x_ball,y_ball-5);
		r[1]=getpixel(x_ball-5,y_ball);
		r[2]=getpixel(x_ball,y_ball+5);
		r[3]=getpixel(x_ball+5,y_ball);
		r[4]=getpixel(x_ball-4,y_ball-4);
		r[5]=getpixel(x_ball-4,y_ball+4);
		r[6]=getpixel(x_ball+4,y_ball+4);
		r[7]=getpixel(x_ball+4,y_ball-4);

		for(i=0;i<8;i++)
		{
			if(r[i]!=8)
			{
				switch(i+1)
				{
					case 1:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball-5,8);
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;
							case 15:
								switch(condition)
								{
									case 1:
										condition=2;
										break;
									case 4:
										condition=3;
										break;
								}
								break;

						}
						break;
					case 2:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-5,y_ball,8);
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
							case 15:
								switch(condition)
								{
									case 4:
										condition=1;
										break;
									case 3:
										condition=2;
										break;
								}
								break;
						}
						break;
					case 3:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball,y_ball+5,8);
								switch(condition)
								{
									case 2:
										condition=1;
										break;
									case 3:
										condition=4;
										break;
								}
								break;
							case 15:
								switch((x_bar+80-x_ball)/10+1)
								{
									case 1:
										tangent=1;
										count=0;
										condition=1;
										break;
									case 2:
										tangent=3;
										count=0;
										condition=1;
										break;
									case 3:
										tangent=7;
										count=0;
										condition=1;
										break;
									case 4:
										tangent=10;
										count=0;
										condition=1;
										break;
									case 5:
										tangent=10;
										count=0;
										condition=4;
										break;
									case 6:
										tangent=7;
										count=0;
										condition=4;
										break;
									case 7:
										tangent=3;
										count=0;
										condition=4;
										break;
									case 8:
										tangent=1;
										count=0;
										condition=4;
										break;
									default:
										break;
								}
								break;
						}
						break;
					case 4:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+5,y_ball,8);
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;
							case 15:
								switch(condition)
								{
									case 1:
										condition=4;
										break;
									case 2:
										condition=3;
										break;
								}
								break;

						}
						break;
					case 5:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball-4,8);
								condition=2;
								break;

						}
						break;
					case 6:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball-4,y_ball+4,8);
								condition=1;
								break;
							case 15:
								condition=1;
								break;
						}
						break;
					case 7:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball+4,8);
								condition=4;
								break;
							case 15:
								condition=4;
								break;

						}
						break;
					case 8:
						switch(r[i])
						{
							case 1:
								score=score+10;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 2:
								score=score+20;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 3:
								score=score+30;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 4:
								score=score+40;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 5:
								score=score+50;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 6:
								score=score+60;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
							case 14:
								score=score+140;
								setfillstyle(SOLID_FILL,8);
								floodfill(x_ball+4,y_ball-4,8);
								condition=3;
								break;
						}
						break;

				}
				i=8;
			}
		}

		gotoxy(1,1);
		printf("score= %d",score);

		if(y_ball==484&life!=0)
		{
			life--;
			printf("\t\t\t\t\t\tlife remaining: %d",life);

			setfillstyle(SOLID_FILL,DARKGRAY);
			bar(x_bar,y_bar,x_bar+80,y_bar+10);
			goto ball;
		}
		else if(y_ball==484)
			quit=0;
		if(score==7040)
		{
			stage++;
			goto st;
		}
		else if(score==9170)
		{
			stage++;
			goto st;
		}
	}
   }
   cleardevice();
   setbkcolor(0);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   setcolor(3);                            //LIGHTRED=12;
   settextstyle(4, HORIZ_DIR, 8);
   outtextxy(320,240,"GAME OVER");
   setcolor(2);
   settextstyle(4, HORIZ_DIR, 4);
   delay(2000);
   outtextxy(320,400,"press any key to quit");
   getch();
   cleardevice();
   settextjustify(LEFT_TEXT, LEFT_TEXT);
   setcolor(12);                            //LIGHTRED=12;
   settextstyle(4, HORIZ_DIR, 6);
   outtextxy(100,150,"Developed by");
   setcolor(14);
   settextstyle(4, HORIZ_DIR, 4);
   outtextxy(100,250,"MD Mirazul Kabir Bhuiyan");
   outtextxy(100,300,"Zahid Hasan Abhi");
   outtextxy(100,350,"Shah Nawaz Saikat");
   setcolor(4);
   outtextxy(100,400,"Special thanks to MD Yousuf Azad");
   outtextxy(270,430,"& Mayesha Tasnim");
   settextstyle(0, HORIZ_DIR, 1);
   setcolor(2);
   outtextxy(200,460,"Thank YOU for playing...");
  // delay(7000);
  getch();
   closegraph();
   return 0;
}