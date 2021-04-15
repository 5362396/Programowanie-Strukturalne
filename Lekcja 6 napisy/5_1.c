#include<stdlib.h>
#include<stdio.h>

void wyczysc(char *napis){
    napis[0]=0;
}

int main(){
char* napis="pieczewo";
printf(napis);
printf("\n");
printf("co nam wyswietli po wyczyszczeniu");
wyczysc(napis);
printf(napis);
return 0;
}
