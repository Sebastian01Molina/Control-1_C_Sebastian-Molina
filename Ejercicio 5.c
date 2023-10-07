#include <stdio.h>
#include <string.h>

int Palindromo(char palabra[]) {
    int longitud = strlen(palabra);
    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    if (Palindromo(palabra)) {
        printf("%s es una palabra palindromo.\n", palabra);
    } else {
        printf("%s no es una palabra palindromo.\n", palabra);
    }

    return 0;
}