#include<stdio.h>

void wytnijsameznaki(char *napis1,char *napis2){
    int i,j;
    for(i=0,j=0;napis1[i]!=0;i++){
        if(napis1[i]!=napis2[i])
        {
            napis1[j]=napis1[i];
            j++;
        }
    }
    napis1[j]=0;
}



int main(){
char napis131[40]="barbuz";
char napis132[40]="arbiter";
wytnijsameznaki(napis131,napis132);
printf(napis131);
return 0;
}
