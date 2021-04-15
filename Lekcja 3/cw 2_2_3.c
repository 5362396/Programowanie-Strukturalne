#include<stdio.h>

int maxdzielnik(unsigned int x){
int i,m=1;
for (i=2;i<x;i++)
{
    if(x%i==0)
    {
        m=i;
    }
}
return m;
}

int main(){
int n;
printf("Podaj liczbe calkowita");
scanf("%d",&n);
printf("Najwiekszym dzielnikiem wlasciwym liczby %d jest %d\n",n,maxdzielnik(n));
return 0;
}
