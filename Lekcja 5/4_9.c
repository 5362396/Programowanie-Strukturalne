#include<stdio.h>

///cw 4_2_9
void uporzadkujduzesredniemale(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int p,d,t; ///pierwsza, druga, trzecia
    int maks,sred,mini; ///maksymalna, srednia, minimalna
    int i;
 for(i=0;i<n;i++)
{
 p=tab1[i]; d=tab2[i]; t=tab3[i];
    ///poszukwianie maksimum
    if(p>=d && p>=t)
    {
     maks=p;
    }
    else if (d>=t)
    {
 maks=d;
    }
    else
    {
        maks=t;
    }
    ///poszukiwanie minimum
    if(p<=d && p<=t)
    {
     mini=p;
    }
    else if (d<=t)
    {
 mini=d;
    }
    else
    {
        mini=t;
    }
    sred=p+d+t-maks-mini;
    tab1[i]=maks;
    tab2[i]=sred;
    tab3[i]=mini;
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
///cw 4_2_9
printf("\n\n cw 4_2_9\n\n");
int rozmiar =4;
     int tab1[rozmiar];
    int tab2[rozmiar];
     int tab3[2*rozmiar];
tab1[0]=1; tab1[1]=10; tab1[2]=22; tab1[3]=33;
tab2[0]=5; tab2[1]=11; tab2[2]=15; tab2[3]=40;
tab3[0]=3; tab3[1]=12; tab3[2]=7; tab3[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);
printf("\n");
uporzadkujduzesredniemale(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);
}
