#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

///cw 7_2_3
struct punkt{ /// jak obliczyc odleglosc miedzy punktami (1,3,5), (4,2,9). sqrt((1-4)^2+(3-2)^2+(5-9)^2)=sqrt(9+1+16)=sqrt(26) = 5,1.
double x,y,z; ///(x,y,z), ...
};
///co powinien zwrocic program z zadania 7_2_3 dla (4,7,1), (2,2,8), (5,6,0)  -> sqrt(78) , sqrt(89) , sqrt(3).  WYNIK sqrt(3).

double minimum(struct punkt tab[], int n){
int i,j;
double pom;
double min=sqrt(pow(tab[1].x-tab[0].x,2)
                +pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        pom=sqrt(pow(tab[j].x-tab[i].x,2)
                +pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
    }
    if(pom<min)
    {
        min=pom;
    }
}
return min;
}

int main()
{
    struct punkt P;
    P.x=4;
    P.y=7;
    P.z=1;
    struct punkt Q;
     Q.x=2;
    Q.y=2;
    Q.z=8;
     struct punkt R;
     R.x=5;
    R.y=6;
    R.z=0;
    struct punkt tab[3]={P,Q,R};
    printf("%f",minimum(tab,3));
}
