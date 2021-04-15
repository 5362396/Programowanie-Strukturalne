#include<stdlib.h>
#include<stdio.h>

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

void przepisznpierwszych(char* napis1, char* napis2, unsigned int n){
    int i;
    for(i=0;i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0; // jak tu daæ n to inaczej dzia³¹ jak 1 string za maly
}

///cw 5_15
void wypisz(char * napis){
printf("%s\n",napis);
}

int main(){
char* pierwszy6="informatyka";
wypisz(pierwszy6);
char drugi6[30]="programowanie"; // trzeba podac rozmiar drugiej tablicy bo program wyjebie
wypisz(drugi6);
przepisznpierwszych(pierwszy6, drugi6, 6);
wypisz(pierwszy6);
wypisz(drugi6);
return 0;
}
