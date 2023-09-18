#include <stdio.h>

int main() {
    int numero;
    int ePrimo = 1; // Assumimos que o n�mero � primo por padr�o
    int i;

    // Solicita ao usu�rio que insira um n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � menor ou igual a 1
    if (numero <= 1) {
        ePrimo = 0; // N�meros menores ou iguais a 1 n�o s�o primos
    } else {
        // Percorre os n�meros de 2 at� o n�mero - 1
        for ( i = 2; i < numero; i++) {
            // Se o n�mero for divis�vel por algum desses n�meros, n�o � primo
            if (numero % i == 0) {
                ePrimo = 0;
                break; // Sa�mos do loop, pois j� sabemos que n�o � primo
            }
        }
    }

    // Verifica se o n�mero � primo ou n�o e imprime o resultado
    if (ePrimo) {
        printf("%d � um n�mero primo.\n", numero);
    } else {
        printf("%d n�o � um n�mero primo.\n", numero);
    }

    return 0;
}

