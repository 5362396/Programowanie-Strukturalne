#include<stdlib.h>
#include<stdio.h>

void sklej(char *napis1, char *napis2, char *napis3){
    int i,j;
    for(i=0;napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;i++,j++)
    {
        napis3[i]=napis2[j];
    }
    napis3[i]=0;
}

int main(){
char* pierwszy7="brzeczy";
char* drugi7="szczykiewicz";
char trzeci7[40]; ///wynik musi miec dlugosc
sklej(pierwszy7, drugi7, trzeci7);
printf(trzeci7);
return 0;
}
