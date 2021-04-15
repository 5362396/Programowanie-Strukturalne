#include<stdbool.h>
#include<stdio.h>

///cw 4_2_5 sito Eratostenesa
int pierwsza(unsigned int n){
int pom,i,j;
bool sito[n];
for(i=0;i<n;i++)
{
 sito[i]=true;
}
for(i=2;i<n;i++)
{
    if(sito[i])
    {
        pom=i;
        for (j=2*i;j<n;j=j+i)
        {
            sito[j]=false;
        }
    }
}
return pom;
}

///chcemy wszystkie liczby pierwsze mniejsze od n
void wszystkiepierwsze(unsigned int n){
int i,j;
bool sito[n];
for(i=0;i<n;i++)
{
 sito[i]=true;
}
for(i=2;i<n;i++)
{
    if(sito[i])
    {
        printf("%d \t", i);
        for (j=2*i;j<n;j=j+i)
        {
            sito[j]=false;
        }
    }
}
}

int main(){
    ///cw 4_2_5
printf("\n\n cw 4_2_5\n\n");
printf("%d\n",pierwsza(10000));
wszystkiepierwsze(550);
}
