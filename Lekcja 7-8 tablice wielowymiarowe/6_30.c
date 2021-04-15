///[ 1 2 ]      [5  9]       [6   11]
///[ 3 4 ]   +  [3  6]    =  [6   10]

#include<stdio.h>
#include<stdlib.h>

int** alokuj_kwadratowa(unsigned int n){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc(n*sizeof(int));
}
return t;
}

///cw 6_2_30
int** suma_macierzy(int **t1, int **t2,unsigned int n){
    int **suma=alokuj_kwadratowa(n);
      int i,j;
         for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    suma[i][j]=t2[i][j]+t1[i][j];
}
}
return suma;
}


///wczytaj
void wczytaj_kwadratowa(int** t, unsigned int n){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}

///cw 6_2_18
void wypisz_kwadratowa(int **t, unsigned int n){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
printf("\n");
}

int main(){
     int **t=alokuj_kwadratowa(2);
     int **v=alokuj_kwadratowa(2);
    wczytaj_kwadratowa(t,2);
wypisz_kwadratowa(t,2);
 wczytaj_kwadratowa(v,2);
wypisz_kwadratowa(v,2);
int **s=suma_macierzy(t,v,2);
wypisz_kwadratowa(s,2);
};
