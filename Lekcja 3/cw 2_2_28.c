#include <stdio.h>
int sumapoprzednich(unsigned int n,unsigned int m){
    if(m==0)
    {
        return n;
    }
    if (n<m)
        {
       return sumapoprzednich(m,n);
        }
        else
        {
            return n-m+sumapoprzednich(n-1,m)+sumapoprzednich(n,m-1);
        }
    }

int main(){
    int n,m;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Podaj liczbe calkowita m\n");
scanf("%d",&m);
printf("Wartosc funkcji f(%d,%d) wynosi %d",n,m,sumapoprzednich(n,m));
}
