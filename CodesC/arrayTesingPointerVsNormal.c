#include<stdio.h>
#include<stdlib.h>

int main(){
    int x[10] = {5,10,15,20,25,30,35,40,45,50};
    int i;

    for(i=0;i<=10;i++){
        printf("i=%2d   x[i]=%2d *(x+i)=%2d", i, x[i], *(x+i));
        printf("    &x[i]=%X    x+i=%X\n", &x[i], (x+i));
    }

    int *pointer;
    pointer = x;

     for(i=0;i<=10;i++){
        printf("i=%2d   Pointer[i]=%2d *(Pointer+i)=%2d", i, pointer[i], *(pointer+i));
        printf("    &Pointer[i]=%X    Pointer+i=%X\n", &pointer[i], (pointer+i));
    }

    int *pointerMalloc;
    pointerMalloc = malloc(10 * sizeof(int));

    for(i=0;i<10;i++){
        pointerMalloc[i] = i + 10;
        *(pointerMalloc + i) = i + 20;
    }

    for(i=0; i<10; i++){
        printf("i=%2d   PointerMalloc[i]=%2d    8(Pointer+i)=%2d", i, pointerMalloc[i], *(pointerMalloc+i));
        printf("    &PointerMalloc[i]=%X    PointerMalloc+i=%X\n", &pointerMalloc[i], pointerMalloc+i);
    }


    return 0 ;
}
