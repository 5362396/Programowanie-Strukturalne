#include<stdio.h>
#include<stdlib.h>

///cw 4_2_13
int* alokuj(unsigned int n)
{
return malloc(n*sizeof(int));
}

///cw 4_2_14
double* alokujdoubla(unsigned int n)
{
return malloc(n*sizeof(double));
}

///cw 4_2_15
void zwolnij(int * tab)
{
    free(tab);
}

///cw 4_2_16
void zwolnijdoubla(double * tab)
{
    free(tab);
}

int main(){
int rozmiar=4;
int (*wsktab)[rozmiar]=alokuj(rozmiar);
printf("Adres tablicy to %p\n",wsktab);
*wsktab[0]=1; *wsktab[1]=5; *wsktab[2]=8; *wsktab[3]=3;
printf("%p\n",wsktab[0]);
printf("%p\n",wsktab[1]);
printf("%p\n",wsktab[2]);
printf("%p\n",wsktab[3]);
printf("%p\n",&wsktab[0]);
printf("%p\n",&wsktab[1]);
printf("%p\n",&wsktab[2]);
printf("%p\n",&wsktab[3]);
printf("%d\n",*wsktab);
}
