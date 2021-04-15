#include <stdio.h>
int sumapoprzednich(unsigned int n){
    int k,S=1;
    for (k=1;k<n;k++)
    {
       S=S+sumapoprzednich(n-k);
    }
return S;
}
int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu o indeksie %d wynosi %d",n,sumapoprzednich(n));
}
