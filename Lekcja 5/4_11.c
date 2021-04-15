#include<stdio.h>

///cw 4_2_11
double iloczynskalarny(unsigned int n, double * tab1, double * tab2)
{
      double S=0.0;
      int i;
for(i=0;i<n;i++)
{
 S=S+tab1[i]*tab2[i];
}
return S;
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
///cw 4_2_11
printf("\n\n cw 4_2_11\n\n");
int rozmiar=4;
double tab1[rozmiar];
double tab2[rozmiar];
tab1[0]=1; tab1[1]=10; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=2; tab2[2]=2; tab2[3]=5;
wypiszdoubla(rozmiar,tab1);
wypiszdoubla(rozmiar,tab2);
printf("Iloczyn skalarny wektorow wynosi: %f",iloczynskalarny(rozmiar,tab1,tab2));
}
