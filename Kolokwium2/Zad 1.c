#include <stdio.h>
#include <stdlib.h>

//podpunkt a
int dlugoscnapisu(char *napis)
{
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    return i;
}

//podpunkt b
void wytnij(char *napis, int n, int m)
{
    int i, dl;
    for(dl=0;napis[dl]!=0;dl++);
    if (dl+1>m)
    {
        for (i=0;i+m<dl;i++)
            {
                napis[n+i]=napis[i+m+1];
            }
    }
    else
    {
        if ((n<dl)&&(dl+1<=m))
        {
            napis[n]=0;
        }
    }
}

//podpunkt c
void sklej(char napis[],char napis2[],char napis3[])
{
    for(int i=0; i<=strlen(napis);i++){
        napis3[i] = napis[i];
    }
    int k = strlen(napis2) + strlen(napis3);
    for(int j=strlen(napis3); j<=k;j++){
        napis3[j] = napis2[j-5];
    }
}

//podpunkt d
void usun(int n, char *napis,char *napis2)
{
    int m=dlugoscnapisu(napis);

    int pom=0;
    for(int i=0;i<m;i++)
    {
        if(napis[i]=='a' && n>0)
        {
            n-=1;
        }
        else
        {
            napis2[pom]=napis[i];
            pom++;
        }
    }
}

//podpunkt e
int przelicz(char napis[],char napis2[])
{
    int suma=0;
    for(int i=0; i<strlen(napis2);i++)
    {
        int p=0;
        if(napis2[i]==napis[0])
        {
            p=1;
            for(int j=0; j<strlen(napis);j++)
            {
                if(napis[j]!=napis2[i+j])
                {
                    p=0;
                }
            }
        }
        if(p==1)
        {
            suma+=1;
        }
    }
    return suma;
}

int main()
{
    char slowo[] = "literki";
    printf("%d\n", dlugoscnapisu(slowo));
    char slowo2[]="monitor";
    wytnij(slowo2,2,3);
    printf("%s\n",slowo2);
    char sk1[]="Progr";
    char sk2[]="amowanie";
    char sk3[20];
    sklej(sk1,sk2,sk3);
    printf("%s\n", sk3);
    char *babcia = "babcia zlapala kapcia";
    char babcia2[30];
    usun(4 ,babcia, babcia2);
    printf("%s\n",babcia2);
    char napis3[]="ma";
    char napis4[]="mama ma mala marynarke";
    printf("%d\n", przelicz(napis3, napis4));
    return 0;
}
