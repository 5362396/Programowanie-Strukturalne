#include<stdlib.h>
#include<stdio.h>

//cw 3_2_16
void przepiszstale(const int *x,int * const y){
*y=*x;
}

int main(){
 const int x=34;
 int y=42;
const int* wsk_x=&x;
int* const wsk_y=&y;
printf("Wartosc stalej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres stalej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
przepiszstale(wsk_x,wsk_y);
printf("Wartosc stalej x to: %d\n", x);
printf("Wartosc zmiennej y to: %d\n", y);
printf("Adres stalej x to: %p\n", wsk_x);
printf("Adres zmiennej y to: %p\n", wsk_y);
//przepisz(wsk_y,wsk_x); //przy probie podmienienia stalej wyswietla komunikaty ostrzegawcze
//*wsk_y=*wsk_x;  //dozwolone
//*wsk_x=*wsk_y; //nie mo¿na podmieniac wartosci stalej
wsk_x=wsk_y; //dozwolone
//wsk_y=wsk_x; //nie mo¿na podmieniaæ adresu dla sta³ego wskaŸnika

return 0;
}
