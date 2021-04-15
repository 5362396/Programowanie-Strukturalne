#include<stdio.h>
#include<wchar.h>

void maleduze(char* napis){
int i;
for(i=0;napis[i]!=0;i++)
{
    napis[i]=towupper(napis[i]);
}
}

int main(){
 ///cw 5_2_26
    printf("\ncw 5_2_26\n");
char napis[80]="do zmiany, TROCHE DUZYCH, symbole arytmetyczne 2+2=4";
printf(napis);
printf("\n");
maleduze(napis);
printf(napis);
}
