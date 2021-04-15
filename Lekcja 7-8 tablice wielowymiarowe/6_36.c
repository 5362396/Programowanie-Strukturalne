#include<stdio.h>
#include<stdlib.h>

///cw 6_3_36
int ** utworz(int n){
int i;
int **t=malloc(n*sizeof(int*));
for(i=0;i<n;i++)
         {
            t[i]=malloc(n*sizeof(int));
         }
         return t;
}


void usun(int n, int **t){
int i;
for(i=0;i<n;i++)
         {
            free(t[i]);
         }
         free(t);
}

void przepiszmacierz(int n, int m, int **t1, int **t2){
int i1,i2,j1,j2;
for(i1=0,i2=0;i1<n;i1++)
         {
            if(i1!=m)
            {
               for(j1=1,j2=0;j1<n;j1++,j2++)
               {
                   t2[i2][j2]=t1[i1][j1];
               }
               i2++;
            }
         }
}

int wyznacznik(unsigned int n, int **tab){
int i,j,pom;
int **t;
if(n==1)
{
    return tab[0][0];
}
pom=0;
t=utworz(n-1);
for(i=0;i<n;i++)
         {
             przepiszmacierz(n,i,tab,t);
             if(i%2==0)
             {
                 pom=pom+tab[i][0]*wyznacznik(n-1,t);
             }
             else
             {
                 pom=pom-tab[i][0]*wyznacznik(n-1,t);
             }
         }
 usun(n,t);
 return pom;
}

 ///wczytaj
void wczytaj_kwadratowa(int** t, unsigned int n){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}

///cw 6_2_18
void wypisz_kwadratowa(int **t, unsigned int n){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
printf("\n");
}

 int main(){
     int **t=utworz(3);
 wczytaj_kwadratowa(t,3);
wypisz_kwadratowa(t,3);
printf("%d",wyznacznik(3,t));
};
///[2 1 2]
///[3 2 1] = 2 * [2  1] - 3 * [1 2] + 3 * [1  2] = 2* (4-4) - 3*(2-8) + 3*(1-4) = 0 + 18 - 9 = 9
///[3 4 2]       [4  2]       [4 2]       [2  1]
