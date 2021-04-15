#include<stdio.h>

///cw 5_2_11
void wytnij_wszystkie_znaki(char *napis1, char *napis2){
   int i,j;
   int znaki[256];
   for (i=0;napis2[i]!=0;i++)
    {
       znaki[napis2[i]]=1;///zapamietujemy znaki w napisie 2
   }
           for (i=0,j=0;napis1[i]!=0;i++)
           {
               if(znaki[napis1[i]]==0)
               {
                      napis1[j]=napis1[i];
                      j++;
               }
             napis1[j]=0;
           }
       }
int main(){
///cw 5_2_11
printf("\ncw 5_2_11\n");
char napiszad111[40]="zdanie do wyciecia";
char napiszad112[40]="no to ciach";
wytnij_wszystkie_znaki(napiszad111,napiszad112);
printf(napiszad111);
}
