
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<ctype.h>
#include<string.h>

///cw 7_2_1
struct trojkat{
double a,b,c;
};

double obwod(struct trojkat t){
return t.a+t.b+t.c;
}


///cw 7_2_2
void przepisz(struct trojkat t1, struct trojkat *t2){
    *t2=t1;
}

///cw 7_2_3
struct punkt{ /// jak obliczyc odleglosc miedzy punktami (1,3,5), (4,2,9). sqrt((1-4)^2+(3-2)^2+(5-9)^2)=sqrt(9+1+16)=sqrt(26) = 5,1.
double x,y,z; ///(x,y,z), ...
};
///co powinien zwrocic program z zadania 7_2_3 dla (4,7,1), (2,2,8), (5,6,0)  -> sqrt(78) , sqrt(77) , sqrt(3).  WYNIK sqrt(3).

double minimum(struct punkt tab[], int n){
int i,j;
double pom;
double min=sqrt(pow(tab[1].x-tab[0].x,2)
                +pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        pom=sqrt(pow(tab[j].x-tab[i].x,2)
                +pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
    }
    if(pom<min)
    {
        min=pom;
    }
}
return min;
}

///cw 7_2_10
union super_int{
int i;
unsigned int u;
};

///Listy bez glowy
/// cw 7_3_1
struct element{
int i;                              /// [ liczba calkowita ktora przechowujemy ;   adres nastepnego elementu ] ----> [int, adres nastepnej] -->
struct element *next;
};

struct element *utworz(){
return NULL;
};

///cw 7_3_2
void wyczysc(struct element* Lista){
struct element *wsk=Lista;
while(Lista!=NULL){
    Lista=Lista->next;
    free(wsk);
    wsk=Lista;
}
}

///cw 7_3_3
struct element * dodajnapoczatek(struct element* Lista, int a){
struct element *wsk=malloc(sizeof(struct element));
wsk->i=a;
wsk->next=Lista;
return wsk;
}

///cw 7_3_4
struct element *dodajnakoniec(struct element * Lista, int a){
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
}

///cw 7_3_5
struct element * dodajodpowiednio(struct element* Lista,
                                struct element* elem, int a){
struct element *wsk=malloc(sizeof(struct element));
wsk->i=a;
if(elem==NULL)
    {
wsk->next=Lista;
Lista=wsk;
}
else
{
    wsk->next=elem->next;
    elem->next=wsk;
}
return Lista;
}

///cw 7_3_6
struct element * znajdz(struct element * Lista, int a){
while((Lista!=NULL)&&(Lista->i!=a))
{
    Lista=Lista->next;
}
return Lista;
}

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

///cw 7_3_8
struct element *usunwybrany(struct element* Lista,
                            struct element *elem){
struct element *wsk,*wsk2;
if(Lista==NULL)
{
    return Lista;
}
wsk=Lista;
                       if(Lista==elem){
                        Lista=Lista->next;
                        free(wsk);
                        return Lista;
                       }
                    while((wsk->next!=NULL)&&(wsk->next!=elem))
                        wsk=wsk->next;
                    if(wsk->next!=NULL)
                    {
                        wsk2=wsk->next;
                        wsk->next=wsk2->next;
                        free(wsk2);
                    }
                    return Lista;
                            };

///cw 7_3_9
struct element *usunwybrany2(struct element* Lista,
                            struct element *elem){
struct element *wsk;
if(Lista==NULL)
{
    return Lista;
}
                       if(Lista==elem){
                            wsk=Lista;
                        Lista=Lista->next;
                       }
                       else if(elem->next==NULL)
                    {
                        return Lista;
                    }
                    else
                    {
                        wsk=elem->next;
                        elem->next=wsk->next;
                    }
                    free(wsk);
                    return Lista;
                            }

///Listy z glowa
/// cw 7_3_10

struct element *utworzzglowa(){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
return wsk;
}

///cw 7_3_11
void wyczysczglowa(struct element* Lista){
struct element *wsk=Lista->next;
Lista=wsk;
while(Lista!=NULL){
    Lista=Lista->next;
    free(wsk);
    wsk=Lista;
}
}

///cw 7_3_12
void dodajnapoczatekzglowa(struct element *Lista,int a){
struct element *wsk=malloc(sizeof(struct element));
wsk->i=a;
wsk->next=Lista->next;
Lista->next=wsk;
}

///cw 7_3_13
void dodajnakonieczglowa(struct element *Lista,int a){
struct element *wsk=Lista;
while(wsk->next!=NULL)
{
    wsk=wsk->next;
}
wsk->next=malloc(sizeof(struct element));
wsk=wsk->next;
wsk->i=a;
wsk->next=NULL;
}

///cw 7_3_17
void usun_z_glowa(struct element * Lista, int a){
struct element * wsk;
while((Lista->next!=NULL && Lista->next->i!=a))
Lista=Lista->next;
if(Lista->next!=NULL){
wsk=Lista->next;
Lista->next=wsk->next;
free(wsk);
}
}

