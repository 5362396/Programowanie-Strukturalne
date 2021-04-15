#include<stdio.h>
///kod ASCII kazdy ,,podstawowy" znak ma swoj numerek w kodzi ASCII

int main(){
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(wchar_t));
    printf("%d\n",'A');
     printf("%d\n",'B');
         printf("%d\n",'C');
     printf("%d\n",'Z');
     printf("%d\n",'a');
       printf("%d\n",'z');
       printf("%d\n",'0');
       printf("%d\n",'1');
       printf("%d\n",'2');
       printf("%d\n",' ');
        printf("%d\n",'!');
        printf("%d\n",'*');
        printf("%d\n",'#');
        printf("%d\n",'^');
        int i;
    for(i=0;i<=127;i++)
    {
        printf("%d %c \n",i,i);
    }
    ///
}
