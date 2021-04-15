#include <stdio.h>



int main(){
    int const dlugosc = 6;
    int tab1[6]={17,7,8,1,2,5};
    int tab2[6]={10,4,0,5,9,3};
    int tab3[6]={5,2,6,6,7,19};
    int tab4[6]={2,0,8,3,7,7};
    int pomoc[dlugosc];
    int pom=-1;
    int i,j;

    for(i=0;i!=6;i++){
        printf("%i ",tab1[i]);
    }
    printf("\n");
    for(i=0;i!=6;i++){
        printf("%i ",tab2[i]);
    }
    printf("\n");
    for(i=0;i!=6;i++){
        printf("%i ",tab3[i]);
    }
    printf("\n");
    for(i=0;i!=6;i++){
        printf("%i ",tab4[i]);
    }
    printf("\n\n");



    for(i=0;i!=dlugosc;i++){
        pomoc[0]=tab1[i];
        pomoc[1]=tab2[i];
        pomoc[2]=tab3[i];
        pomoc[3]=tab4[i];
        for(j=0;j!=dlugosc-1;j++){
            if(pomoc[j]<pomoc[j+1]){
                pom=pomoc[j];
                pomoc[j]=pomoc[j+1];
                pomoc[j+1]=pom;
                j=-1;
            }
            //printf("\npomoc: %i %i %i %i\n",pomoc[0],pomoc[1],pomoc[2],pomoc[3]);
        }
            tab1[i]=pomoc[0];
            tab2[i]=pomoc[1];
            tab3[i]=pomoc[2];
            tab4[i]=pomoc[3];
        }




    for(i=0;i!=dlugosc;i++){
        printf("%i ",tab1[i]);
    }
    printf("\n");
    for(i=0;i!=dlugosc;i++){
        printf("%i ",tab2[i]);
    }
    printf("\n");
    for(i=0;i!=dlugosc;i++){
        printf("%i ",tab3[i]);
    }
    printf("\n");
    for(i=0;i!=dlugosc;i++){
        printf("%i ",tab4[i]);
    }



    return 0;
}
