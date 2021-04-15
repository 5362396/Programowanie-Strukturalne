#include<stdio.h>

int idopotegim(int i, int m){
    int k,w=1;
for(k=1;k<=m;k++)
{
    w=w*i;
}
return w;
}

void wypisz(unsigned int n, int m){
int i,j,k,p;
for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(idopotegim(i,m)+idopotegim(j,m)==n)
        {
            printf("%d do potegi %d+%d do potegi %d=%d\n",i,m,j,m,n);
        }
    }
}
for (k=1;k<=n;k++)
{
for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(idopotegim(i,m)+idopotegim(j,m)+idopotegim(k,m)==n)
        {
            printf("%d do potegi %d+%d do potegi %d+%d do potegi %d=%d\n",k,m,i,m,j,m,n);
        }
    }
}
}
for (p=1;p<=n;p++)
{
    for(k=1;k<=n;k++)
    {
for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(idopotegim(i,m)+idopotegim(j,m)+idopotegim(k,m)+idopotegim(p,m)==n)
        {
            printf("%d do potegi %d+%d do potegi %d+%d do potegi %d+%d do potegi %d=%d\n",p,m,k,m,i,m,j,m,n);
        }
    }
}
    }
    }
}

int main(){
    int n,m;
    printf("Podaj liczbe calkowita n:\n");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita m:\n");
    scanf("%d", &m);
    wypisz(n,m);
    return 0;
}
