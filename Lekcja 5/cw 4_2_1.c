#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>

///cw 4_2_1a
void nadajzera(unsigned int n, int * tab){
for(int i=0;i<n;i++)
{
 tab[i]=0;
}
}

///cw 4_2_1b
void spiszindeks(unsigned int n, int * tab){
for(int i=0;i<n;i++)
{
 tab[i]=i;
}
}

///cw 4_2_1c
void podwoj(unsigned int n, int * tab){
for(int i=0;i<n;i++)
{
 tab[i]=2*tab[i];
}
}

///cw 4_3_1d
void przejdznabezwzgledne(unsigned int n, int * tab){
for(int i=0;i<n;i++)
{
 tab[i]=fabs(tab[i]);
}
}

///na pewno przyda sie funkcja wypisz
void wypisz(unsigned int n, int * tab)
{
for(int i=0;i<n;i++)
{
 printf("%d\t",tab[i]);
}
printf("\n");
}

///cw 4_2_2a
float srednia(unsigned int n, int * tab)
{
    float S=0.0;
for(int i=0;i<n;i++)
{
 S=S+tab[i];
}
S=S/n;
return S;
}

///cw 4_2_2b
int suma(unsigned int n, int * tab)
{
    int S=0;
for(int i=0;i<n;i++)
{
 S=S+tab[i];
}
return S;
}

///cw 4_2_2c
int sumakwadratow(unsigned int n, int * tab)
{
    int S=0;
for(int i=0;i<n;i++)
{
 S=S+tab[i]*tab[i];
}
return S;
}

///cw 4_2_3
float sredniastalych(unsigned int n, const int * tab)
{
    float S=0.0;
for(int i=0;i<n;i++)
{
 S=S+tab[i];
}
S=S/n;
return S;
}

///cw 4_2_4
float sredniageometryczna(unsigned int n, unsigned int * tab)
{
    float S=1.0;
for(int i=0;i<n;i++)
{
 S=S*tab[i];
}
S=pow(S,1.0/n);
return S;
}

///cw 4_2_5 sito Eratostenesa
int pierwsza(unsigned int n){
int pom,i,j;
bool sito[n];
for(i=0;i<n;i++)
{
 sito[i]=true;
}
for(i=2;i<n;i++)
{
    if(sito[i])
    {
        pom=i;
        for (j=2*i;j<n;j=j+i)
        {
            sito[j]=false;
        }
    }
}
return pom;
}

///chcemy wszystkie liczby pierwsze mniejsze od n
void wszystkiepierwsze(unsigned int n){
int i,j;
bool sito[n];
for(i=0;i<n;i++)
{
 sito[i]=true;
}
for(i=2;i<n;i++)
{
    if(sito[i])
    {
        printf("%d \t", i);
        for (j=2*i;j<n;j=j+i)
        {
            sito[j]=false;
        }
    }
}
}

///cw 4_2_6a
void przepisz(unsigned int n, int * tab1, int * tab2)
{
for(int i=0;i<n;i++)
{
 tab2[i]=tab1[i];
}
}

///cw 4_2_6b
void przepiszodwrotnie(unsigned int n, int * tab1, int * tab2)
{
for(int i=0;i<n;i++)
{
 tab2[i]=tab1[n-1-i];
}
}

///cw 4_2_7a
void przepiszsume(unsigned int n, int * tab1, int * tab2, int * tab3)
{
for(int i=0;i<n;i++)
{
 tab3[i]=tab1[i]+tab2[i];
}
}

///cw 4_2_7b
void przepiszwiekszy(unsigned int n, int * tab1, int * tab2, int * tab3)
{
for(int i=0;i<n;i++)
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
for(int i=0;i<n;i++)
{
    pom=tab3[i];
     tab3[i]=tab2[i];
 tab2[i]=tab1[i];
    tab1[i]=pom;
}
}

///cw 4_2_8a
void polacz(unsigned int n, int * tab1, int * tab2, int * tab3)
{
for(int i=0;i<2*n;i++)
{
    if(i<n)
    {
     tab3[i]=tab1[i];
    }
    else
    {
 tab3[i]=tab2[i-n];
    }
}
}

///cw 4_2_8b
void wymieszaj(unsigned int n, int * tab1, int * tab2, int * tab3)
{
for(int i=0;i<2*n;i++)
{
    if(i%2==1)
    {
     tab3[i]=tab1[(i-1)/2];
    }
    else
    {
 tab3[i]=tab2[i/2];
    }
}
}

