#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    double a,b,c;
};
void przepisz(struct trojkat t1, struct trojkat *t2 )
{
    *t2=t1;
}
void wypisz(struct trojkat tr1)
{
    printf("%f\n", tr1.a);
    printf("%f\n", tr1.b);
    printf("%f\n", tr1.c);
    printf("\n");
}
int main()
{
    struct trojkat tr1;
    tr1.a=3;
    tr1.b=4;
    tr1.c=5;
    struct trojkat tr2;
    tr2.a=1;
    tr2.b=1;
    tr2.c=1;
    struct trojkat *wsk2=&tr2;
    wypisz(tr1);
    wypisz(tr2);
    przepisz(tr1,wsk2);
    printf("Po zmianie\n");
    wypisz(tr1);
    wypisz(*wsk2);
    return 0;
}
