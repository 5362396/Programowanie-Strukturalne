#include<stdio.h>
#include<stdlib.h>

///cw 6_2_16
int indeks_wiersza(int **t, unsigned int n, unsigned int m){
int i,j;
int S,max,indeks;
for(i=0;i<n;i++)
{
    S=0;
    for(j=0;j<m;j++)
{
S=S+t[i][j];
}
if (i==0) ///wartosci poczatkowe dla pierwszego wiersza
{
    max=S;
    indeks=0;
}
if (max<S)
{
    max=S;
    indeks=i;
}
}
return indeks;
}

///cw 6_2_1
int** alokuj(unsigned int n, unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc(m*sizeof(int));
}
return t;
}

///wczytaj
void wczytaj(int** t, unsigned int n,unsigned int m){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}

///cw 6_2_18
void wypisz(int **t, unsigned int n, unsigned int m){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
}

int main(){
int **t=alokuj(3,3);
    wczytaj(t,3,3);
wypisz(t,3,3);
printf("cw 6_2_16\n");
printf("%d\n",indeks_wiersza(t,3,3));
}
