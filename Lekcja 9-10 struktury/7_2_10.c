#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

union super_int{
    int i;
    unsigned int u;
};

int main()
{
    union super_int Y;
    printf("%d\n",sizeof(Y));
    printf("%p\n",Y);
    printf("%p\n",Y.i);
    printf("%p\n",Y.u);
    return 0;
}
