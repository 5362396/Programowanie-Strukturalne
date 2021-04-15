#include<stdio.h>

///cw 4_2_12a
void odwroc(unsigned int n, int * tab)
{
    int pom;
    int i;
for(i=0;i<n/2;i++) ///0 1 2 3 ... n-1 -> n-1 n-2 ... 2 1 0 , f(i)=n-1-i
{
 pom=tab[i];
 tab[i]=tab[n-i-1];
 tab[n-i-1]=pom;
}
}

///cw 4_2_12b
void przesunwlewo(unsigned int n, int * tab)
{
     int i;
    int pom=tab[0];
for(i=1;i<n;i++)
{
 tab[i-1]=tab[i];  /// 0 1 2 3 4 ... n-2 n-1 -> 1 2 3 4 ... n-1 0 , i-1->i
}
tab[n-1]=pom;
}

///cw 4_2_12c
void przesunwprawo(unsigned int n, int * tab)
{
    int pom=tab[n-1];
     int i;
for(i=n-1;i>0;i--)
{
 tab[i]=tab[i-1];
}
tab[0]=pom;
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
return j;   ///4 9 3 9
}

///cw 4_2_12d Algorytmy sortujace
void sortuj(unsigned int n, int * tab)
{
    ///maksymalny element tablicy zamieniamy miejscami z ostatnim
    int i,j,pom;
    for(i=0;i<n-1;i++)
    {
        j=maksymalnejindeks(n-i,tab);
        pom=tab[n-i-1];
        tab[n-i-1]=tab[j];
        tab[j]=pom;
    }
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
    ///cw 4_2_12a
printf("\n\n cw 4_2_12a\n\n");
int rozmiar=4;
int tab[rozmiar];
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
odwroc(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12b
printf("\n\n cw 4_2_12b\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
przesunwlewo(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12c
printf("\n\n cw 4_2_12c\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
przesunwprawo(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12d
printf("\n\n cw 4_2_12d\n\n");
tab[0]=1; tab[1]=-10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
sortuj(rozmiar,tab);
wypisz(rozmiar,tab);

}
