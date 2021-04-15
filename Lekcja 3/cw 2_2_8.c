#include<stdio.h>

int podlogapierwiastka(unsigned int n){
int i=0;
while (i*i<=n)
{
    i++;
}
return i-1;
}

int main(){
int n;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Podloga z pierwiastka z liczby %d wynosi %d\n",n,podlogapierwiastka(n));
return 0;
}
