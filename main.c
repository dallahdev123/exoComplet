#include<stdio.h>
#include"tabMin.h"
#include<stdlib.h>

int main(){
    
    float tab1[5];
    int i;

    for (i = 0; i <4; i++)
    {
        /* code */
        printf("Donner tableau[%i]: ",i);
        scanf("%f",&tab1[i]);
    }
    
    min(tab1);

    return 0;

}