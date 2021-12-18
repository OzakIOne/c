#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int nombre_cache = 0;
  int nombre_a_trouve = 0;
  printf("Joueur 1, choisit le nombre cache :D\n");
  scanf("%d", &nombre_cache);
  system("cls");
  while (nombre_a_trouve != nombre_cache) {
    scanf("%d", &nombre_a_trouve);
    if (nombre_a_trouve < nombre_cache) {
      printf("Le nombre a trouve est superieur au tiens\nEssaie encore!\n");
    } else if (nombre_a_trouve > nombre_cache) {
      printf("Le nombre a trouve est inferieur au tiens\nEssaie encore!\n");
    } else {
      printf("Bravo tu as trouve le nombre cache!\n");
    }
  }
  return 0;
}
