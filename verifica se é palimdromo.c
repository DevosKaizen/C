#include <stdio.h>
#include <string.h>

int main() {
    // Declara um vetor de caracteres para armazenar a string
    char str[100];

    // Solicita ao usuario que insira a string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Le a string (incluindo espaços em branco)

    // Remove o caractere de nova linha '\n' lido pelo fgets
    str[strcspn(str, "\n")] = '\0';

    // Imprime a string
    printf("A string digitada e: %s\n", str);


    // Inicializa variaveis para contar letras e verificar se a um palindromo
    int letras = 0;
    int i, j;
    int palindromo = 1; // Assumimos que a um palindromo por padrao

    // Loop para contar letras e verificar se a um palandromo
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0; // Se encontrarmos um caractere diferente, nao a um palandromo
        }
        letras += 2; // Contamos duas letras (uma do inacio e outra do final)
    }

    // Se a string tem um namero ampar de caracteres, contamos o caractere do meio
    if (i == j) {
        letras++;
    }

    // Imprime a quantidade de letras na string
    printf("A quantidade de letras na string e: %d\n", letras);

    // Verifica se a string a um palandromo
    if (palindromo) {
        printf("A string e sim um palindromo.\n");
    } else {
        printf("A string nao e um palidromo.\n");
    }

    return 0;
}
