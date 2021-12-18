#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

int main() {
  int tabneo[5] = {1, 2, 3, 4, 5};
  int tabozak[5] = {0};
  int tabtri[6] = {40, 10, 100, 90, 20, 25};

  int somme = sommeTableau(tabneo, 5);
  printf("La somme de %d + %d + %d + %d + %d = %d\n", tabneo[0], tabneo[1],
         tabneo[2], tabneo[3], tabneo[4], somme);

  int moyenne = moyenneTableau(tabneo, 5);
  printf("La moyenne vaut : %d\n", moyenne);

  copie(tabneo, tabozak, 5);

  printf("Tableau neo     : ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", tabneo[i]);
  }
  printf("\nTableau ozak    : ");
  for (int j = 0; j < 5; j++) {
    printf("%d ", tabozak[j]);
  }

  maximumTableau(tabneo, 5, 2);
  printf("\nTableau neo max : ");
  for (int k = 0; k < 5; k++) {
    printf("%d ", tabneo[k]);
  }

  printf("\nTableau sorted  : ");
  ordonnerTableau(tabtri, 6);

  return 0;
}

int sommeTableau(int tableau[], int tailleTableau) {
  int somme = 0;
  for (int i = 0; i < tailleTableau; ++i)
    somme += tableau[i];
  return somme;
}

double moyenneTableau(int tableau[], int tailleTableau) {
  int moyenne = 0;

  for (int i = 0; i < tailleTableau; ++i)
    moyenne += tableau[i];
  moyenne = moyenne / tailleTableau;
  return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau) {
  for (int i = 0; i < tailleTableau; ++i)
    tableauCopie[i] = tableauOriginal[i];
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax) {
  for (int i = 0; i < tailleTableau; ++i) {
    if (tableau[i] > valeurMax)
      tableau[i] = tableau[i] = 0;
  }
}

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void ordonnerTableau(int tableau[], int tailleTableau) {
  int n;

  qsort(tableau, tailleTableau, sizeof(int), compare);

  for (int i = 0; i < tailleTableau; ++i)
    printf("%d ", tableau[i]);
}