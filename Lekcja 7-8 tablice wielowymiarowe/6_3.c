#include<stdlib.h>

///cw 6_2_3
void zwolnij(unsigned int n, unsigned int m, int **t){
    int i;
for(i=0;i<n;i++)
{
    free(t[i]);
}
free(t);
}


int main(){
}
