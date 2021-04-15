#include<stdio.h>

///cw 6_2_14
int sumuj4(int t[][3][4]){///zmienilem dla testow 100 na 100 na 100 zamiast tego dalem 2 na 3 na 4
int i,j,k;
int S=0;
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
{
    for(k=0;k<4;k++)
    {
        S=S+t[i][j][k];
    }
}
}
return S;
}

int main(){
    int tab[2][3][4] = {{{1,2,3,4},{1,2,3,4},{1,2,3,4}},{{1,2,3,4},{1,2,3,4},{1,2,3,4}}};
    printf("%d\n",sumuj4(tab));
int t[2][3][4] =
{
    {
        {1,2,3,4}, {5,6,7,8}, {9,10,11,12}
    },
    {
        {13,14,15,16}, {17, 18, 19, 20}, {21, 22, 23, 24}
    }
};
printf("%d",sumuj4(t));
int t2[4][2][3] =
{
    {
        {1,2,3}, {5,6,7}
    },
    {
        {13,14,15}, {17, 18, 19}
    },
    {
        {1,2,3}, {5,6,7}
    },
    {
        {1,2,3}, {5,6,7}
    },
};
}
///wypisz(n,k,m,tab[n][k][m])
/// w 0 wierszu miesci sie macierz tab[0][k][m] [0,...,...]
///w 1 wierszu miesci sie macierz tab[1][k][m] [1,...,...]
///...
///w n-1 wierszu miesci sie macierz tab[n-1][k][m]

