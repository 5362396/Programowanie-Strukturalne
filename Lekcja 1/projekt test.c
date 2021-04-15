#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a<b)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",a);
    }
    int c,d,e,m;
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if (c<d)
    {
        m=d;
    }
        else
        {
            m=c;
        }
        if(m<e)
        {
            m=e;
        }
        printf("%d\n", m);
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(abs(x)<abs(y))
    {
        printf("%d",y);
    }
    else
    {
        printf("%d", x);
    }
}
