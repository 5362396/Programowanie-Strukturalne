#include<stdio.h>

//cw 3_2_2
int* nawartoscmniejszawskaznik(int * a, int * b){
 if (*a<*b)
 {
     return a;
 }

else
{
    return b;
}
}

///*(adres)=wartosc przechowywana      adres = typ wartosci wskazywanej*
///&(wartoœæ)=adres jej przechowywania

int main(){
int x,y;
x=41;
y=32;
int* wsk_x=&x;
int* wsk_y=&y;
printf("Wartosc zmiennej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres zmiennej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
printf("Adres pamieci mniejszej ze wskazywanych wartosci to %p\n",nawartoscmniejszawskaznik(wsk_x,wsk_y));
}
