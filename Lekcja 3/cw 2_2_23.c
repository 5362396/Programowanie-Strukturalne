#include <stdio.h>
int Fib(unsigned int n){
if (n<=1)
{
    return 1;
}
else
{
    return Fib(n-1)+Fib(n-2);
}
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu Fibananciego o indeksie %d wynosi %d",n,Fib(n));
}
