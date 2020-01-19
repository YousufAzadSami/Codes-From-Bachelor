#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	do{
		ch=getche();
		//putchar(ch);
		cprintf("%d",toupper(ch));
	}while(ch!='q');

	putchar(ch);

	return 0;
}