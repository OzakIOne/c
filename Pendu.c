#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define UPPERCASER 65

int main(int argc, char *argv[]) {
  char c = 0;
  char secretW[] = "NEOLECTRONITO";
  char tabFreq[26] = {0};
  char *Nstar = (char *)malloc(sizeof(char) * strlen(secretW));
  memset(Nstar, '*', strlen(secretW));

  for (unsigned int i = 0; i < strlen(secretW); i++)
    tabFreq[secretW[i] - UPPERCASER] += 1;
  // tabFreq[0]=1  tabFreq[1]=1  tabFreq[2]=1  tabFreq[3]=2  tabFreq[4]=0

  unsigned int Ntry = 10;
  while (Ntry > 0) {
    printf("You have %d try left\n", Ntry);
    printf("What is the secret word ? %s\n", Nstar);
    scanf(" %c", &c);
    c = toupper(c);

    if (tabFreq[c - UPPERCASER] == 0) {
      Ntry--;
    }

    for (short i = 0; i < strlen(secretW); i++) {
      if (secretW[i] == c)
        Nstar[i] = secretW[i];
    }

    if (strcmp(secretW, Nstar) == 0)
      break;

    if (Ntry == 0) {
      printf("you lose");
      return 0;
    }
  }

  printf("\n\tYou have found the word %s : ggwp ez", secretW);
  free(Nstar);
  return 0;
}