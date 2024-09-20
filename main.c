#include <stdio.h>
#include <string.h>
#include <math.h>
// Ingresar N números enteros y calcular y mostrar el promedio de los positivos
int main() {
    int i, n, entero, cont,acum =0;
    cont=0;
    float promedio;
    printf("Ingrese la cantidad de numeros a promediar\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Ingrese el entero %d",i);
        scanf("%d",&entero);
        if (entero > 0) {
            acum = acum + entero;
            cont = cont + 1;
        }


    }
    promedio = (float)acum/cont;
    printf("El promedio de los positivos es de  %.2f \n", promedio);


  return 0;
}


