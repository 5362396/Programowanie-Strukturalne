#include <stdio.h>
int sumapoprzednich(unsigned int n){
    int k;
    if(n<=2)
    {
        return 1;
    }
    else if (n%3==0)
        {
       return sumapoprzednich(n-1)+sumapoprzednich(n-2);
        }
        else if (n%3==1)
        {
            return sumapoprzednich(n-1)*5+4;
        }
        else
        {
            return sumapoprzednich(n-1);
        }
    }



int main(){
    int n;
printf("Podaj liczbe calkowita n\n");
scanf("%d",&n);
printf("Wyraz ciagu o indeksie %d wynosi %d",n,sumapoprzednich(n));
}
