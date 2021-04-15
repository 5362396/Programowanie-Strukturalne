#include<stdlib.h>
#include<stdio.h>

int porownajslownikowo(char *napis1, char *napis2){
    int i;
for(i=0; (napis1[i]!=0)&&(napis2[i]!=0);i++)
{
    if (napis1[i]!=napis2[i])
    {
        return (napis1[i]<napis2[i])?1:0;
    }
    if (napis1[i]!=0)
    {
        return 0;
    }
    else
    {
        return 1; /// cos zle
    }
}
}

int main(){
printf("%d\n", porownajslownikowo("baba", "alibaba"));
printf("%d\n", porownajslownikowo("hulajdusza", "hulajnoga"));
printf("%d\n", porownajslownikowo("arbiter", "arbuz"));
return 0;
}
