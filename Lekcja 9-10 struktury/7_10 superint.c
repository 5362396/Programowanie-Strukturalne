#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

///cw 7_2_10
union super_int{
int i;
unsigned int u;
};

struct wiele_int{
int i;
unsigned int u;
};

int main(){
      struct wiele_int X;
      union super_int Y;
        printf("%d\n",sizeof(int));
          printf("%d\n",sizeof(unsigned int));
      ///struktura
      printf("%d\n",sizeof(X));
      printf("%p\n",X);
      printf("%p\n",X.i);
      printf("%p\n",X.u);
      ///unia
      printf("%d\n",sizeof(Y));
       printf("%p\n",Y);
      printf("%p\n",Y.i);
      printf("%p\n",Y.u);
}
