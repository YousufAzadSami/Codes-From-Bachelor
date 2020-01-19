#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    char str[10];

    scanf("%d",&n);

    itoa( n, str, 10);

    puts(str);
    printf("the length is %d\n", strlen(str));

    return 0;
}
