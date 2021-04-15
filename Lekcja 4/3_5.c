#include<stdio.h>

//cw 3_2_5
int sumawartosciwskazywanych(const int * a, const int * b){
    return *a+*b;
}

int main(){
const int x=34;
const int y=42;
int const * wsk_x=&x;
const int* wsk_y=&y;
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres zmiennej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
printf("Suma wartosic wskazywanych wynosi %d\n", sumawartosciwskazywanych(wsk_x,wsk_y));
}
