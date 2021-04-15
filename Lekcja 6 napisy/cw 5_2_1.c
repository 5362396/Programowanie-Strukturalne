#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

///cw 5_2_1
void wyczysc(char *napis){
napis[0]=0;
}

///cw 5_2_2
int dlugosc(char *napis){
    int i=0;
while(napis[i]!=0)
    i++;
return i;
}

///cw 5_2_3
int porownajnapisy(char *napis1,char *napis2){
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1==dl2)
        {
for(int i=0;i<=dl2-1;i++)
{
    if (napis1[i]!=napis2[i])
    {
        return 0;
    }
}
        return 1;
    }
    else
    {
      return 0;
    }
}

///cw 5_2_4
int porownajslownikowo(char *napis1,char *napis2){
for(int i=0;(napis1[i]!=0)&&(napis2[i]!=0);i++)
{
    if (napis1[i]!=napis2[i])
    {
        return (napis1[i]<napis2[i])?1:0;
    }
    if (napis1[i]!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
}

///cw 5_2_5
void przepisz(char*napis1, char*napis2){
    for(int i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}

///cw 5_2_6
void przepisznpierwszych(char*napis1, char*napis2, unsigned int n){
    for(int i=0;i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[n]=0;
}

///cw 5_2_7
void sklej(char *napis1,char *napis2,char *napis3){
    int i,j;
for(i=0;napis1[i]!='\0';i++)
{
    napis3[i]=napis1[i];
}
for(j=0;napis2[j]!='\0';i++,j++)
{
    napis3[i]=napis2[j];
}
napis3[i]=0;
}

///cw 5_2_8
void maleduze(char *napis){
int i;
for(i=0;napis[i]!=0;i++)
{
    if ((napis[i]>='a')&&(napis[i]<='z'))
    {
        napis[i]=napis[i]+'a'-'A';
    }
}
}

///cw 5_2_9
void wytnij(char *napis, int n, int m){
   int i,j;
   ///ustala dlugosc napisu
   for (j=0;napis[j]!=0;j++){}
       if(j+1>m)
       {
           for (i=0;i+m<j;i++)
           {
               napis[n+i]=napis[m+i+1];
           }
       }
       else if((n<j)&&(j+1<=m))
       {
           napis[n]=0;
       }
}

///cw 5_2_10
bool porownaj(char* napis1, char* napis2, int n){
int i;
for(i=0;(napis1[i]!=0)&&napis2[i]!=0;i++)
    if(napis1[n+i]!=napis2[i])
{
    return false;
}
if (napis2[i]==0)
{
    return true;
}
else
{
    return false;
}
}

void wytnij2(char* napis1, char* napis2){
int i, dl;
for(dl=0;napis2[dl]!=0;dl++){}
    for(i=0;napis1[i]!=0;i++)
{
    if (porownaj(napis1,napis2,i))
    {
        wytnij(napis1,i,i+dl-1);
        return;
    }
}
}

///cw 5_2_11
void wytnijzw(char* napis1, char* napis2){
int i,dl;
int
}

///cw 5_2_13
    void wytnijtesameznaki(char *napis1,char *napis2){
        int i,j;
        for(i=0,j=0;napis1[i]!=0;i++)
        {
    if (napis1[i]!=napis2[i])
    {
            napis1[j]=napis1[i];
        j++;
    }
        }
    napis1[j]=0;
}

///cw 5_2_15
void wypisz(char * napis){
printf("%s\n",napis);
}

void wypiszwchara(wchar_t * napis){
printf("%ls\n",napis);
}

///cw 5_2_16
void wczytaj(char * napis){
scanf("%s",napis);
}

void wczytajwchara(wchar_t * napis){
scanf("%ls",napis);
}

///cw 5_2_20
char * godzina(int godz, int min, int sek){
char* wynik=malloc(9*sizeof(char));
sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
return wynik;
}

wchar_t * godzinawchar(int godz, int min, int sek){
wchar_t* wynik=malloc(9*sizeof(wchar_t));
swprintf(wynik,L"%02d:%02d:%02d",godz,min,sek);
return wynik;
}


///cw 5_2_22
char* sklejnapisy(char* napis1, char* napis2, char *napis3){
char* wynik=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(char));
///strlen oblicza dlugosc lancucha, wymaga uzycia bibiloteki string.h
strcpy(wynik,napis1); ///pozwala umiescic stringa pod podany wskaznik
strcat(wynik,napis2); ///pozwala dolaczyc lancuch do konca lancucha znajdujacego sie we wskazanym miejscu
strcat(wynik,napis3);
return wynik;
}



int main(){
    ///cw 5_2_2
    printf("\ncw 5_2_2\n");
    printf("%d\n",dlugosc("Programowanie strukturalne to bardzo przyjemny przedmiot"));

    ///cw 5_2_3
    printf("\ncw 5_2_3\n");
    printf("%d\n",porownajnapisy("pierwszy napis","drugi napis"));
    printf("%d\n",porownajnapisy("wziasc","wziazc"));
    printf("%d\n",porownajnapisy("wziac","wziac"));

    ///cw 5_2_4
    printf("\ncw 5_2_4\n");
    printf("%d\n",porownajslownikowo("arbuz","arbiter"));
printf("%d\n",porownajslownikowo("hulajdusza","hulajnoga"));

///cw 5_2_5
printf("\ncw 5_2_5\n");
///w poleceniu mamy zaznaczone ze przepisujemy krotsze napisy pod dluzsze
char* pierwszy="arbuz";
char drugi[20]="arbiter";
wypisz(pierwszy);
wypisz(drugi);
przepisz(pierwszy,drugi);
wypisz(pierwszy);
wypisz(drugi);

///cw 5_2_6
printf("\ncw 5_2_6\n");
char *pierwszy6="informatyka";
wypisz(pierwszy6);
char drugi6[30]="programowanie";
wypisz(drugi6);
przepisznpierwszych(pierwszy6,drugi6,6);
wypisz(pierwszy6);
wypisz(drugi6);

///cw 5_2_7
printf("\ncw 5_2_7\n");
char *pierwszy7="brzeczy";
char *drugi7="szczykiewicz";
char trzeci7[40]; ///wynik musi miec dlugosc
sklej(pierwszy7,drugi7,trzeci7);
wypisz(trzeci7);

///cw 5_2_8
printf("\ncw 5_2_8\n");
char napiszad8[40]="ten napis ma byc duzymi literami";
wypisz(napiszad8);
maleduze(napiszad8);
wypisz(napiszad8);

///cw 5_2_9
printf("\ncw 5_2_9\n");
char napiszad9[40]="z tego napisu mamy cos wyciac";
wypisz(napiszad9);
wytnij(napiszad9,5,15);
wypisz(napiszad9);

///cw 5_2_10
printf("\ncw 5_2_10\n");
char napiszad101[40]="napis z ktorego wycinami";
char napiszad102[40]="ktorego";
wytnij2(napiszad101,napiszad102);
wypisz(napiszad101);

///cw 5_2_11
printf("\ncw 5_2_11\n");

///cw 5_2_12
printf("\ncw 5_2_12\n");

///cw 5_2_13
printf("\ncw 5_2_13\n");
char napiszad131[40]="arbuz";
char napiszad132[40]="arbiter";
wytnijtesameznaki(napiszad131,napiszad132);
wypisz(napiszad131);
    return 0;
}


