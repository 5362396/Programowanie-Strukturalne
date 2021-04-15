#include<stdio.h>
#include<stdlib.h>

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

///cw 6_2_12
int sumuj2(int** t, unsigned int n,unsigned int m){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       S=S+t[i][j];
    }
}
return S;
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

int main(){
    int **t=alokuj(2,2);
    wczytaj(t,2,2);
wypisz(t,2,2);
printf("%d",sumuj2(t,2,2));
}
