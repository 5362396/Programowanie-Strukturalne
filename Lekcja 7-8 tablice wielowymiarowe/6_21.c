#include<stdio.h>
#include<stdlib.h>

///cw 6_2_21
void odwroc_wiersze(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
for(i=0;i<n;i++)
{
    for(j=0;j<m/2;j++)
{
    pom=t[i][j];
   t[i][j]=t[i][m-1-j];
   t[i][m-1-j]=pom;
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
    wczytaj(t,3,3);
wypisz(t,3,3);
printf("cw 6_2_21\n");
odwroc_wiersze(t,3,3);
wypisz(t,3,3);
};
