///[ 1 2 ]      [5  9]       [1*5+2*3   1*9+2*6]    [11    21]
///[ 3 4 ]   *  [3  6]    =  [3*5+4*3   3*9+4*6] =  [27    51]

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

///cw 6_2_32
int** iloczyn_macierzy(unsigned int n, int **t1,int **t2){
      int i,j,k;
    int **t3=alokuj_kwadratowa(n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    t3[i][j]=0;
    for(k=0;k<n;k++)
    {
        t3[i][j]=t3[i][j]+t1[i][k]*t2[k][j];
    }
}
}
return t3;
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
int **s=iloczyn_macierzy(2,t,v);
wypisz_kwadratowa(s,2);
};
