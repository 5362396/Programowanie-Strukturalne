#include<stdio.h>
void zlicz(){
static float liczba=0.5;
liczba=1-liczba*liczba;
printf(" %f\n",liczba);
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
