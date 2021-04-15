#include<stdio.h>

///cw 4_2_10a
int maksymalna(unsigned int n, int * tab)
{
    int m=tab[0];
    int i;
for(i=1;i<n;i++)
{
    if(m<tab[i])
    {
     m=tab[i];
    }
}
return m;
}

///cw 4_2_10b
int minimalna(unsigned int n, int * tab)
{
    int m=tab[0];
    int i;
for(i=1;i<n;i++)
{
    if(m>tab[i])
    {
     m=tab[i];
    }
}
return m;
}

///cw 4_2_10c
int maksymalnejindeks(unsigned int n, int * tab)
{
    int j=0;
    int i;
for(i=1;i<n;i++)
{
    if(tab[j]<=tab[i]) ///ostra, a nieostra nierownosc -> spisuje pierwsze albo ostatnie z wystapien
    {
     j=i;
    }
}
return j;   ///4 9 3 9 8 7 3 9 3 8 9 7 -  1 3 7 10
}

///cw 4_2_10d
int minimalnejindeks(unsigned int n, int * tab)
{
    int j=0;
    int i;
for(i=1;i<n;i++)
{
    if(tab[j]>tab[i])
    {
     j=i;
    }
}
return j;
}

///cw 4_2_1d
void przejdznabezwzgledne(unsigned int n, int * tab){
    int i;
for(i=0;i<n;i++)
{
 tab[i]=abs(tab[i]);
}
}

///cw 4_2_10e
int maksymalnabezwzgledna(unsigned int n, int * tab)
{
    przejdznabezwzgledne(n,tab);
return maksymalna(n,tab);
}


///cw 4_2_10f
int maksymalnejbezwzglednejindeks(unsigned int n, int * tab)
{
    przejdznabezwzgledne(n,tab);
return maksymalnejindeks(n,tab);
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
    ///cw 4_2_10
printf("\n\n cw 4_2_10\n\n");
int rozmiar=4;
int tab[rozmiar];
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
printf("Maksymalna wartosc elementu tablicy wynosi %d\n",maksymalna(rozmiar, tab));
printf("Minimalna wartosc elementu tablicy wynosi %d\n",minimalna(rozmiar, tab));
printf("Maksymalna wartosc tablicy to element o indeksie %d\n",maksymalnejindeks(rozmiar, tab));
printf("Minimalna wartosc tablicy to element o indeksie %d\n",minimalnejindeks(rozmiar, tab));
printf("Maksymalna wartosc bezwgledna elementu tablicy wynosi %d\n",maksymalnabezwzgledna(rozmiar, tab));
printf("Maksymalna wartosc bezwzgledna tablicy to element o indeksie %d\n",maksymalnejbezwzglednejindeks(rozmiar, tab));
}
///v=[v0,v1,...vn-1], w=[w0,w1,...,wn]  , iloczyn skalarny v*w=v0*w0+v1*w1+...+vn-1*wn-1

