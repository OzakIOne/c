#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int continuerPartie = 1;
  do {
    int nombreMystere = 0, nombreTrouve = 0, tentative = 0, = 0;

    printf(" == Quel niveau de difficulte veux tu ? ==\n1. Facile,    de 1 a "
           "100\n2. Moyen,     de 1 a 1000\n3. Difficile, de 1 a 10000\n");
    scanf("%d", &difficulteEntree);
    while (difficulteEntree < 1 || difficulteEntree > 3) {
      printf("Veuillez entrer une difficulte existante\n");
      scanf("%d", &difficulteEntree);
    }
    printf("Vous avez choisit la difficulte %d\n", difficulteEntree);

    int MAX = 10 * pow(10, difficulteEntree), MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Choisit un chiffre\n");
    while (nombreMystere != nombreTrouve) {
      tentative++;
      scanf("%d", &nombreTrouve);
      if (nombreTrouve < nombreMystere)
        printf("Ton chiffre est trop petit\n");
      else if (nombreTrouve > nombreMystere)
        printf("Ton chiffre est trop grand\n");
    }
    printf("Bravo, tu as trouver le chiffre en %d tentatives.\n\nVeut tu "
           "continuer la partie ?\n==0 Pour non==\n==1 Pour oui==\n",
           tentative);
    scanf("%d", &continuerPartie);
    system("CLS");
  } while (continuerPartie == 1);
  return 0;
}