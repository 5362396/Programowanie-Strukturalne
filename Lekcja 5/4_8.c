#include<stdio.h>

///cw 4_2_8a
void polacz(unsigned int n, double * tab1, double * tab2, double * tab3)
{
    int i;
for(i=0;i<2*n;i++)
{
    if(i<n)
    {
     tab3[i]=tab1[i]; ///0 1 2 ... n-1 <- 0 1 2 ... n-1 , f(i)=i
    }
    else
    {
 tab3[i]=tab2[i-n]; /// n n+1 ... 2n-1 <- 0 1 2 ... n-1 , g(i)=i-n
    }
}
}

///cw 4_2_8b
void wymieszaj(unsigned int n, double * tab1, double * tab2, double * tab3)
{
     int i;
for(i=0;i<2*n;i++)
{
    if(i%2==1)
    {
     tab3[i]=tab1[(i-1)/2]; ///1 3 5 7 ... 2n-1 -> 0 1 2 ... n-1 , f(i) = i/2 -1/2 = (i-1)/2
    }
    else
    {
 tab3[i]=tab2[i/2];  ///0 2 4 ... 2n-2 -> 0 1 2 ... n-1 , g(i)=i/2
    }
}
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
    int rozmiar =4;
     double tab1[rozmiar];
    double tab2[rozmiar];
     double tab3[2*rozmiar];
///cw 4_2_8a
printf("\n\n cw 4_2_8a\n\n");
tab1[0]=1; tab1[1]=2; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=6; tab2[2]=7; tab2[3]=8;
polacz(rozmiar,tab1,tab2,tab3);
wypiszdoubla(rozmiar,tab1);
wypiszdoubla(rozmiar,tab2);
wypiszdoubla(2*rozmiar,tab3);

///cw 4_2_8b
printf("\n\n cw 4_2_8b\n\n");
tab1[0]=1; tab1[1]=2; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=6; tab2[2]=7; tab2[3]=8;
wymieszaj(rozmiar,tab1,tab2,tab3);
wypiszdoubla(rozmiar,tab1);
wypiszdoubla(rozmiar,tab2);
wypiszdoubla(2*rozmiar,tab3);

}
///jak ma dzialac program z zadania 9
/// [6,8,3,9]
/// [5,9,7,4]
/// [9,7,5,6]

/// [9,9,7,9]
/// [6,8,5,6]
/// [5,7,3,4]
