#include <stdio.h>
#include <stdlib.h>

//podpunkt a
int slad(int n, int m, int tab[n][m])
{
    int i;
    int wynik=0;
    for(i=0;i<n;i++)
    {
        wynik+=tab[i][i];
    }
    return wynik;
}

//podpunkt b
int sumabrzegow(int n, int m, int tab[n][m])
{
    int sum=0;
    for(int i=0; i<m;i++)
    {
        if(tab[0][i]%2==0)
            sum+=tab[0][i];
        if(tab[n-1][i]%2==0)
            sum+=tab[n-1][i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(tab[i][0]%2==0)
            sum+=tab[i][0];
        if(tab[i][m-1]%2==0)
            sum+=tab[i][m-1];
    }
    return sum;
}

int main()
{
    int tablica[4][4]={{2,2,5,7},{2,8,3,4},{5,6,8,7},{5,6,7,8}};
    printf("%d\n", slad(4, 4, tablica));
    printf("%d\n", sumabrzegow(4, 4, tablica));
    return 0;
}
