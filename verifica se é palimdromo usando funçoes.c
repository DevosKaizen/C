#include <stdio.h>
#include <string.h>

// Fun��o para contar letras em uma string
int contarLetras(const char *str) {
    int letras = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letras++;
        }
    }
    return letras;
}

// Fun��o para verificar se uma string � um pal�ndromo
int ePalindromo(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // N�o � um pal�ndromo
        }
        i++;
        j--;
    }
    return 1; // � um pal�ndromo
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("A string digitada �: %s\n", str);

    int letras = contarLetras(str);
    printf("A quantidade de letras na string �: %d\n", letras);

    if (ePalindromo(str)) {
        printf("A string � um pal�ndromo.\n");
    } else {
        printf("A string n�o � um pal�ndromo.\n");
    }

    return 0;
}

