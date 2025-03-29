#include <stdio.h>

void sortAscending(int vetor[], size_t tam) {
  int temp;
  char sorted = 0;

  while(!sorted) {
    sorted = 1;
    for(int i = 1; i < tam; i++) {
      if(vetor[i-1] > vetor[i]) {
        temp         = vetor[i];
        vetor[i]     = vetor[i - 1];
        vetor[i - 1] = temp;
        sorted = 0;
      }
    }
  }

  for(int i = 0; i < tam; i++) {
    printf("%d", vetor[i]);
  }
}

void sortDescending(int vetor[], size_t tam) {
  int temp;
  char sorted = 0;

  while(!sorted) {
    sorted = 1;
    for(int i = 1; i < tam; i++) {
      if(vetor[i-1] < vetor[i]) {
        temp         = vetor[i];
        vetor[i]     = vetor[i - 1];
        vetor[i - 1] = temp;
        sorted = 0;
      }
    }
  }

  for(int i = 0; i < tam; i++) {
    printf("%d", vetor[i]);
  }
}

void sortMiddle(int vetor[], size_t tam) {
  int bigger = 0;
  int temp = 0;

  for(int i = 0; i < tam; i++) {
    if(vetor[i] > vetor[bigger]) {
      bigger = i;
    }
  }

  temp = vetor[bigger];

  vetor[bigger] = vetor[tam/2];
  vetor[tam/2] = temp;

  for(int i = 0; i < tam; i++) {
    printf("%d", vetor[i]);
  }
}

int main(void) {
  int n, a, b, c;

  printf("Digite o valor de 'n': ");
  scanf("%d", &n);

  printf("Digite o valor de 'a': ");
  scanf("%d", &a);

  printf("Digite o valor de 'b': ");
  scanf("%d", &b);

  printf("Digite o valor de 'c': ");
  scanf("%d", &c);

  int vetor[3] = {a, b, c};

  switch(n) {
    case 1: 
      sortAscending(vetor, 3);
      break;
    case 2:
      sortDescending(vetor, 3);
      break;
    case 3:
      sortMiddle(vetor, 3);
      break;
  }


  return 0;
}