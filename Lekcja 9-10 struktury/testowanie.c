#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* dodajk(struct element*Lista, int a)
{
    struct element * wsk ;
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

///cw 7_3_7
struct element * usun(struct element * Lista, int a){
    struct element *wsk,*wsk2;
    if (Lista==NULL)
    {
        return Lista;
    }
    wsk=Lista;
    if(Lista->i==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else{
while((wsk->next!=NULL)&&(wsk->next->i!=a))
      {
          wsk=wsk->next;
      }
      if(wsk->next!=NULL){
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
      }
return Lista;
}
}

///cw 7_3_3
struct element * dodajnapoczatek(struct element* Lista, int a){
struct element *wsk=malloc(sizeof(struct element));
wsk->i=a;
wsk->next=Lista;
return wsk;
}

struct element * utworz()
{
    return NULL;
};

void wypisz(struct element* lista){
    while(lista!=NULL)
    {
        printf("%d\n",lista->i);
        lista=lista->next;
    }
    printf("\n");
}

void zeruj(struct element * Lista){
while(Lista!=NULL){
 Lista->i=0;
 Lista=Lista->next;
}
}

int suma(struct element *Lista){
int sum=0;
while(Lista!=NULL){
    sum=sum+Lista->i;
    Lista=Lista->next;
}
return sum;
}

int minimumbezglowy(struct element * Lista){
int min=Lista->i;
while(Lista!=NULL){
    if(Lista->i<min)
    {
        min=Lista->i;
    }
    Lista=Lista->next;
}
return min;
}

int main()
{
    struct element* lista = utworz();

    lista = dodajk(lista,7);
    wypisz(lista);
    lista = dodajk(lista,8);
    wypisz(lista);
    lista = dodajk(lista,1);
    wypisz(lista);
    lista=dodajnapoczatek(lista,4);
    wypisz(lista);
    lista=usun(lista,8);
      wypisz(lista);
      printf("%d\n",suma(lista));
      printf("%d\n",minimumbezglowy(lista));
      zeruj(lista);
      wypisz(lista);
    //pêtla na sprawdzenie elementów na liœcie
    return 0;
}
