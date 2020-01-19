#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,sq,count,aa;

	while(1)
	{
		scanf("%d %d",&a ,&b);

		if(a==0 && b==0)
			break;

		count=0;

		aa = sqrt(a);

		if((pow(aa ,2)) != a)
			aa++;

		while(1)
		{
			sq=pow(aa,2);

			if(sq>=a && sq<=b)
				count++;
			else 
				break;

			aa++;
		}

		printf("%d\n",count);
	}

	return 0;
}