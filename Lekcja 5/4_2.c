#include<stdio.h>

///cw 4_2_2a
float srednia(unsigned int n, int * tab)
{
    int i;
    float S=0.0;
for(i=0;i<n;i++)
{
 S=S+tab[i];
}
S=S/n;
return S;
}

///cw 4_2_2b
int suma(unsigned int n, int * tab)
{
    int i;
    int S=0;
for(i=0;i<n;i++)
{
 S=S+tab[i];
}
return S;
}

///cw 4_2_2c
int sumakwadratow(unsigned int n, int * tab)
{
     int i;
    int S=0;
for(i=0;i<n;i++)
{
 S=S+tab[i]*tab[i];
}
return S;
}

void wypisz(unsigned int n, int * tab)
{
    int i;
for(i=0;i<n;i++)
{
 printf("%d\t",tab[i]);
}
printf("\n");
}

int main(){
///cw 4_2_2a
int rozmiar=4;
int tab[rozmiar];
printf("\n\n cw 4_2_2a\n\n");
tab[0]=1; tab[1]=2; tab[2]=3; tab[3]=0;
wypisz(rozmiar,tab);
printf("%f\n",srednia(rozmiar,tab));

///cw 4_2_2b
printf("\n\n cw 4_2_2b\n\n");
wypisz(rozmiar,tab);
printf("%d\n",suma(rozmiar,tab));

///cw 4_2_2c
printf("\n\n cw 4_2_2c\n\n");
wypisz(rozmiar,tab);
printf("%d\n",sumakwadratow(rozmiar,tab));
}
