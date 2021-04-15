#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h> // nie dziala cos

void wytnij(char *napis, int n, int m){
    int i, j;
    for(j=0;napis[j]!=0;j++)
    {
        ///ustala dlugosc napisu
    }
        if (j+1>m) ///jesli napis jest wystarczajaco dlugi aby wycinac srodek
        {
            for (i=0;i+m<j;i++)
            {
                napis[n+i]=napis[m+i+1]; ///n=5 m=15, 0 1 2 3 4 <- 0 1 2 3 4, 5 6 7 8 ... <- 16 17 18 19
            }
        }
        else if ((n<j)&&(j+1<=m)) ///jesli jest sredniej dlugosci i wycinamy koncowke
        {
            napis[n]=0;
        }
}

bool porownaj(char *napis1, char *napis2, int n){
    int i;
    for(i=0;napis1[i]!=0&&napis2[i]!=0;i++)
    {
        if(napis1[n+i]!=napis2[i])
        {
            return false;
        }
        if(napis2[i]==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void wytnij2(char* napis1, char* napis2){
    int i, dl;
    for(dl=0;napis2[dl]!=0;dl++){
        if(porownaj(napis1,napis2,i))
        {
            wytnij(napis1,i,i+dl-1);
            //return; koñczy prace funkcji to wytnie sie raz nie wiêcej
        }
    }
}

int main(){
char napis101[40]="napis z ktorego ktorego wycinamy";
char napis102[40]="ktorego";
wytnij2(napis101,napis102);
printf(napis101);
return 0;
}
