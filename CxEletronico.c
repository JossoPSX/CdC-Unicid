#include <stdio.h>

int main(){
    // saldo inicial é de 1000 reais
    int saldo = 1000;
    // declaração das demais variáveis
    int valor, resto, n_duzentos, n_cem, n_cinq, n_vinte, n_dez, n_cinco;
    // solicita que o usuário informe um valor de saque
    printf("\nDigite o valor do saque: R$ ");
    // campo onde permite a digitação
    scanf("%d", &valor);
    // Se o valor dividido por 5 tiver o resto zero e o valor digitado for menor ou igual ao saldo
if(valor % 5 == 0 && valor <= saldo){
    // cascateando o cálculo, bate as notas de 200, 100, 50, pegando o resto de cada conta para distribuir em notas restantes
    int n_duzentos = valor / 200;
    int resto = valor % 200;
    int n_cem = resto / 100;
    resto = resto % 100;
    int n_cinq = resto / 50;
    resto = resto % 50;
    int n_vinte = resto / 20;
    resto = resto % 20;
    int n_dez = resto / 10;
    resto = resto % 10;
    int n_cinco = resto / 5;
    resto = resto % 5;

    // contagem de notas
    printf("\n-NOTAS ENTREGUES-");
    printf("\nNotas de 200: %d", n_duzentos);
    printf("\nNotas de 100: %d", n_cem);
    printf("\nNotas de 50: %d", n_cinq);
    printf("\nNotas de 20: %d", n_vinte);
    printf("\nNotas de 10: %d", n_dez);
    printf("\nNotas de 5: %d", n_cinco);
}
    // se o usuário digitar errado, essa mensagem de erro sobe
else{
    printf("\nINSIRA UM NÚMERO VÁLIDO! Ele deverá ser múltiplo de 5");
    return 0;
    }
}