#include<stdio.h>
float gauss(float a[10][10]);
float gaussjor(float a[10][10]);

float a[10][10],x,y,z;
int i,j,n;

int main(){

    printf("input:\n");

    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=3;i++){
        printf("\n");
        for(j=1;j<=4;j++){
            printf("%f\t",a[i][j]);
        }
    }
    printf("\n\n1.Gauss Method\n2.Gauss-Jordan Method\n\nchoice:");
    scanf("%d",&n);
    if(n==1){
        gauss(a);
    }
    else{
        gaussjor(a);
    }
    return 0;


}//END MAIN

float gauss(float a[10][10]){//Gauss Elimination method
    float b=a[2][1];
    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(b*(a[1][j]/a[1][1]));
        a[2][j]=a[2][j]*a[1][1];

    }

    b=a[3][1];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(b*(a[1][j]/a[1][1]));
        a[3][j]=a[3][j]*a[1][1];
    }

    b=a[3][2];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(b*(a[2][j]/a[2][2]));
        a[3][j]=a[3][j]*a[2][2];
    }
    for(i=1;i<=3;i++){
        printf("\n");
        for(j=1;j<=4;j++){
            printf("%f\t",a[i][j]);
        }
    }

    a[3][4]=a[3][4]/a[3][3];
    z=a[3][4];
    a[2][4]=(a[2][4]-(a[2][3]*z))/a[2][2];
    y=a[2][4];
    a[1][4]=(a[1][4]-(a[1][2]*y)-(a[1][3]*z))/a[1][1];
    x=a[1][4];

    printf("\n\nX= %f\n",x);
    printf("\nY= %f\n",y);
    printf("\nZ= %f\n",z);

	return 0;

}

float gaussjor(float a[10][10]){//Gauss-Jordan method
    float b=a[2][1];
    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(b*(a[1][j]/a[1][1]));
        a[2][j]=a[2][j]*a[1][1];

    }

    b=a[3][1];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(b*(a[1][j]/a[1][1]));
        a[3][j]=a[3][j]*a[1][1];
    }

    b=a[3][2];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(b*(a[2][j]/a[2][2]));
        a[3][j]=a[3][j]*a[2][2];
    }
    b=a[1][2];
    for(j=1;j<=4;j++){
        a[1][j]=a[1][j]-(b*(a[2][j]/a[2][2]));
        a[1][j]=a[1][j]*a[2][2];
    }
    b=a[1][3];
    for(j=1;j<=4;j++){
        a[1][j]=a[1][j]-(b*(a[3][j]/a[3][3]));
        a[1][j]=a[1][j]*a[3][3];
    }
    b=a[2][3];
    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(b*(a[3][j]/a[3][3]));
        a[2][j]=a[2][j]*a[3][3];
    }

    for(i=1;i<=3;i++){
        printf("\n");
        for(j=1;j<=4;j++){
            printf("%f\t",a[i][j]);
        }
    }

    x=a[1][4]/a[1][1];
    y=a[2][4]/a[2][2];
    z=a[3][4]/a[3][3];

    printf("\n\nX= %f\n",x);
    printf("\nY= %f\n",y);
    printf("\nZ= %f\n",z);

	return 0;

}
