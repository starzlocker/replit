#include <stdio.h>

int main(void) {
  float a, l, c;

  printf("Digite a altura do retangulo: ");
  scanf("%f", &a);
  printf("Digite a largura do retangulo: ");
  scanf("%f", &l);
  printf("Digite o comprimento do retangulo: ");
  scanf("%f", &c);

  printf("A área do retangulo é %.2f", a * l * c);
  
  return 0;
}