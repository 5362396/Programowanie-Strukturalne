#include<stdio.h>

///cw 4_2_7a
void przepiszsume(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int i;
for(i=0;i<n;i++)
{
 tab3[i]=tab1[i]+tab2[i];
}
}

///cw 4_2_7b
void przepiszwiekszy(unsigned int n, int * tab1, int * tab2, int * tab3)
{
     int i;
for(i=0;i<n;i++)
{
    if(tab1[i]>tab2[i])
    {
 tab3[i]=tab1[i];
}
else
    {
    tab3[i]=tab2[i];
    }
}
}

///cw 4_2_7c
void przepiszwszystkie(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int pom;
     int i;
for(i=0;i<n;i++)
{
    pom=tab3[i];
     tab3[i]=tab2[i];
 tab2[i]=tab1[i];
    tab1[i]=pom;
}
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
///cw 4_2_7a
printf("\n\n cw 4_2_7a\n\n");
int rozmiar=4;
int tab1[rozmiar];
int tab2[rozmiar];
int tab3[rozmiar];
tab1[0]=11; tab1[1]=3; tab1[2]=15; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=-8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepiszsume(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab3);

///cw 4_2_7b
printf("\n\n cw 4_2_7b\n\n");
tab1[0]=11; tab1[1]=3; tab1[2]=15; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=-8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepiszwiekszy(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab3);

///cw 4_2_7c
printf("\n\n cw 4_2_7c\n\n");
tab1[0]=1; tab1[1]=2; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=6; tab2[2]=7; tab2[3]=8;
tab3[0]=9; tab3[1]=10; tab3[2]=11; tab3[3]=12;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);
przepiszwszystkie(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);

}
