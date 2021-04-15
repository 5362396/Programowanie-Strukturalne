#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element * next;
};


struct element *utworz()
{
    return NULL;
};

struct element * dodajnapoczatek(struct element* lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->x=a;
    wsk->next=lista;
    return wsk;
}

int minimum(struct element* lista)
{
    int min=lista->x;
    while(lista!=NULL)
    {
        if(lista->x<min)
        {
            min=lista->x;
        }
        lista=lista->next;
    }
    return min;
}

int porownaj(struct element *p, struct element *q)
{
    if(minimum(p)==minimum(q))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct element * lista=utworz();
    lista = dodajnapoczatek(lista,6);
    lista = dodajnapoczatek(lista,5);
    lista = dodajnapoczatek(lista,4);
    lista = dodajnapoczatek(lista,3);
    lista = dodajnapoczatek(lista,8);

    struct element * lista2=utworz();
    lista2 = dodajnapoczatek(lista2,6);
    lista2 = dodajnapoczatek(lista2,9);
    lista2 = dodajnapoczatek(lista2,4);
    lista2 = dodajnapoczatek(lista2,7);
    lista2 = dodajnapoczatek(lista2,3);

    printf("%d", porownaj(lista,lista2));
    return 0;
}
