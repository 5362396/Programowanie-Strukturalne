#include<stdio.h>

///cw 6_2_15
int suma5(unsigned int n, int t[][3][4]){
int i,j,k;
int S=0;
for(i=0;i<n;i++)
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
int t[][3][4] =
{
    {
        {1,2,3,4}, {5,6,7,8}, {9,10,11,12}
    },
    {
        {13,14,15,16}, {17, 18, 19, 20}, {21, 22, 23, 24}
    }
    ,
    {
        {13,14,15,16}, {17, 18, 19, 20}, {21, 22, 23, 24}
    }
};
printf("%d",suma5(3,t));
}
