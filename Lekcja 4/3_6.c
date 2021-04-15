#include<stdio.h>

//cw 3_2_6
void przepiszwartoscdowskazania (int n, int *w){
*w=n;
}

int main(){
    int x,y;
x=34;
y=42;
int* wsk_x=&x;
int* wsk_y=&y;
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres zmiennej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
przepiszwartoscdowskazania(y,wsk_x);
printf("Wartosc zmiennej x to: %d\n", *wsk_x);
printf("Wartosc zmiennej y to: %d\n", *wsk_y);
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
}
