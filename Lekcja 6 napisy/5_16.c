#include<stdio.h>


void wczytaj(char* napis){
    snanf("%s\n",napis); ///wszedzie bez &
}

void wczytajwchara(wchar_t* napis){
    wscanf(L"%ls\n",napis);
}

///mozna tez

void wczytajwchara2(wchar_t* napis){
    scanf("%ls\n",napis);
}

int main(){

}
