#include<stdio.h>

///cw 4_2_3
float sredniastalych(unsigned int n, const int * tab)
{
    int i;
    float S=0.0;
for(i=0;i<n;i++)
{
 S=S+tab[i];
}
S=S/n;
return S;
}

void wypisz(unsigned int n, int * tab)
{
    int i;
for(i=0;i<n;i++)
{
 printf("%d\t",tab[i]);
}
printf("\n");
}

int main(){
 int rozmiar=4;
int tab[rozmiar];
///cw 4_2_3
printf("\n\n cw 4_2_3\n\n");
tab[0]=5; tab[1]=-2; tab[2]=-1; tab[3]=1;
wypisz(rozmiar,tab);
printf("%f\n",sredniastalych(rozmiar,tab));
}
///Srednia geometryczna
///SG(x1,x2,...,xn)=(x1*x2*x3*...*xn)^(1/n)
