#include<stdio.h>
void zlicz(){
static int liczba=0;
liczba++;
printf("Funkcja zostala wywolana %d razy\n",liczba);
//printf("Funkcja zostala wywolana %d razy\n", liczba);
}
int main(){
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
zlicz();
}
