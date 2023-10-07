//Crear un programa que permita contar la cantidad de veces que se ingresan números pares
//y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se cuenta
#include <stdio.h>

int main() {
    int numero, 
    pares = 0,
    impares = 0;

    printf("Ingrese numeros,(ingrese un numero negativo para finalizar el programa):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0){
            break;
        }

        if (numero != 0) {
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    printf("Numeros Pares ingresados %d\n", pares);
    printf("Numeros Impares ingresados: %d\n", impares);

    return 0;
}

