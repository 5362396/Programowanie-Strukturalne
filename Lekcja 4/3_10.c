
#include<stdio.h>
#include<stdlib.h>

// cw 3_2_10
double * alokujdabla(){
return malloc(sizeof(double));
}

int main(){
    double* b=alokujdabla();
    printf("Adres to: %p\n", b);
    printf("Wartosc zmiennej rzeczywistej pod tym adresem to: %f\n", *b); //wyswietla losowego doubla, bo wskaznik na nic nie wskazuje
    *b=2.76;
     printf("Adres to: %p\n", b);
    printf("Wartosc zmiennej calkowitej pod tym adresem to: %f\n", *b);
}
