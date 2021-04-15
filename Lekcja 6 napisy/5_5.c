#include<stdlib.h>
#include<stdio.h>

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

void przepisz(char* napis1, char* napis2){
    int i;
    for(i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}

///cw 5_14
void wypisz(char * napis){
printf("%s\n",napis);
}

int main(){
char* pierwszy="arbuz";
char drugi[20]="arbiter"; // musi byc rozmiar bo program sie wyjebie
wypisz(pierwszy);
wypisz(drugi);
przepisz(pierwszy, drugi);
wypisz(pierwszy);
wypisz(drugi);
// alokacja pamieci
char* piaty="student";
char* szosty=malloc(20*sizeof(char));
wypisz(piaty);
przepisz(piaty, szosty);
wypisz(piaty);
wypisz(szosty);
return 0;
}
