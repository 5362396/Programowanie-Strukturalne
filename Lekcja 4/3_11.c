#include<stdlib.h>
#include<stdio.h>

//cw 3_2_11
int * alokujblok(unsigned int n){
return malloc(n*sizeof(int));
}

int main(){
    //dzialanie tej funkcji omowimy sobie dokladniej przy tablicach
    //teraz mozemy sie przyjrzec jaki jest rozmiar zmiennej typu int
    printf("Rozmiar zmiennej calkowitej to: %d\n", sizeof(int));
        printf("Rozmiar bloku zmiennych to: %d\n", 10*sizeof(int));
        //int ma 4 bajty = 32 bity, czyli 32 miejsca na 0101100011..., co daje zapisac 2^32 liczb, stad int = -2^31,...,-1,0,1,...,2^31-1
         printf("Rozmiar zmiennej naturalnej to: %d\n", sizeof(unsigned int));
         //unsigned int tez ma 4 bajty = 32 bity, czyli ponownie mamy 2^32 liczb, tym razem 0,1,...,2^32-1
}
