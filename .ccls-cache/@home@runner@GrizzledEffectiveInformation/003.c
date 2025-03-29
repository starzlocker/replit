#include <stdio.h>

int postoIpiranga(float qtd, char combustivel) {
  if(qtd <= 0) {
    printf("Valor inválido");
    return 0;
  }

  float gasolina = 5.39;
  float alcool   = 3.39;
  float preco, preco_final;

  if(combustivel == 'a') {
    if(qtd <= 20) {
      preco       = alcool * qtd;
      preco_final = preco * 0.97;
    } else {
      preco       = alcool * qtd;
      preco_final = preco * 0.95;
      // 5%
    }
  } else if (combustivel =='g') {
       if(qtd <= 20) {
         preco = gasolina * qtd;
         preco_final = preco * 0.96;
      // 4%
       } else {
         preco = gasolina * qtd;
         preco_final = preco * 0.94;
      // 6%
       }
  } else {
    printf("Combustível inválido");
    return 0;
  }
  printf("O cliente deve pagar R$%.2f", preco_final);
  return 1;
}

int main() {
  printf("teste");
  char combustivel;
  float qtd;

  printf("Qual o tipo de combustivel? a (alcool) / g (gasolina) ");
  scanf("%c", &combustivel);

  printf("Quantos litros? ");
  scanf("%f", &qtd);

  postoIpiranga(qtd, combustivel);

  return 0;
}