#include<stdlib.h>
#include<stdio.h>

//cw 3_2_15
void przepisz(const int *x,int *y){
*y=*x; //funkcja *x=*y zostaje wykryta przez kompilator jako bledna, probuje nadpisac nowa wartosc dla stalej
}

int main(){
 const int x=34;
 int y=42;
const int* wsk_x=&x;
int* wsk_y=&y;
printf("Wartosc stalej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres stalej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
przepisz(wsk_x,wsk_y);
printf("Wartosc stalej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres stalej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
//przepisz(wsk_y,wsk_x); //przy probie podmienienia stalej wyswietla komunikaty ostrzegawcze
return 0;
}
