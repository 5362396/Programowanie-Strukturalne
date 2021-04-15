#include<stdio.h>


void wypisz(unsigned int n){
int i,j;
for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(i*i+j*j==n)
        {
            printf("%d*%d+%d*%d=%d\n",i,i,j,j,n);
        }
    }
}
}

int main(){
    int n;
    printf("Podaj liczbe calkowita n:\n");
    scanf("%d", &n);
    wypisz(n);
    return 0;
}
