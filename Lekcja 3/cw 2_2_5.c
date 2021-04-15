#include<stdio.h>

float potegadwojki(int x){
int i;
float s=1.0;
if (x>=0)
{
for (i=1;i<=x;i++)
{
    s=2*s;
}
return s;
}
else
{
    for (i=x;i<0;i++)
{
    s=s/2;
}
return s;
}
}

int main(){
int n;
printf("Podaj liczbe calkowita");
scanf("%d",&n);
printf("2 do potegi %d wynosi %f\n",n,potegadwojki(n));
return 0;
}

