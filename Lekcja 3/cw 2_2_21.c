#include <stdio.h>
int ciag(unsigned int n){
if (n==0)
{
    return 1;
}
else
{
    return 2*ciag(n-1)+5;
}
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu o indeksie %d wynosi %d",n,ciag(n));
}
