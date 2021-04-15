#include <stdio.h>
int ciag(unsigned int n){
if (n<=1)
{
    return 1;
}
else
{
    return ciag(n-1)+2*ciag(n-2)+3; //1 1 6 11
}
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu o indeksie %d wynosi %d",n,ciag(n));
}
