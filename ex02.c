#include <stdio.h>
#include <ctype.h>  

// Função para contar ocorrências de 'a' ou 'A' na string
int contarOcorrenciasA(char string[]) {
    int contagem = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == 'a') {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    // String definida diretamente no código
    char string[] = "A raposa rápida salta sobre o cachorro preguiçoso.";

    printf("String analisada: %s\n", string);

    // Chama a função para contar as ocorrências
    int ocorrencias = contarOcorrenciasA(string);

    // Verifica e imprime o resultado
    if (ocorrencias > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) ocorre %d vezes na string.\n", ocorrencias);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
