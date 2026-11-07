#include <stdio.h>
#include <stdlib.h>

// Função pra organizar em Bubble Sort
void bubbleSort(int v[], int n) {
    // Declaração de variáveis
    int i, j, temp;
    // Para 'i' igual à 0 e 'i' menor que 'n' menos 1, acrescente 1 em 'i'
    for (i = 0; i < n - 1; i++) {
        // Para 'j' igual à 0 e 'j' menor que 'n' menos 1, acrescente 1 em 'j'
        for (j = 0; j < n - i - 1; j++) {
            // Se o valor do vetor de j for maior que j mais 1
            if (v[j] > v[j + 1]) {
                // Troca os números de posição, ou seja, ordena
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Chamando procedimento principal
int main() {
    // Declaração de variáveis
    int n, i;

    // Solicita a quantidade de números:
    printf("Quantidade de numeros a serem ordenados: ");
        // Se a quantidade de números não for diferente de 1 ou for igual ou menor à 1, retorna erro
        if (scanf("%d", &n) != 1 || n <= 1) {
            printf("Quantidade invalida! So numeros, por gentileza. O programa sera encerrado.\n");
        return 1;
    }

    // Alocação dinâmica de memória para armazenar os números
    // Nesse caso, significa que não ficamos limitados a um número exato no vetor, por exemplo, v[50] ou v[100]
    int *numeros = (int *)malloc(n * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memoria!\n");
    return 1;
    }

    // Leitura dos números:
    printf("\nDigite os %d numeros:\n", n);
        for (i = 0; i < n; i++) {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
    }

    // Gravação no primeiro arquivo de texto - "dados.txt":
    // W = Write
    FILE *dados = fopen("dados.txt", "w");
    if (dados == NULL) {
        printf("Erro ao criar o arquivo dados.txt!\n");
            // Quando malloc é usado pra alocação dinâmica, esse código faz o reverso, desaloca
            free(numeros);
    return 1;
    }
    for (i = 0; i < n; i++) {
        fprintf(dados, "%d\n", numeros[i]);
    }
        fclose(dados);
        printf("\nArquivo 'dados.txt' criado com sucesso!\n");

    // Chamando a função do ordenador
    bubbleSort(numeros, n);

    // Gravação no segundo arquivo de texto - "ordenado.txt"
    FILE *ordenado = fopen("ordenado.txt", "w");
    if (ordenado == NULL) {
        printf("Erro ao criar o arquivo ordenado.txt!\n");
        // Novamente, quando malloc é usado pra alocação dinâmica, esse código faz o reverso, desaloca
        free(numeros);
        return 1;
    }
    for (i = 0; i < n; i++) {
        fprintf(ordenado, "%d\n", numeros[i]);
    }
    fclose(ordenado);
    printf("Arquivo 'ordenado.txt' criado com sucesso!\n");

    return 0;
}

