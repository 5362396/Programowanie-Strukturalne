#include <stdio.h>
#include <math.h>

int ciag(int x) //A
{
    if(x==1)
    {
        return 1;
    }
    int w = 3*ciag(x-1)-1;
    return w;
}

void wypisz()
{
    for(int i=1;i<11;i++)
    {
        printf("%d\n",ciag(i));
    }
}

unsigned int ciag2(int n) //B
{
    if(n%2==0)
    {
        return n/2;
    }
    else
    {
        return n+1;
    }
}

void wypisz2()
{
    printf("Podaj pierwszy wyraz \n");
    int p;
    scanf("%d",&p);
    int x=ciag2(p);
    while(x!=1)
    {
        printf("%d\n",x);
        x=ciag2(x);
    }
    printf("%d\n",x);
}

int main()
{
    wypisz();
    wypisz2();
}
