#include<stdio.h>

int modul(int x){
if (x<0)
{
    return -x;
}
else
{
    return x;
}
}

int main(){
int n;
printf("Podaj liczbe calkowita");
scanf("%d",&n);
printf("|%d|=%d\n",n,modul(n));
return 0;
}

