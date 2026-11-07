// Declarando bibliotecas
#include <stdio.h>
#include <string.h>

int main() {
  // Declarando variável de mensagem com mensagem pré programada
  char mensagem[] = "cifradocesinha";
  // Incremento - Que começa em zero
  int i = 0;
  // Quantidade de Shifts pré estabelecida
  int shift = 3;


  // Campo de título da cifra
  printf("***CIFRA DE CESAR - 3 SHIFTS***");
  // Campo que solicita a frase a ser usada
  printf("\n\nFrase: %s", &mensagem);
  // Campo que informa a quantidade de shifts:
  printf("\nSHIFT: %i", shift);
  // Campo que informa a sequência
  printf("\nSequência: Fibonacci");
  // Campo que informa a frase após Shift
  printf("\n\nFrase codificada: ");
  // Para i menor que comprimento de mensagem, faça i++
  // Strlen = String Length = Comprimento de mensagem
  for ( i = 0; i < strlen(mensagem); i++)
    printf("%c", (mensagem[i] + shift));
  // Quantidade de Shifts
    printf(" | SHIFT: %i", shift);
  // Tipo
    printf(" | Tipo: %i", shift);
  // Quantidade de letras
    printf(" | Letras: %i", strlen(mensagem));

  return 0;
}