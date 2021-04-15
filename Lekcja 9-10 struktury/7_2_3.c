#include <stdio.h>
#include<math.h>
struct punkt
{
    float x,y,z;
};



void odleglosc(struct punkt t1, struct punkt t2)
{
    float d = sqrt(pow(t2.x - t1.x, 2) +
                   pow(t2.y - t1.y, 2) +
                   pow(t2.z - t1.z, 2) * 1.0);
    printf("Odleglosc to %f", d);
    return;
}



int main()
{
    struct punkt t1;
    struct punkt t2;
    t1.x = 2;
    t1.y = -5;
    t1.z = 7;
    t2.x = 3;
    t2.y = 4;
    t2.z = 5;
    odleglosc(t1,t2);
    return 0;
}
