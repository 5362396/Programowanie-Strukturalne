#include<stdio.h>


void wypisz(char* napis){
    printf("%s",napis);
}

void wypiszwchara(wchar_t* napis){
    wprintf(L"%ls\n",napis);
}



int main(){
wypisz("UNIWERSYTET WARMINSKO-MAZURSKI W OLSZTYNIE");
}