///cw 4_2_9
void uporzadkujduzesredniemale(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int p,d,t; ///pierwsza, druga, trzecia
    int maks,sred,mini; ///maksymalna, srednia, minimalna
 for(int i=0;i<2*n;i++)
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

///cw 4_2_10a
int maksymalna(unsigned int n, int * tab)
{
    int m=tab[0];
for(int i=1;i<n;i++)
{
    if(m<tab[i])
    {
     m=tab[i];
    }
}
return m;
}

///cw 4_2_10b
int minimalna(unsigned int n, int * tab)
{
    int m=tab[0];
for(int i=1;i<n;i++)
{
    if(m>tab[i])
    {
     m=tab[i];
    }
}
return m;
}

///cw 4_2_10c
int maksymalnejindeks(unsigned int n, int * tab)
{
    int j=0;
for(int i=1;i<n;i++)
{
    if(tab[j]<tab[i])
    {
     j=i;
    }
}
return j;
}

///cw 4_2_10d
int minimalnejindeks(unsigned int n, int * tab)
{
    int j=0;
for(int i=1;i<n;i++)
{
    if(tab[j]>tab[i])
    {
     j=i;
    }
}
return j;
}

///cw 4_2_10e
int maksymalnabezwzgledna(unsigned int n, int * tab)
{
    przejdznabezwzgledne(n,tab);
return maksymalna(n,tab);
}

///cw 4_2_10f
int maksymalnejbezwzglednejindeks(unsigned int n, int * tab)
{
    przejdznabezwzgledne(n,tab);
return maksymalnejindeks(n,tab);
}

///cw 4_2_11
double iloczynskalarny(unsigned int n, double * tab1, double * tab2)
{
      double S=0.0;
for(int i=0;i<n;i++)
{
 S=S+tab1[i]*tab2[i];
}
return S;
}

void wypiszdoubla(unsigned int n, double * tab)
{
for(int i=0;i<n;i++)
{
 printf("%f\t",tab[i]);
}
printf("\n");
}

///cw 4_2_12a
void odwroc(unsigned int n, int * tab)
{
    int pom;
for(int i=0;i<n/2;i++)
{
 pom=tab[i];
 tab[i]=tab[n-i-1];
 tab[n-i-1]=pom;
}
}

///cw 4_2_12b
void przesunwlewo(unsigned int n, int * tab)
{
    int pom=tab[0];
for(int i=1;i<n;i++)
{
 tab[i-1]=tab[i];
}
tab[n-1]=pom;
}

///cw 4_2_12c
void przesunwprawo(unsigned int n, int * tab)
{
    int pom=tab[n-1];
for(int i=n-1;i>0;i--)
{
 tab[i]=tab[i-1];
}
tab[0]=pom;
}

///cw 4_2_12d Algorytmy sortujace
void sortuj(unsigned int n, int * tab)
{
    ///maksymalny element tablicy zamieniamy miejscami z ostatnim
    int i,j,pom;
    for(i=0;i<n-1;i++)
    {
        j=maksymalnejindeks(n-i,tab);
        pom=tab[n-i-1];
        tab[n-i-1]=tab[j];
        tab[j]=pom;
    }
}

///cw 4_2_13
int* alokuj(unsigned int n)
{
return malloc(n*sizeof(int));
}

///cw 4_2_14
int* alokujdoubla(unsigned int n)
{
return malloc(n*sizeof(double));
}

///cw 4_2_15
void zwolnij(int * tab)
{
    free(tab);
}

///cw 4_2_16
void zwolnijdoubla(int * tab)
{
    free(tab);
}

/*
///cw 4_2_17
double* skopiujiwskaz(unsigned int n,double * tab)
{
    double tab1[n];
    double (*wsk)[n];
    for( int i=0;i<n;i++)
    {
        tab1[i]=tab[i];
    }
wsk=&tab1;
return wsk;
}
*/


int main(){
    ///cw 4_2_1a
    printf("\n\n cw 4_2_1a\n\n");
    int rozmiar=4;
int tab[rozmiar];
tab[0]=1; tab[1]=2; tab[2]=5; tab[3]=8;
nadajzera(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1b
   printf("\n\n cw 4_2_1b\n\n");
tab[0]=1; tab[1]=2; tab[2]=5; tab[3]=8;
spiszindeks(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1c
   printf("\n\n cw 4_2_1c\n\n");
tab[0]=1; tab[1]=2; tab[2]=-5; tab[3]=8;
wypisz(rozmiar,tab);
podwoj(rozmiar, tab);
wypisz(rozmiar,tab);
   ///cw 4_2_1d
   printf("\n\n cw 4_2_1d\n\n");
tab[0]=1; tab[1]=-2; tab[2]=-6; tab[3]=8;
wypisz(rozmiar,tab);
przejdznabezwzgledne(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_2a
printf("\n\n cw 4_2_2a\n\n");
tab[0]=11; tab[1]=-12; tab[2]=-16; tab[3]=8;
wypisz(rozmiar,tab);
printf("%f\n",srednia(rozmiar,tab));

///cw 4_2_2b
printf("\n\n cw 4_2_2b\n\n");
wypisz(rozmiar,tab);
printf("%d\n",suma(rozmiar,tab));

///cw 4_2_2c
printf("\n\n cw 4_2_2c\n\n");
wypisz(rozmiar,tab);
printf("%d\n",sumakwadratow(rozmiar,tab));

///cw 4_2_3
printf("\n\n cw 4_2_3\n\n");
wypisz(rozmiar,tab);
printf("%f\n",sredniastalych(rozmiar,tab));

///cw 4_2_4
printf("\n\n cw 4_2_4\n\n");
tab[0]=81; tab[1]=2; tab[2]=1; tab[3]=8;
wypisz(rozmiar,tab);
printf("%f\n",sredniageometryczna(rozmiar,tab));

///cw 4_2_5
printf("\n\n cw 4_2_5\n\n");
printf("%d\n",pierwsza(10000));
wszystkiepierwsze(1000);

///cw 4_2_6a
printf("\n\n cw 4_2_6a\n\n");
int tab1[rozmiar]; int tab2[rozmiar];
tab1[0]=1; tab1[1]=3; tab1[2]=5; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepisz(rozmiar,tab1,tab2);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);

///cw 4_2_6b
printf("\n\n cw 4_2_6b\n\n");
tab1[0]=1; tab1[1]=3; tab1[2]=5; tab1[3]=7;
tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
przepiszodwrotnie(rozmiar,tab1,tab2);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);

///cw 4_2_7a
printf("\n\n cw 4_2_7a\n\n");
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

///cw 4_2_8a
printf("\n\n cw 4_2_8a\n\n");
tab1[0]=1; tab1[1]=2; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=6; tab2[2]=7; tab2[3]=8;
polacz(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(2*rozmiar,tab3);

///cw 4_2_8b
printf("\n\n cw 4_2_8b\n\n");
tab1[0]=1; tab1[1]=2; tab1[2]=3; tab1[3]=4;
tab2[0]=5; tab2[1]=6; tab2[2]=7; tab2[3]=8;
wymieszaj(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(2*rozmiar,tab3);

///cw 4_2_9
printf("\n\n cw 4_2_9\n\n");
tab1[0]=1; tab1[1]=10; tab1[2]=22; tab1[3]=33;
tab2[0]=5; tab2[1]=11; tab2[2]=15; tab2[3]=40;
tab3[0]=3; tab3[1]=12; tab3[2]=7; tab3[3]=8;
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);
uporzadkujduzesredniemale(rozmiar,tab1,tab2,tab3);
wypisz(rozmiar,tab1);
wypisz(rozmiar,tab2);
wypisz(rozmiar,tab3);

///cw 4_2_10
printf("\n\n cw 4_2_10\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
printf("Maksymalna wartosc elementu tablicy wynosi %d\n",maksymalna(rozmiar, tab));
printf("Minimalna wartosc elementu tablicy wynosi %d\n",minimalna(rozmiar, tab));
printf("Maksymalna wartosc tablicy to element o indeksie %d\n",maksymalnejindeks(rozmiar, tab));
printf("Minimalna wartosc tablicy to element o indeksie %d\n",minimalnejindeks(rozmiar, tab));
printf("Maksymalna wartosc bezwgledna elementu tablicy wynosi %d\n",maksymalnabezwzgledna(rozmiar, tab));
printf("Maksymalna wartosc bezwzgledna tablicy to element o indeksie %d\n",maksymalnejbezwzglednejindeks(rozmiar, tab));

///cw 4_2_11
printf("\n\n cw 4_2_11\n\n");
double tabd1[rozmiar];
double tabd2[rozmiar];
tabd1[0]=1; tabd1[1]=10; tabd1[2]=3; tabd1[3]=4;
tabd2[0]=5; tabd2[1]=2; tabd2[2]=2; tabd2[3]=5;
wypiszdoubla(rozmiar,tabd1);
wypiszdoubla(rozmiar,tabd2);
printf("Iloczyn skalarny wektorow wynosi: %f",iloczynskalarny(rozmiar,tabd1,tabd2));

///cw 4_2_12a
printf("\n\n cw 4_2_12a\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
odwroc(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12b
printf("\n\n cw 4_2_12b\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
przesunwlewo(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12c
printf("\n\n cw 4_2_12c\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
przesunwprawo(rozmiar,tab);
wypisz(rozmiar,tab);

///cw 4_2_12d
printf("\n\n cw 4_2_12d\n\n");
tab[0]=1; tab[1]=10; tab[2]=22; tab[3]=-33;
wypisz(rozmiar,tab);
sortuj(rozmiar,tab);
wypisz(rozmiar,tab);


///cw 4_2_17
printf("\n\n cw 4_2_17\n\n");
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
/*
printf("%f\n",*wsktab[0]);
printf("%f\n",*wsktab[1]);
printf("%f\n",*wsktab[2]);
printf("%f\n",*wsktab[3]);
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
