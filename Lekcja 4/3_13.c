#include<stdlib.h>
#include<stdio.h>

//cw 3_2_13
double funkcja(double (*fun)(int x),int y){
return fun(y);
}

//funkcja testowa do 3_2_13
double testowa(int x){
return x*x;
}

int main(){
    int x=5;
    printf("%f\n",testowa(x));
double (*wskaznikdofunkcji)(int);
wskaznikdofunkcji=testowa;
printf("%p\n",wskaznikdofunkcji);
printf("%f\n",funkcja(*wskaznikdofunkcji,8));
return 0;
}
