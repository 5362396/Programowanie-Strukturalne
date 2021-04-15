///cw 6_2_27
#include<stdio.h>
#include<stdlib.h>

void zamiana_trojwymiarowej(int ***t, unsigned int n){
      int i,j,k,pom;
         for(i=1;i<n;i++)
{
for(j=i;j<n;j++)
{
    if(i==j)
    {
        k=i;
    }
    else
    {
        k=i+1;
    }
    for(;k<n;k++)
    {
    pom=t[i][j][k];
    t[i][j][k]=t[j][k][i];
    t[j][k][i]=t[k][i][j];
   t[k][i][j]=pom;
    }

}
}
}

int main(){
};
