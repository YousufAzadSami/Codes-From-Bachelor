#include<stdio.h>

int main()
{
	int nB,nG,mB,mG,T, facOfnB, facOfmB,
		facOfnG, facOfmG,facOfDiff1, facOfDiff2, factResult1, factResult2, i;


	

	while(scanf(" %d %d %d %d %d", &nB, &mB, &nG, &mG, &T)!= EOF)
	//scanf(" %d %d %d %d %d", &nB, &mB, &nG, &mG, &T);
	{
		
		facOfnB=facOfmB=facOfnG=facOfmG=facOfDiff1= facOfDiff2=1;


		for(i = nB; i>=1; i--)
			facOfnB *= i;

		for(i = mB; i>=1; i--)
			facOfmB *= i;

		for(i = nB - mB; i>=1; i--)
			facOfDiff1 *= i;

		factResult1 = facOfnB / (facOfmB * facOfDiff1);
	

		for(i = nG; i>=1; i--)
			facOfnG *= i;

		for(i = mG; i>=1; i--)
			facOfmG *= i;

		for(i = nG - mG; i>=1; i--)
			facOfDiff2 *= i;

		factResult2 = facOfnG / (facOfmG * facOfDiff2);

	

		printf("%d\n", factResult1 * factResult2);
	}

	return  0;

}