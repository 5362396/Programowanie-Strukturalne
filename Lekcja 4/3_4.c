#include<stdio.h>

//cw 3_2_4
void zamienwartosciwskazywanegdydrugamniejsza(int *a, int *b){
    int x;
    if(*a>*b)
    {
    x=*a;
    *a=*b;
    *b=x;
    }
}

int main(){
 int x,y;
x=14;
y=17;
int* wsk_x=&x;
int* wsk_y=&y;
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres zmiennej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
zamienwartosciwskazywanegdydrugamniejsza(wsk_x,wsk_y);
printf("Wartosc zmiennej x to: %d\n", *wsk_x);
printf("Wartosc zmiennej y to: %d\n", *wsk_y);
}
