#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

struct element{
    int i;
    struct element *next;
};

struct element * utworz()
{
    return NULL;
};

struct element * dodajnapoczatek(struct element* Lista, int a){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
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

struct element * usun(struct element * Lista, int a){
    struct element *wsk,*wsk2;
    if(Lista==NULL)
    {
        return Lista;
    }
    wsk=Lista;
    if(Lista->i==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL)&&(wsk->next->i!=a))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
        return Lista;
    }
}

void wypisz(struct element* lista){
    while(lista!=NULL)
    {
        printf("%d\n",lista->i);
        lista=lista->next;
    }
    printf("\n");
}

int main()
{
    struct element* lista = utworz();

    lista = dodajk(lista,2);
    wypisz(lista);
    lista = dodajk(lista,4);
    wypisz(lista);
    lista = dodajk(lista,-4);
    wypisz(lista);
    lista=dodajnapoczatek(lista,4);
    wypisz(lista);
    lista=usun(lista,2);
    wypisz(lista);
    return 0;
}
