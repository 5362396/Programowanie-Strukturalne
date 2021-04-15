#include <stdio.h>
#include <math.h>

int modul(int x)
{
    if(x<0)
    {
        x=-x;
    }
    return x;
}

int podwoj(int x)
{
    return 2*x;
}

float kwadratowa(int x)
{
    return x*x;
}

float odwrotnosc(unsigned int x)
{
    return (float)1/x;
}

float potegaodwrotnosci(unsigned int x)
{
    return pow(2,odwrotnosc(x));
}

int main()
{
        int y=-3;
        printf("Wartosc bezwzgledna liczby %d wynosi %d\n",y,modul(y));
        int z;
        printf("Podaj liczbe z\n");
        scanf("%d",&z);
    printf("Dwukrotnosc liczby %d wynosi %d\n",z,podwoj(z));
    int w=5;
    printf("Wartosc funkcji kwadratowej na argumencie %d wynosi %f\n",w,kwadratowa(w));
    int u=2;
    printf("Dwa do potegi 1/%d wynosi %f",u,potegaodwrotnosci(u));
        return 0;
}
