//Desarrollar un programa que lea los valores de los catetos de un triángulo rectángulo y
//calcule cuál es la hipotenusa, el área y el perímetro del triángulo.
#include <stdio.h>
#include <math.h>
int main(){
    int c1, c2;
    printf("Ingrese un valor del cateto 1: ");
    scanf("%d", &c1);
    printf("Ingrese un valor del cateto 2: ");
    scanf("%d", &c2);

    if (c1>=0 && c2>=0){
        float h= sqrt(pow(c1, 2) + pow(c2, 2));
        float area = (c1*c2)/2;
        float perimetro = h+c1+c2;
        printf("Hipotenusa: %.2f\n", h);
        printf("area: %.2f\n", area);
        printf("perimetro: %.2f\n", perimetro);
    }
    else {
        printf("Los valores de los catetos no son validos");
        return 1;
    }
    return 0;
}