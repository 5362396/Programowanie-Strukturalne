#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//cw 3_2_14
bool funkcjaporownujaca(int (*fun1)(int x),int (*fun2)(int y),unsigned int n){
    int i=0;
for(i=0;i<=n;i++)
{
    if(!(fun1(i)==fun2(i)))
    {
        return false;
    }
}
return true;
}

//funkcja testowe
int testowa1(int x){ // 0 1 2 2
    if(x<3)
    {
        return x;
    }
    else
    {
        return x-1;
    }
}

int testowa2(int x){ //0 1 2 3
return x;
}

int main(){
int (*wskaznikdofunkcji1)(int);
wskaznikdofunkcji1=testowa1;
int (*wskaznikdofunkcji2)(int);
wskaznikdofunkcji2=testowa2;
printf("%d\n",funkcjaporownujaca(*wskaznikdofunkcji1,*wskaznikdofunkcji2,2)); ///0=0^2, 1=1^2, 2=2^2, 3=3^2
return 0;
///Podaj przyklad funkcji testowych, dla ktorych dla n=2 program zwraca 1 czyli TRUE, a dla n=3 zwraca False czyli 0.
}
