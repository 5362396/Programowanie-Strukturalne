#include<stdio.h>


///cw 4_2_1a
void nadajzera(unsigned int n, int * tab){
    int i;
for(i=0;i<n;i++)
{
 tab[i]=0;
}
}

///cw 4_2_1b
void spiszindeks(unsigned int n, int * tab){
    int i;
for(i=0;i<n;i++)
{
 tab[i]=i;
}
}

///cw 4_2_1c
void podwoj(unsigned int n, int * tab){
    int i;
for(i=0;i<n;i++)
{
 tab[i]=2*tab[i];
}
}

///cw 4_2_1d
void przejdznabezwzgledne(unsigned int n, int * tab){
    int i;
for(i=0;i<n;i++)
{
 tab[i]=abs(tab[i]);
}
}

///na pewno przyda sie funkcja wypisz
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
    ///cw 4_2_1a
    printf("\n\n cw 4_2_1a\n\n");
    int rozmiar=4;
int tab[rozmiar];
tab[0]=1; tab[1]=2; tab[2]=5; tab[3]=8;
wypisz(rozmiar,tab);
nadajzera(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1b
   printf("\n\n cw 4_2_1b\n\n");
tab[0]=1; tab[1]=2; tab[2]=5; tab[3]=8;
wypisz(rozmiar,tab);
spiszindeks(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1c
   printf("\n\n cw 4_2_1c\n\n");
tab[0]=1; tab[1]=2; tab[2]=-5; tab[3]=8;
wypisz(rozmiar,tab);
podwoj(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1d
   printf("\n\n cw 4_2_1d\n\n");
tab[0]=1; tab[1]=-2; tab[2]=-6; tab[3]=8;
wypisz(rozmiar,tab);
przejdznabezwzgledne(rozmiar,tab);
wypisz(rozmiar,tab);
}
