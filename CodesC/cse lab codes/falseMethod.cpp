#include<stdio.h>
#include<math.h>

double equation(double x){
    return (x*x - x - 2);
}

double measureX0ForBisection(double x1,double x2){
    return ((x1+x2) / 2);
}

double measureX0ForFalse(double x1, double x2){
    return (x1-  (equation(x1) * (x2-x1) / (equation(x2) - equation(x1))) );
}

int main(){

    double x0,x1,x2,fOfx1,fOfx0,error,errorTolrence;
	int iterationCounter = 0;

    printf("Enter the value of x1:");
    scanf("%lf", &x1);
    printf("\n");

    printf("Enter the value of x2:");
    scanf("%lf", &x2);
    printf("\n");

    printf("Error tolerence:");
    scanf("%lf", &errorTolrence);

    while(iterationCounter<10){

		printf("Iteration %d\n\n", iterationCounter++);
        x0 = measureX0ForFalse(x1,x2);

        fOfx1 = equation(x1);
        fOfx0 = equation(x0);

        printf("OLD:::x1: %lf, x2: %lf, x0: %lf\n", x1,x2,x0);
        printf("f(x1): %lf, f(x0): %lf\n", fOfx1, fOfx0);

        if( (fOfx1*fOfx0) < 0 ){
            x2 = x0;
        }else{
            x1 = x0;
        }

        error = (x2-x1)/x2;
        error = fabs(error);

        printf("NEW:::x1: %lf, x2: %lf, x0: %lf\n", x1,x2,x0);
        printf("error: %lf, errorTolerence: %lf\n", error, errorTolrence);

        if(error < errorTolrence){
            break;
        }
    }


    printf("\n\n");
    printf("desired root of the funciton is %lf\n", x0);

    return 0;
}
