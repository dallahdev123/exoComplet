//Trie Croissant d'un tableau
#include<stdio.h>
#include"tabMin.h"
#include<stdlib.h>

int main(){
    
    int tab1[4];
    int i;

    for (i = 0; i <=4; i++)
    {
        /* code */
        printf("Donner %d",tab1[i]);
        scanf("%d",tab1[i]);
    }
    
    min(tab1[4]);
    max(tab1[4]);

    return 0;

}