#include<stdio.h>
#include<stdlib.h>

char * godzina(int godz, int min, int sek){
    char* wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}

int main(){
    int godziny=7;
    int minuty=48;
    int sekundy=5;
    printf(godzina(godziny,minuty,sekundy));
}
