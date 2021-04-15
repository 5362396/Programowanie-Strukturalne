#include <stdio.h>
#include <stdlib.h>



void wypisz(unsigned int n, unsigned int k, unsigned int m, int tab[n][k][m])
{
    int i, j, z;
    for(i = 0; i<n; i++)
    {
        for(j=0; j<k; j++)
        {
            for(z=0; z<m; z++)
            {
                printf("%3i", tab[i][j][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
}




int main()
{

    int t[4][2][3] =
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

    wypisz(4, 2, 3, t);

}
