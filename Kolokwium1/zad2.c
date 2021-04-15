#include <stdio.h>
#include <math.h>

int ile_cyfr(int x)
{
    int ic=0,pot=0;
    while(x>pow(10,pot))
    {
        ic+=1;
        pot+=1;
    }
    return ic;
}

int cyfra_wiodaca(int x)
{
    return x/pow(10,ile_cyfr(x)-1);
}

int wielomian(int x, int a, int b, int c, int d)
{
    return a*pow(x,3)+b*pow(x,2)+c*x+d;
}

void znajdz_wielomian()
{
    int a,b,c,d;
    for(int a1=-10;a1<11;a1++)
    {
        for(int b1=-10;b1<11;b1++)
        {
            for(int c1=-10;c1<11;c1++)
            {
                for(int d1=-10;d1<11;d1++)
                {
                    if(wielomian(0,a1,b1,c1,d1)==6 && wielomian(1,a1,b1,c1,d1)==8 && wielomian(2,a1,b1,c1,d1)==18 && wielomian(3,a1,b1,c1,d1)==54)
                    {
                        a=a1;
                        b=b1;
                        c=c1;
                        d=d1;
                    }
                }
            }
        }
    }
    printf("Szukany wielomian: %dx^3+%dx^2+%dx+%d\n",a,b,c,d);
}

int main()
{
    int s=0;
    for(int i=100;i<1000;i++)
    {
        if(i%5 == 0 && i%3 != 0)
        {
            s=s+i;
        }
    }
    printf("Suma wynosi: %d\n",s);
    int c=356582;
    printf("Ilosc cyfr: %d\n",ile_cyfr(c));
    printf("Cyfra wiodaca: %d\n",cyfra_wiodaca(c));
    znajdz_wielomian();
}
