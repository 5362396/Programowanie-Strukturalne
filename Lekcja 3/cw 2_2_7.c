#include<stdio.h>

float potega(int n, int m){
int i;
float s=1.0;
if (m>=0)
{
for (i=1;i<=m;i++)
{
    s=n*s;
}
return s;
}
else
{
return 1.0/potega(n,-m);
}
}

int main(){
int n,m;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Podaj liczbe calkowita m");
scanf("%d",&m);
printf("%d do potegi %d wynosi %f\n",n,m,potega(n,m));
return 0;
}

