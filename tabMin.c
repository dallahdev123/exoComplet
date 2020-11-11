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
            if (min != tab1[i])//Tester si le minimum a changer
            {
                /* code */
                //Permutation
                t=tab1[i];
                tab1[i]=tab1[k];
                tab1[k]=t;
            }
            
        }
        
    }
    printf("Le minimum est:%d",tab1[0]);
        printf("\n");

    return 0;

}