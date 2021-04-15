#include<stdio.h>

int EuklidesNWD(int n, int m){
    int a,b;
a=n;
    b=m;
while(a*b!=0)
{
    if(a>b)
    {
        a=a%b;
    }
    else
    {
        b=b%a;
    }
}
if(a==0)
{
    return b;
}
else
{
    return a;
}

}

int sumawzgpierw(int n){
    int i,S=0;
for(i=2;i<n;i++)
{
    if (EuklidesNWD(n,i)==1)
    {
        S=S+i;
    }
}
return S;
}

int main(){
int n;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Suma liczb wzglednie pierwszych z %d wynosi %d\n",n,sumawzgpierw(n));
return 0;
}
