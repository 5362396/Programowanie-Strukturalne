#include<stdlib.h>
#include<stdio.h>

void maleduze(char *napis){
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        if ((napis[i]>='a')&&(napis[i]<='z'))
        {
            napis[i]=napis[i]+'A'-'a';
        }
    }
}

int main(){
char napiszad8[50]="ten napis ma byc duzymi literami, a 2+2=4";
printf(napiszad8);
printf("\n");
maleduze(napiszad8);
printf(napiszad8);
return 0;
}
