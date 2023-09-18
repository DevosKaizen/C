#include <stdio.h>

int main() {
    int numero;
	int i;
    // Solicita ao usuário que insira um número
    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);

    // Calcula e exibe a tabuada do numero de 1 a 10
    printf("Tabuada do %d:\n", numero);
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
