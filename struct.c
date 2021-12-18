#include <stdio.h>
#include <stdlib.h>

struct contact {
  char name[30];
  char surname[30];
};

void enter() {
  int pplnumber = 0;
  printf("How many people do you want ?\n");
  scanf("%d", &pplnumber);

  struct contact someone[pplnumber];

  for (int i = 0; i < pplnumber; ++i) {
    printf("Whats your name %d? : ", i + 1);
    scanf("%s", &(someone[i].name));
    printf("whats your surname %d? : ", i + 1);
    scanf("%s", &(someone[i].surname));
    printf("\n");
  }

  for (int i = 0; i < pplnumber; ++i)
    printf("%d --- name : %s surname : %s\n", i + 1, someone[i].name,
           someone[i].surname);
}

int main() {
  enter();
  return 0;
}