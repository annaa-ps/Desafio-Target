/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/
#include <stdio.h>

// Função para calcular a sequência de Fibonacci até um certo limite
void calcularFibonacci(int limite, int fibonacci[], int *tamanho) {
    int a = 0, b = 1, c;
    fibonacci[0] = a;
    fibonacci[1] = b;
    *tamanho = 2;

    while (1) {
        c = a + b;
        if (c > limite) {
            break;
        }
        fibonacci[*tamanho] = c;
        (*tamanho)++;
        a = b;
        b = c;
    }
}

// Função para verificar se o número pertence à sequência de Fibonacci
int pertenceFibonacci(int num, int fibonacci[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (fibonacci[i] == num) {
            return 1;  // O número pertence à sequência
        }
    }
    return 0;  // O número não pertence à sequência
}

int main() {
    int opcao, numero, tamanho;
    int fibonacci[100]; // Armazenará a sequência de Fibonacci

    do {
        printf("\n-------------------MENU DE OPCOES-------------------\n");
        printf("[1] - Calcular sequência de Fibonacci\n");
        printf("[2] - Verificar se número pertence à sequência\n");
        printf("[3] - Sair\n");
        printf("----------------------------------------------------\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite um limite para calcular a sequência de Fibonacci: ");
                scanf("%d", &numero);

                calcularFibonacci(numero, fibonacci, &tamanho);

                printf("Sequência de Fibonacci até %d: ", numero);
                for (int i = 0; i < tamanho; i++) {
                    printf("%d ", fibonacci[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("\nDigite um número para verificar se pertence à sequência: ");
                scanf("%d", &numero);

                if (pertenceFibonacci(numero, fibonacci, tamanho)) {
                    printf("O número %d pertence à sequência de Fibonacci!\n", numero);
                } else {
                    printf("O número %d NÃO pertence à sequência de Fibonacci!\n", numero);
                }
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
