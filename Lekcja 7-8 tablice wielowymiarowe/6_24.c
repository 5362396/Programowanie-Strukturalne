#include<stdio.h>
#include<stdlib.h>

///cw 6_2_24
void kolumny_w_prawo(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
         for(i=0;i<n;i++)
{
    pom=t[i][m-1];
for(j=m-1;j>0;j--)
{
   t[i][j]=t[i][j-1];
}
   t[i][0]=pom;
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
}

int main(){
     int **t=alokuj(3,4);
    wczytaj(t,3,4);
wypisz(t,3,4);
printf("\n");
kolumny_w_prawo(t,3,4);
wypisz(t,3,4);
};
