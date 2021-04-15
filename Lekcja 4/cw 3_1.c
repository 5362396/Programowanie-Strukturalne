#include<stdio.h>

//cw 3_2_1
int mniejszawartoscwskazywana(int * a, int * b){
 if (*a<*b)
 {
     return *a;
 }

else
{
    return *b;
}
}

///typ zmiennej *nazwawskaznika       - co jest zapisane pod adresem nazwawskaznika *nazwawskaznika - wartosc danego typu zmienne
///typ zmiennej nazwazmiennej - gdzie ona jest zapisana, &nazwazmiennej

int main(){
int x,y;
x=24;
y=32;
int* wsk_x=&x;
int* wsk_y=&y;
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres zmiennej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
printf("Mniejsza z wartosci wskazywanych to %d\n",mniejszawartoscwskazywana(wsk_x,wsk_y));
return 0;
}
