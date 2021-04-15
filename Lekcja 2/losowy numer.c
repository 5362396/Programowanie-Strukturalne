#include<stdio.h>
void zlicz(){
static float liczba=0.5;
liczba=1.0-liczba*liczba;
printf("Funkcja zostala wywolana %f razy\n",liczba);
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
}
