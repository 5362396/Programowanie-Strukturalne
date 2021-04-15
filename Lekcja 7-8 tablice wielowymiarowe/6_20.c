#include<stdio.h>
#include<stdlib.h>

///cw 6_2_20
void zamien(int **t1, int **t2, unsigned int n, unsigned int m){
    int i,j,pom;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    pom=t2[i][j];
   t2[i][j]=t1[i][j];
   t1[i][j]=pom;
}
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
    int **t=alokuj(3,3);
    int **v=alokuj(3,3);
    wczytaj(t,3,3);
wypisz(t,3,3);
  wczytaj(v,3,3);
  wypisz(v,3,3);
printf("cw 6_2_17\n");
zamien(t,v,3,3);
wypisz(t,3,3);
wypisz(v,3,3);
};
