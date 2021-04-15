#include<stdio.h>

int idopotegim(int i, int m){
    int k,w=1;
for(k=1;k<=m;k++)
{
    w=w*i;
}
return w;
}

int podlogapierwiastkamtegostopnia(unsigned int m, unsigned int n){
int i=0;
while (idopotegim(i,m)<=n)
{
    i++;
}
return i-1;
}

int main(){
int n,m;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Podaj liczbe calkowita m");
scanf("%d",&m);
printf("Podloga z pierwiastka %d stopnia z liczby %d wynosi %d\n",m,n,podlogapierwiastkamtegostopnia(m,n));
return 0;
}
