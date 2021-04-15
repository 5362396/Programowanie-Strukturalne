#include<stdlib.h>
#include<stdio.h>

//cw 3_2_12
double * alokujblokdablow(unsigned int n){
return malloc(n*sizeof(double));
}

int main(){
    //dzialanie tej funkcji omowimy sobie dokladniej przy tablicach
    //teraz mozemy sie przyjrzec jaki jest rozmiar zmiennej typu double
    printf("Rozmiar zmiennej typu double to: %d\n", sizeof(double));
        printf("Rozmiar bloku zmiennych to: %d\n", 10*sizeof(double));
        //czy tez zmiennej typu float
         printf("Rozmiar zmiennej typu float to: %d\n", sizeof(float));
}
