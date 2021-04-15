#include<stdio.h>
#include<stdlib.h>

///cw 6_2_25
void zamiana_miejsc(int **t, unsigned int n){
      int i,j,pom;
         for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
    pom=t[i][j];
    t[i][j]=t[j][i];
   t[j][i]=pom;
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
printf("\n");
}

int main(){
     int **t=alokuj(3,3);
    wczytaj(t,3,3);
wypisz(t,3,3);
zamiana_miejsc(t,3);
wypisz(t,3,3);
};
