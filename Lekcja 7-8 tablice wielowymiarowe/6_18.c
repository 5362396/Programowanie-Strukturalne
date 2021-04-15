#include<stdio.h>

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
};
