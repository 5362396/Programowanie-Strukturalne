#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
    char* napisa="arbuz";
char* napisb="baobab";
char* napisc="czekolada";
char* napiswynik;
napiswynik=sklejnapisy(napisa,napisb,napisc);///tutaj miejsce na napiswynik zostalo zaalokowane wewnatrz funkcji sklejajacej
printf(napiswynik);
}
