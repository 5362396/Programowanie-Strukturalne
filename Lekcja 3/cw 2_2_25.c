#include <stdio.h>
int parzystenieparzyste(unsigned int n){
    int k;
    if(n<=1)
    {
        return 1;
    }
    else
    {
   if (n%2==0)
   {
      parzystenieparzyste(n-1)+n;
   }
   else
   {
       parzystenieparzyste(n-1)*n;
   }
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu o indeksie %d wynosi %d",n,parzystenieparzyste(n));
}
