#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a, b, c;
};

double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}



int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;
    printf("Obwod: %f", obwod(t1));
}
