#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///cw 7_3_23
struct trojka{
unsigned int a,b,c;
struct trojka * next;
};

void wypisztrojke(struct trojka* lista){
    while(lista!=NULL)
    {
        printf("%d\t %d\t %d",lista->a,lista->b,lista->c);
        lista=lista->next;
            printf("\n");
    }
    printf("\n");
}

struct trojka * utworz()
{
    return NULL;
};

struct trojka * dodajtrojke(struct trojka* Lista, int x, int y, int z){
struct trojka *wsk=malloc(sizeof(struct trojka));
wsk->a=x;
wsk->b=y;
wsk->c=z;
wsk->next=Lista;
return wsk;
}

bool czyspelnia(struct trojka *e){
if(e->a*e->a+e->b*e->b==e->c*e->c)
{
    return true;
}
else
{
    return false;
}
}

struct trojka * pitagoras(struct trojka*Lista){
struct trojka * pom,*pom2;
while((Lista!=NULL)&&(!czyspelnia(Lista))){
    pom=Lista;
    Lista=Lista->next;
    free(pom);
}
if(Lista==NULL)
{
    return NULL;
}
pom=Lista;
while(pom->next!=NULL){
    if(czyspelnia(pom->next))
    {
        pom=pom->next;
    }
    else
    {
        pom2=pom->next;
        pom->next=pom2->next;
        free(pom2);
    }
}
return Lista;
}

int main()
{
    struct trojka* lista = utworz();


    lista=dodajtrojke(lista,4,8,10);
    wypisztrojke(lista);
    lista = dodajtrojke(lista,5,12,13);
    wypisztrojke(lista);
    lista = dodajtrojke(lista,5,6,7);
    wypisztrojke(lista);
      lista = dodajtrojke(lista,3,4,6);
    wypisztrojke(lista);
      lista=dodajtrojke(lista,3,4,5);
    wypisztrojke(lista);
    pitagoras(lista);
    wypisztrojke(lista);
    return 0;
}
