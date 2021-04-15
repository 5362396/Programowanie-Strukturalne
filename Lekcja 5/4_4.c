#include<stdio.h>
#include<math.h>

///cw 4_2_4
float sredniageometryczna(unsigned int n, unsigned int * tab)
{
    int i;
    float S=1.0;
for(i=0;i<n;i++)
{
 S=S*tab[i]; ///1*x0*x1*...*xn-1
}
S=pow(S,1.0/n);
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
///cw 4_2_4
    int rozmiar=6;
int tab[rozmiar];
printf("\n\n cw 4_2_4\n\n");
tab[0]=5; tab[1]=4; tab[2]=6; tab[3]=2; tab[4]=1; tab[5]=3;
wypisz(rozmiar,tab);
printf("%f\n",sredniageometryczna(rozmiar,tab));
///jaka jest srednia geometryczna dla elementow tablicy [5,4,6,2,1,3].
}
