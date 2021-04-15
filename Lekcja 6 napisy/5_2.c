#include<stdlib.h>
#include<stdio.h>

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

int main(){
printf("%d\n", dlugosc("Programowanie strukturalne to bardzo przyjemny przedmiot"));
return 0;
}
