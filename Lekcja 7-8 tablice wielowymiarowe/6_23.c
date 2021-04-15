#include<stdio.h>
#include<stdlib.h>

///cw 6_2_23
void wiersze_w_dol(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
         for(j=0;j<m;j++)
{
    pom=t[n-1][j];
for(i=n-1;i>0;i--)
{
   t[i][j]=t[i-1][j];
}
   t[0][j]=pom;
}
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
printf("\n");
}

int main(){
    int **t=alokuj(3,4);
    wczytaj(t,3,4);
wypisz(t,3,4);
wiersze_w_dol(t,3,4);
wypisz(t,3,4);
};
