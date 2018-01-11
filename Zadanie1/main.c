#include <stdio.h>
#include <stdlib.h>

int obliczP(int p, int x){ //x=2 p= 2 + 2
    int i, wynik=1;

     for(i = 0 ; i < p ; i++){
        wynik*=x;

     }
     return wynik;
}

int obliczS(int p){
  int i, wynik=1;
  for(i = 1 ; i < p + 1 ; i++){

    wynik*=i;

  }
  return wynik;
}

double obliczCosX(int potega, int x){

   double cosX = 1.0;
   int p = 2, wynikPotegowania, wynikSilni, liczbaPowtorzen=0;

   //wynikPotegowania = obliczP(p, x);
   //printf("\n%d", wynikPotegowania);

  // wynikSilni = obliczS(p);
  // printf("\n%d", wynikSilni);

   while(liczbaPowtorzen < potega){
   if(liczbaPowtorzen % 2 == 0){
        printf("\n pierwszy los rowny zero");

        wynikPotegowania = obliczP(p, x);
         wynikSilni = obliczS(p);

         cosX -=(double) wynikPotegowania/wynikSilni;
        liczbaPowtorzen++;
        p+=2;
        x=2;
   }else if(liczbaPowtorzen % 2 != 0){
        printf("\n drugi los nie rowny 0");

        wynikPotegowania = obliczP(p, x);
         wynikSilni = obliczS(p);

        cosX +=(double) wynikPotegowania/wynikSilni;
       liczbaPowtorzen++;
        p+=2;
        x=2;
   }

   }

  return cosX;
}

int main()
{

    int potega, x;
    double wynik;

    printf("Podaj  max potege - to jest n z zadania, widzialem podobne zadanie w ktorym to n ma byc 10, a ja zrobilem ze mozna podac jaka sie chce liczbe: ");
    scanf("%d", &potega);

    printf("Podaj x");
    scanf("%d", &x);

    wynik=(double)obliczCosX(potega, x);
    printf("\n%f", wynik);

    return 0;
}
