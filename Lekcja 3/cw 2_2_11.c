#include<stdio.h>

int podlogapierwiastka(unsigned int n){
int i=0;
while (i*i<=n)
{
    i++;
}
return i-1;
}

int sumapodlog(int n){
int i,S=0;
for(i=0;i<=n;i++)
{
    S=S+podlogapierwiastka(i);
}
return S;
}

int main(){
int n;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Wartosc wynosi %d\n",sumapodlog(n));
return 0;
}

