#include<stdio.h>
int zliczsume(int x){
static int suma=0;
suma=suma+x;
printf("Suma zwroconych wartosci wynosi %d\n",suma);
return x;
}
int main(){
    int y;
    printf("Podaj argument funkcji");
    scanf("%d",&y);
printf("Wartosci funkcji wynosi %d\n",zliczsume(y));
printf("Podaj argument funckji");
    scanf("%d",&y);
printf("Wartosci funkcji wynosi %d\n",zliczsume(y));
printf("Podaj argument funckji");
    scanf("%d",&y);
printf(" Wartosci funkcji wynosi %d\n",zliczsume(y));
}
