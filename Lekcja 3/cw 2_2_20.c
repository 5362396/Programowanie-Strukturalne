#include <stdio.h>
unsigned int silnia(unsigned int n){
if (n<=1)
{
    return 1;
}
else
{
    return silnia(n-1)*n;
}
//printf("Funkcja zostala wywolana %d razy\n", liczba);
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Silnia z %d wynosi %d",n,silnia(n));
}
