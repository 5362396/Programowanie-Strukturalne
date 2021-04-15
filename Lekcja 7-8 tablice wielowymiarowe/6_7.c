#include<stdlib.h>

///cw 6_2_7
int** alokujtrojkatna(unsigned int n){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc((i+1)*sizeof(int));
}
return t;
}

int main(){
}

