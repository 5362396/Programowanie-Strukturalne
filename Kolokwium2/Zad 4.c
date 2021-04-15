#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element *next;
};

struct element * utworz()
{
    return NULL;
};

struct element* dodajk(struct element * Lista, int a){
    struct element *wsk;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
};

void wypisz(struct element* lista){
    while(lista!=NULL)
    {
        printf("%d\n",lista->i);
        lista=lista->next;
    }
    printf("\n");
}

//podpunkt a
void wypiszwskazniki(struct element* lista){
    while(lista!=NULL)
    {
        printf("%p\n",lista);
        lista=lista->next;
    }
    printf("\n");
}

//podpunkt b
int suma(struct element * lista){
    int sum=0;
    lista=lista->next;
    while(lista!=NULL){
        sum=sum+lista->i;
        lista=lista->next;
    }
    return sum;
}

//podpunkt c
int maximum(struct element * lista)
{
    int wynik=lista->i;
    while(lista!=NULL)
    {
        if(lista->i>wynik)
        {
            wynik=lista->i;
        }
        lista=lista->next;
    }
    return wynik;
}


int main()
{
    struct element* lista = utworz();

    lista = dodajk(lista,NULL);
    lista = dodajk(lista,5);
    lista = dodajk(lista,2);
    lista = dodajk(lista,7);
    wypiszwskazniki(lista);
    printf("%d\n", suma(lista));
    printf("%d\n", maximum(lista));
}
