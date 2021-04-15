#include<stdio.h>

int potega(unsigned int n, unsigned int m){
int i,s=1;
for (i=1;i<=m;i++)
{
    s=n*s;
}
return s;
}

int main(){
int n,m;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Podaj liczbe calkowita m");
scanf("%d",&m);
printf("%d do potegi %d wynosi %d\n",n,m,potega(n,m));
return 0;
}
