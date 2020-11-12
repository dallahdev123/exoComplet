//Trie Croissant d'un tableau
#include<stdio.h>
#include<stdlib.h>

int min(int tab1[]){
    int i,j,k,l,t;
    int min;

    for(i = 0; i<=3; i++)//1er Parcours
    {
        min=tab1[i];//Considérer le 1er elemt comme minimum
        for(j = i+1; j < 4; j++)
        {
            if(tab1[j]<min)//Comparaison
            {
                min=tab1[j];//Changemant de minimum
                k=j;// Repérer l'indice du nouveau minimum

            }
            
        }
        
    }
    printf("Le minimum est de:%d\n",tab1[k]);
    printf("L'indice du minimum est de:%d\n",k);
        printf("\n");

    return 0;

}