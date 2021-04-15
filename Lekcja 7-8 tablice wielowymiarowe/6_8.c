#include<stdio.h>

///cw 6_2_8
void zeruj(int t[][5], unsigned int n){ ///rozmiar 5 zmieniony ze 100 na chwile na potrzeby testow
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<5;j++)
{
       t[i][j]=0;
    }
}
}

void wypisz2(unsigned int n,unsigned int m, int t[][m]){
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
int t[4][5]={{20,2,5,7,9},{2,8,31,4,4},{5,6,8,7,8},{-10,5,6,7,8}};
wypisz2(4,5,t);
zeruj(t,4);
 printf("\n");
wypisz2(4,5,t);
}
