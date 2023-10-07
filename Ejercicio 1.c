//Escribir un programa en el que se pregunte al usuario por una frase y una letra, donde
//muestre por pantalla el número de veces que aparece la letra en la frase.

#include <stdio.h>

int Contar_Letra(char frase[], char letra) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char frase[100];
    char letra;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    int cantidad = Contar_Letra(frase, letra);

    printf("La letra '%c' aparece %d veces en la frase.\n", letra, cantidad);

    return 0;
}

