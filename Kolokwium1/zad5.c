#include <stdio.h>
#include <math.h>

void odwroc(unsigned int n, int * tab)
{
    int pom;
    for(int i=0;i<n/2;i++)
    {
        pom=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=pom;
    }
}

void wypisz(unsigned int n, int * tab)
{
    int i;
for(i=1;i<n;i=i+2)
{
 printf("%d\t",tab[i]);
}
printf("\n");
}

int main()
{
    int rozmiar=8;
    int tab[rozmiar];
    tab[0]=3; tab[1]=6; tab[2]=8; tab[3]=9; tab[4]=2; tab[5]=4; tab[6]=1; tab[7]=5;
    odwroc(rozmiar,tab);
    wypisz(rozmiar,tab);
}
