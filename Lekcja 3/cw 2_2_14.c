#include<stdio.h>
void wypisz(unsigned int n){
int i,j,k,m;
        for(k=1;k<=n;k++)
        {
            for(m=1;m<=n;m++)
            {
        if(k*k+m*m==n)

        {
            printf("%d*%d+%d*%d=%d\n",k,k,m,m,n);
        }
        }
    }
for(j=1;j<=n;j++)
    {
        for(k=1;k<=n;k++)
        {
            for(m=1;m<=n;m++)
            {
        if(j*j+k*k+m*m==n)

        {
            printf("%d*%d+%d*%d+%d*%d=%d\n",j,j,k,k,m,m,n);
        }
        }
    }
}

for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        for(k=1;k<=n;k++)
        {
            for(m=1;m<=n;m++)
            {
        if(i*i+j*j+k*k+m*m==n)

        {
            printf("%d*%d+%d*%d+%d*%d+%d*%d=%d\n",i,i,j,j,k,k,m,m,n);
        }
        }
    }
}
}
}

int main(){
    int n;
    printf("Podaj liczbe calkowita n:\n");
    scanf("%d", &n);
    wypisz(n);
    return 0;
}
