#include<stdio.h>

 ///cw 6_2_22
void odwroc_wiersze2(unsigned int n, unsigned int m, int t[][m]){
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
 printf("\n");
}

int main(){
    int t[3][7]={{20,2,5,7,9,-11,-81},{2,8,31,4,45,7,8},{-33,-10,5,6,7,8,908}};
wypisz2(3,7,t);
odwroc_wiersze2(3,7,t);
wypisz2(3,7,t);
};
