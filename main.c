#include<stdio.h>
#include"tabMin.h"
#include<stdlib.h>

int main(){
    
    int tab1[4];
    int i;

    for (i = 0; i <4; i++)
    {
        /* code */
        printf("Donner tableau[%d]: ",i);
        scanf("%d",&tab1[i]);
    }
    
    min(tab1);

    return 0;

}