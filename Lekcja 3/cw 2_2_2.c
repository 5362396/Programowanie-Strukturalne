#include<stdio.h>

int silnia(unsigned int x){
int i,s=1;
for(i=2;i<=x;i++)
    s=s*i;
return s;
}

int main(){
int n;
printf("Podaj liczbe calkowita");
scanf("%d",&n);
printf("silnia z %d=%d\n",n,silnia(n));
return 0;
}