///Pozostale zadania z list jednokierunkowych
///cw 7_3_20
///bezglowy
void zeruj(struct element * Lista){
while(Lista!=NULL){
 Lista->i=0;
 Lista=Lista->next;
}
}

///z glowa
void zerujzglowa(struct element *Lista){
while(Lista->next!=NULL){
 Lista=Lista->next;
 Lista->i=0;
}
}

///mozna tez modyfikujac algorytm bez glowy
void zerujzglowa2(struct element * Lista){
    Lista=Lista->next;
while(Lista!=NULL){
 Lista->i=0;
 Lista=Lista->next;
}
}

///cw 7_3_21
///bezglowy
void bezwzgledna(struct element * Lista){
while(Lista!=NULL){
 Lista->i=abs(Lista->i);
 Lista=Lista->next;
}
}


///cw 7_3_23
struct trojka{
unsigned int a,b,c;
struct trojka * next;
};

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

///wersja bez glowy
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

///z glowa
void pitagoraszglowa(struct trojka * Lista){
struct trojka* pom;
while(Lista->next!=NULL){
    if(czyspelnia(Lista->next))
    {
        Lista=Lista->next;
    }
    else
    {
        pom=Lista->next;
        Lista->next=pom->next;
        free(pom);
    }
}
}

///cw 7_3_24
int suma(struct element *Lista){
int sum=0;
while(Lista!=NULL){
    sum=sum+Lista->i;
    Lista=Lista->next;
}
return sum;
}

int sumazglowa(struct element * Lista){
int sum=0;
Lista=Lista->next;
while(Lista!=NULL){
    sum=sum+Lista->i;
    Lista=Lista->next;
}
}

///cw 7_3_25
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

int minimumzglowa(struct element * Lista){
int min=Lista->next->i;
while(Lista!=NULL){
        Lista=Lista->next;
    if(Lista->i<min)
    {
        min=Lista->i;
    }
}
return min;
}

///wypisz
void wypisz(struct element * Lista){
while(Lista!=NULL){
            printf("%d\n",Lista->i);
    Lista=Lista->next;
}
printf("\n");
}

///funkcje dla listy zawierajacej trojki
///wypisz trojki
void wypisztrojki(struct trojka * Lista){
while(Lista!=NULL){
            printf("%d",Lista->a);
            printf("%d",Lista->b);
            printf("%d",Lista->c);
    Lista=Lista->next;
    printf("\n");
}
}

struct trojka *utworztrojke(){
return NULL;
};

struct trojka *dodajnakoniectrojki(struct trojka * Lista, unsigned int x,unsigned int y,unsigned int z){
struct trojka *wsk;
if(Lista==NULL)
{
    Lista=wsk=malloc(sizeof(struct trojka));
}
else
{
    wsk=Lista;
while(wsk->next!=NULL)
{
    wsk=wsk->next;
}
wsk->next=malloc(sizeof(struct trojka));
wsk=wsk->next;
}
wsk->a=x;
wsk->b=y;
wsk->c=z;
wsk->next=NULL;
return Lista;
}


int main(){

///deklaracja i wprowadzenie elementow
///cw 7_3_1
    struct element * lista=utworz();
    /// cw 7_3_4
    lista=dodajnakoniec(lista,4);
    wypisz(lista);
    lista=dodajnakoniec(lista,15);
    wypisz(lista);
    lista=dodajnakoniec(lista,3);
    wypisz(lista);
     lista=dodajnakoniec(lista,-7);
     wypisz(lista);
    lista=dodajnakoniec(lista,9);
    wypisz(lista);
    lista=dodajnakoniec(lista,-2);
    wypisz(lista);
    /// cw 7_3_3
    lista=dodajnapoczatek(lista,6);
    wypisz(lista);
    ///cw 7_3_7
    lista=usun(lista,3);
    wypisz(lista);
    ///cw 7_3_21
    bezwzgledna(lista);
    wypisz(lista);
    ///cw 7_3_24
    printf("%d\n\n",suma(lista));
    ///cw 7_3_6
    printf("%p\n",znajdz(lista,15));
    ///cw 7_3_8
    usunwybrany(lista,znajdz(lista,15));
    wypisz(lista);
     ///cw 7_3_9
    usunwybrany2(lista,znajdz(lista,7));
    wypisz(lista);
    ///cw 7_3_20
    zeruj(lista);
    wypisz(lista);
///jak dzialac na listach ,,niestandardowych" np. zawierajacych trojki
    struct trojka* listatrojek= utworztrojke();
dodajnakoniectrojki(listatrojek,1,2,3);
dodajnakoniectrojki(listatrojek,4,3,5);
dodajnakoniectrojki(listatrojek,4,3,2);
wypisztrojki(listatrojek);
return 0;
}


