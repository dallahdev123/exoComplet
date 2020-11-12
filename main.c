#include<stdio.h>
#include"tabMin.h"
#include<stdlib.h>

#define tailleTab 4
#define taille 4
int main(){
    float tab1[tailleTab];
    float tab2[taille]={32,1,4,56};
    int i;
    int n;

    printf("faites votre choix: \n");
    printf("-----1:Chercher Le min du tableau-----\n");
    printf("-----2:Chercher Le min du tableau-----\n");
    printf("-----3:Chercher élément dans le tableau-----\n");
    scanf("%d",&n);

switch (n)
    {
    case 1:
        /* code */
    min(tab1,tailleTab);
        break;
    case 2:
        /* code */
    max(tab1,tailleTab);
        break;
    case 3:
        /* code */
    rechercheElmt(tab2,taille);
        break;
    
    default:
        break;
    }
    
    return 0;

}