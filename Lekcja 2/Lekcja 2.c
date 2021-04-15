#include <stdio.h>

int main() {
    int n,i,s=1,p=0;
    printf("Podaj liczbe calkowita n:\n");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
    s=s+i*s;
    p=p+s;
    }
    if(i==0){
        printf("1");
    }
    else{
        printf("%d\n",p+1);
    }
}
