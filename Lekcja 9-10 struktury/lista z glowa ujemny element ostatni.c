#include <stdio.h>
#include <stdlib.h>

struct  element
{
    float t;
    struct element *next;
};

struct element *nulowy(struct element *lista)
{
    struct element *wsk=lista;
    struct element *wynik=NULL;
    while(wsk->next!=NULL)
    {
        if(wsk->t<0.0)
        {
            wynik=wsk;
        }
        wsk=wsk->next;
    }
}
void ddl(struct element *lista,float wartosc)
{
 struct element *wsk=lista;
 while (wsk->next!=NULL)
 {
    wsk=wsk->next;
 }
 struct element *nowy;
 nowy=malloc(sizeof(struct element));
 nowy->t=wartosc;
 nowy->next=NULL;
 wsk->next=nowy;

}
int main()
{
    struct element *lista;
    lista=malloc(sizeof(struct element));
    lista->next=NULL;
    ddl(lista,2.3);
    ddl(lista,2.3);
    ddl(lista,2.1);
    ddl(lista,2.0);
    if(nulowy(lista)==NULL)
    {
        printf("nie ma elementow mniejszych od 0");
    }
    else
    {
        struct element *wsk;
        wsk=nulowy(lista);
        printf("wartosc wynosi %f",wsk->t);
    }

    return 0;
}
