#include<stdio.h>
#include<stdlib.h>

int indeks_wiersza2(int **t, unsigned int n, unsigned int m){
    int i,j;
    int S, max;
    for(i=0;i<n;i++)
    {
        S=0;
        for(j=0;j<m;j++)
        {
            S=S+t[i][j];
        }
        if(i==0) ///wartosci poczatkowe dla kazdego wiersza
        {
            max=S;
        }
        if(max<S)
        {
            max=S;
        }
    }
    return ((double) (max/m));
}

int** alokuj(unsigned int n, unsigned int m){ ///6_1
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

void wczytaj(int** t, unsigned int n, unsigned int m){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
}

void wypisz(int **t, unsigned int n, unsigned int m){ ///6_18
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

int main(){
    int **t=alokuj(3,3);
    wczytaj(t,3,3);
    wypisz(t,3,3);
    printf("%d\n", indeks_wiersza2(t,3,3));
}
