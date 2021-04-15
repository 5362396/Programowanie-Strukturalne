#include<stdio.h>

///cw 4_2_6a
void przepisz(unsigned int n, int * tab1, int * tab2)
{
    int i;
for(i=0;i<n;i++)
{
 tab2[i]=tab1[i];
}
}

///cw 4_2_6b
void przepiszodwrotnie(unsigned int n, int * tab1, int * tab2)
{
    int i;
for(i=0;i<n;i++)
{
 tab2[i]=tab1[n-1-i];   ///0 1 2 3 4 ... n-1  ->   n-1 n-2 .... 4 3 2 1 0    , 0->n-1 , 1-> n-2; i->n-i-1
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
///cw 4_2_6a
printf("\n\n cw 4_2_6a\n\n");
 int rozmiar=4;
int tab1[rozmiar]; int tab2[rozmiar];
tab1[0]=1; tab1[1]=3; tab1[2]=5; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepisz(rozmiar,tab1,tab2);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);

///cw 4_2_6b
printf("\n\n cw 4_2_6b\n\n");
tab1[0]=1; tab1[1]=3; tab1[2]=5; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepiszodwrotnie(rozmiar,tab1,tab2);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
}
