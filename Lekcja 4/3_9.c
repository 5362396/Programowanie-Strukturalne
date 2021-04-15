#include<stdio.h>
#include<stdlib.h>

//cw 3_2_9 funkcja malloc wymaga <stdlib.h> zwraca wskaznik
int * alokujcalkowita(){
return malloc(sizeof(int));
}

int main(){
    int* a=alokujcalkowita();
    printf("Adres to: %p\n", a);
    printf("Wartosc zmiennej calkowitej pod tym adresem to: %d\n", *a); //wyswietla losowego inta, bo wskaznik na nic nie wskazuje
    *a=15;
     printf("Adres to: %p\n", a);
    printf("Wartosc zmiennej calkowitej pod tym adresem to: %d\n", *a);
}
