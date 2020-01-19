#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	do{
		ch=getche();
		//putchar(ch);
		cprintf("..%d",toupper(ch));
	}while(ch!='q');

	putchar(ch);

	return 0;
}

/* when using ....[getche()+getche()] with cprintf("%c").... hitting a enter key results the curser to return to the start of the line


   when using .....getche()+cprintf("%d").....hitting a enter key results the curse to return to start of the line



   when using .....getch()+cprintf("%d").....hitting a enter key DOES NOT return the cursor to the start of the line and pritns the asci value of enter key normally