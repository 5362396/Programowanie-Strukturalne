#include<stdio.h>

int potegadwojki(unsigned int x){
int i,s=1;
for (i=1;i<=x;i++)
{
    s=2*s;
}
return s;
}

int main(){
int n;
printf("Podaj liczbe calkowita");
scanf("%d",&n);
printf("2 do potegi %d wynosi %d\n",n,potegadwojki(n));
return 0;
}
