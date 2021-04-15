#include<stdio.h>
#include<stdlib.h>

///cw 4_2_17
double* skopiujiwskaz(unsigned int n,double * tab)
{
    double tab1[n];
    double (*wsk)[n];
    int i;
    for(i=0;i<n;i++)
    {
        tab1[i]=tab[i];
    }
wsk=&tab1;
return wsk;
}

void wypiszdoubla(unsigned int n, double * tab)
{
    int i;
for(i=0;i<n;i++)
{
 printf("%f\t",tab[i]);
}
printf("\n");
}

int main(){

///cw 4_2_17
printf("\n\n cw 4_2_17\n\n");
int rozmiar=4;
double (*wsktab)[rozmiar];
double *wskd;
double tabd[rozmiar];
tabd[0]=1; tabd[1]=10; tabd[2]=22; tabd[3]=-33;
wskd=tabd;
wsktab=&tabd;
printf("Adres pierwszego elementu tablicy to %p\n",wskd);
printf("Adres tablicy to %p\n",wsktab);
printf("%f\n",*wskd);
wypiszdoubla(rozmiar,*wsktab);
printf("%f\n",*wsktab[0]);
printf("%f\n",*wsktab[1]);
printf("%f\n",*wsktab[2]);
printf("%f\n",*wsktab[3]); ///zawsze zwraca wartosc poczatkowego elementu
/*

*/
/*
double tabdd[rozmiar];
    double (*wsk)[rozmiar];
    for( int i=0;i<rozmiar;i++)
    {
        tabdd[i]=tabd[i];
    }
wsk=&tabdd;
printf("Adres tablicy to %p",skopiujiwskaz(rozmiar,tabdd));
printf("Adres tablicy to %p",skopiujiwskaz(rozmiar,tabdd)+1);
*/

return 0;

}
