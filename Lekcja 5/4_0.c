#include<stdio.h>

///na pewno przyda sie funkcja wypisz
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
    ///cw 4_2_0
    printf("\n\n cw 4_2_0\n\n");
    int rozmiar=4;
int tab[rozmiar];
tab[0]=6; tab[1]=2; tab[2]=5; tab[3]=8;
wypisz(rozmiar,tab);
printf("%d\n",*tab);
int tab2[]={9,5,7,3};
wypisz(rozmiar,tab2);
printf("%d\n",tab2[2]);
}
