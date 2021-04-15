#include <stdio.h>
#include <stdlib.h>

int ** macierz(int n, int m)
{
    int *tab=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}

int mnozeniemac(int **tab, int n, int m)
{
    int result1=1;//Musi byæ 1 zeby dalo sie mno¿yc
    int result2=1;
    for (int i=0;i<n;i++)
    {
             result1 *= *(*(tab+i)+i);

    }
    for (int i=0,j=m-1;i<n,j>0;i++,j--)
    {

        result2 *= *(*(tab+i)+j);

    }

    return result1*result2;
}


int main()
{
    int **tab = macierz(5,6);
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<6;j++)
        {
            *(*(tab+i)+j) = i+1;
        }
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("[%d %d] = %d\n", i,j, *(*(tab+i)+j));
        }
    }
    printf("---------------\n");

    printf("Wynik mnozenia: %d",mnozeniemac(tab,5,6));
    return 0;
}
