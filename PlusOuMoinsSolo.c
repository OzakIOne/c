#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int nombreMystere = 0, nombreTrouve = 0;
  const int MAX = 100, MIN = 1;
  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  printf("Choisit un chiffre\n");
  while (nombreMystere != nombreTrouve) {
    scanf("%d", &nombreTrouve);
    getchar();
    if (nombreTrouve < nombreMystere)
      printf("Ton chiffre est trop petit\n");
    else if (nombreTrouve > nombreMystere)
      printf("Ton chiffre est trop grand\n");
  }
  printf("Bravo.");
  getchar();
  return 0;
}
