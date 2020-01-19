#include<stdio.h>
#include<math.h>

int main()
{
	int num1,num2, binary1[41],binary2[41],result[41],sum ,i,j, one,two,min;

	while((scanf("%d %d",&num1,&num2))!=EOF)
	{
		one=two=40;j=sum=0;

		for(i=0;i<41;i++)
			binary1[i]=binary2[i]=0;

		while(num1 != 0)
		{
			binary1[one--] = num1%2;
			num1=num1/2;
		}

		while(num2 != 0)
		{
			binary2[two--] = num2%2;
			num2=num2/2;
		}

		//for(i=i-1;i>=0;i--)
		//	printf("%d ",bi[i]);

		//one--;two--;

		if(one<two)
			min=one;
		else 
			min=two;

		for(i=40 ; i>min ; i--)
		{
			if(binary1[i]+binary2[i]==2)
				result[i]=0;
			else
				result[i]=binary1[i]+binary2[i];

			if(result[i])
				sum=sum+pow(2,j);
			j++;
		}


		printf("%d\n",sum);
	}

	return 0;
}