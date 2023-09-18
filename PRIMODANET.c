#include <stdio.h>

int main() {
    int numero;
    int ePrimo = 1; // Assumimos que o número é primo por padrão
    int i;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        ePrimo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        // Percorre os números de 2 até o número - 1
        for ( i = 2; i < numero; i++) {
            // Se o número for divisível por algum desses números, não é primo
            if (numero % i == 0) {
                ePrimo = 0;
                break; // Saímos do loop, pois já sabemos que não é primo
            }
        }
    }

    // Verifica se o número é primo ou não e imprime o resultado
    if (ePrimo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}

