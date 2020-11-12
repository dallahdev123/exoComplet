#include<stdio.h>

int min(float tab1[],int N){
    int i;
    int min;

    for (i = 0; i <4; i++)
    {
        /* code */
        printf("Donner tableau[%d]: ",i);
        scanf("%f",&tab1[i]);
    }

    for(i = 1; i<N; i++)//1er Parcours
    {
        min=0;//Considérer le 1er elemt comme minimum
        if(tab1[i]<tab1[min])//Comparaison
            {
                min=i;//Changemant de minimum
            }

    }
    printf("Le minimum est de:%f\n",tab1[min]);
    printf("L'indice du minimum est de:%d\n",min);
        printf("\n");

    return 0;

}

int max(float tab1[],int N){
    int j;
    int max;

    for (j = 0; j <4; j++)
    {
        /* code */
        printf("Donner tableau[%d]: ",j);
        scanf("%f",&tab1[j]);
    }

    for(j = 1; j<N; j++)//1er Parcours
    {
        max=0;//Considérer le 1er elemt comme minimum
        if(tab1[j]>tab1[max])//Comparaison
            {
                max=j;//Changemant de maximum
            }

    }
    printf("Le maximum est de:%f\n",tab1[max]);
    printf("L'indice du maximum est de:%d\n",max);
        printf("\n");

    return 0;

}

int rechercheElmt(float tab2[],int N){
    int k,nbrRecherche;
    printf("Veuillez saisir le nombre à rechercher: \n");
    scanf("%d",&nbrRecherche);
    for (k = 0; k < N; k++)
    {
        /* code */
        if (tab2[k]==nbrRecherche)
        {
            /* code */
            printf("%d se trouve dans le tableau\n",nbrRecherche);
            break;
        }else
        {
            /* code */
            printf("%d ne se trouve pas dans le tableau\n",nbrRecherche);
            break;
        }
          
    }
    return 0;

}
