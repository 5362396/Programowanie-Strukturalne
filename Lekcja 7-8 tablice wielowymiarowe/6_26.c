#include<stdio.h>
#include<stdlib.h>

int** alokuj(unsigned int n, unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc(m*sizeof(int));
}
return t;
}

///cw 6_2_26
int** transpozycja(int **t1, unsigned int n, unsigned m){
    int **t2=alokuj(m,n);
      int i,j;
     //int t2[m][n];
         for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
    t2[j][i]=t1[i][j];
}
}
return t2;
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
printf("\n");
}

int main(){
     int **t=alokuj(3,4);
    wczytaj(t,3,4);
wypisz(t,3,4);
int ** t2=transpozycja(t,3,4);
wypisz(t2,4,3);
};
