#include <stdio.h>
#include <math.h>

//B
int * alokuj()
{
    return malloc(sizeof(int));
}

int main()
{
    //A
    static float x = 5.25;
    printf("%p\n",&x);
    //B
    int * b = alokuj();
    *b=17;
    printf("Wartosc to: %d\n", *b);

}
