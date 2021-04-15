#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

///cw 6_2_1
int** alokuj(unsigned int n, unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc(m*sizeof(int));
}
return t;
}


///cw 6_2_2
int(* alokuj2(unsigned int n, unsigned int m))[]{
return malloc(n*sizeof(int[m]));
}

///cw 6_2_3
void zwolnij(unsigned int n, unsigned int m, int **t){
    int i;
for(i=0;i<n;i++)
{
    free(t[i]);
}
free(t);
}


///cw 6_2_4
void zwolnij2(unsigned int n, int t[][n]){
free(t);
}

///cw 6_2_7
int** alokujtrojkatna(unsigned int n){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc((i+1)*sizeof(int));
}
return t;
}

///cw 6_2_8
void zeruj(int t[][100], unsigned int n){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<100;j++)
{
       t[i][j]=0;
    }
}

}


///cw 6_2_9
void zeruj2(int** t, unsigned int n,unsigned int m){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       t[i][j]=0;
    }
}

}

///cw 6_2_10
void zeruj3(unsigned int n,unsigned int m, int t[][m]){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       t[i][j]=0;
    }
}

}

///cw 6_2_11
int suma(int t[][100], unsigned int n){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<100;j++)
{
       S=S+t[i][j];
    }
}
return S;
}


///cw 6_2_12
int suma2(int** t, unsigned int n,unsigned int m){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       S=S+t[i][j];
    }
}
return S;
}

///cw 6_2_13
int suma3(unsigned int n,unsigned int m, int t[][m]){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       S=S+t[i][j];
    }
}
return S;
}

///cw 6_2_14
int suma4(int t[][100][100]){
int i,j,k;
int S=0;
for(i=0;i<100;i++)
{
    for(j=0;j<100;j++)
{
    for(k=0;k<100;k++)
    {
        S=S+t[i][j][k];
    }
}
}
return S;
}

///cw 6_2_15
int suma5(unsigned int n, int t[][100][100]){
int i,j,k;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<100;j++)
{
    for(k=0;k<100;k++)
    {
        S=S+t[i][j][k];
    }
}
}
return S;
}

///cw 6_2_16
int indeks_wiersza(int **t, unsigned int n, unsigned int m){
int i,j;
int S,max,indeks;
for(i=0;i<n;i++)
{
    S=0;
    for(j=0;j<m;j++)
{
S=S+t[i][j];
}
if (i==0) ///wartosci poczatkowe dla pierwszego wiersza
{
    max=S;
    indeks=0;
}
if (max<S)
{
    max=S;
    indeks=i;
}
}
return indeks;
}

///cw 6_2_17
double indeks_wiersza2(int **t, unsigned int n, unsigned int m){
int i,j;
int S,max;
for(i=0;i<n;i++)
{
    S=0;
    for(j=0;j<m;j++)
{
S=S+t[i][j];
}
if (i==0) ///wartosci poczatkowe dla pierwszego wiersza
{
    max=S;
}
if (max<S)
{
    max=S;
}
}
return ((double)(max)/m);
}

///cw 6_2_18
void wypisz(int **t, unsigned int n, unsigned int m){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
}

void wypisz2(unsigned int n,unsigned int m, int t[][m]){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       printf("%d\t",t[i][j]);
    }
    printf("\n");
}

}

///cw 6_2_19
void przepisz(int **t1, int **t2, unsigned int n, unsigned int m){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
   t2[i][j]=t1[i][j];
}
}
}

///cw 6_2_20
void zamien(int **t1, int **t2, unsigned int n, unsigned int m){
    int i,j,pom;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    pom=t2[i][j];
   t2[i][j]=t1[i][j];
   t1[i][j]=pom;
}
}
}

///cw 6_2_21
void odwroc_wiersze(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
for(i=0;i<n;i++)
{
    for(j=0;j<m/2;j++)
{
    pom=t[i][j];
   t[i][j]=t[i][m-1-j];
   t[i][m-1-j]=pom;
}
}

}

 ///cw 6_2_22
void odwroc_wiersze2(unsigned int n, unsigned int m, int t[][n]){
      int i,j,pom;
for(i=0;i<n;i++)
{
    for(j=0;j<m/2;j++)
{
    pom=t[i][j];
   t[i][j]=t[i][m-1-j];
   t[i][m-1-j]=pom;
}
}

}

///cw 6_2_23
void wiersze_w_dol(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
         for(j=0;j<m;j++)
{
    pom=t[n-1][j];
for(i=n-1;i>0;i--)
{
   t[i][j]=t[i-1][j];
}
   t[0][j]=pom;
}
}

///cw 6_2_24
void kolumny_w_prawo(int **t, unsigned int n, unsigned int m){
      int i,j,pom;
         for(i=0;i<n;i++)
{
    pom=t[i][m-1];
for(j=m-1;j>0;j--)
{
   t[i][j]=t[i][j-1];
}
   t[i][0]=pom;
}
}

///cw 6_2_25
void zamiana_miejsc(int **t, unsigned int n){
      int i,j,pom;
         for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
    pom=t[i][j];
    t[i][j]=t[j][i];
   t[j][i]=pom;
}
}
}

///cw 6_2_26
int** transpozycja(int **t1, unsigned int n, unsigned m){
    int **t2=malloc(n*m*sizeof(int));
      int i,j,pom;
     // int t2[m][n];
         for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
    t2[j][i]=t1[i][j];
}
}
return t2;
}

///cw 6_2_27
void zamiana_trojwymiarowej(int ***t, unsigned int n){
      int i,j,k,pom;
         for(i=1;i<n;i++)
{
for(j=i;j<n;j++)
{
    if(i==j)
    {
        k=i;
    }
    else
    {
        k=i+1;
    }
    for(;k<n;k++)
    {
    pom=t[i][j][k];
    t[i][j][k]=t[j][k][i];
    t[j][k][i]=t[k][i][j];
   t[k][i][j]=pom;
    }
}
}
}

///cw 6_2_32
int** iloczynmacierzy(unsigned int n, int **t1,int **t2){
      int i,j,k;
    int **t3=malloc(n*sizeof(int *));
         for(i=0;i<n;i++)
         {
            t3[i]=malloc(n*sizeof(int));
         }
for(i=0;i<n;j++)
{
    for(j=0;j<n;j++)
{
    t3[j][i]=0;
    for(k=0;k<n;k++)
    {
        t3[i][j]=t3[i][j]+t1[i][k]*t2[k][j];
    }
}
}
return t3;
}

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
void wczytaj(int** t, unsigned int n,unsigned int m){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}



int main(){
    ///wersja dla tablicy tablic
    ///cw 6_2_12
    /*
    int **t=alokuj(3,3);
    wczytaj(t,3,3);
wypisz(t,3,3);
printf("cw 6_2_12\n");
printf("%d\n",suma2(t,3,3));
/// 6_2_16
printf("cw 6_2_16\n");
printf("%d\n",indeks_wiersza(t,3,3));
printf("cw 6_2_17\n");
printf("%f\n",indeks_wiersza2(t,3,3));
*/
 ///wersja dla tablicy dwuwymiarowej
 int t2[4][4]={{20,2,5,8},{2,8,31,4},{5,6,7,8},{5,6,7,8}};
 printf("cw 6_2_13\n");
printf("%d\n",suma3(4,4,t2));
 wypisz2(4,4,t2);
zeruj3(4,4,t2);
wypisz2(4,4,t2);


return 0;

}
