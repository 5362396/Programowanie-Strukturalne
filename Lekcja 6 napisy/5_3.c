#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

bool porownaj(char *napis1, char *napis2){
    int i;
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1 == dl2){
for(i=0;i<=dl2-1;i++)
{
    if(napis1[i]!=napis2[i])
    {
        return 0;
    }
}
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
printf("%d\n", porownaj("napis", "inny napis"));
printf("%d\n", porownaj("napis", "napis"));
return 0;
}
