#include <stdio.h>
#include <stdlib.h>

/*
Confeccionar un programa que :

    Solicite el ingreso de un valor entero N, <= 12 y luego una lista de N números reales.
    Calcule e informe :
        el promedio de los positivos
        el promedio de los negativos
        la cantidad de ceros.
    Si el valor ingresado N es mayor que 12 informar "VALOR EXCEDIDO" y FINALIZAR
*/

int main()
{
    int cantidad_de_iteraciones;
    printf("Ingrese un numero entero menor o igual a 12: ");
    scanf("%d", &cantidad_de_iteraciones);
    if(cantidad_de_iteraciones <= 12) {
        int i;
        float promedio_positivos = 0;
        float promedio_negativos = 0;
        int cantidad_de_ceros = 0;
        int cantidad_de_positivos = 0;
        int cantidad_de_negativos = 0;
        float numero_ingresado;
        for(i = 1; i <= cantidad_de_iteraciones; i++) {
            printf("Ingrese un numero: ");
            scanf("%f", &numero_ingresado);
            if(numero_ingresado > 0) {
                promedio_positivos += numero_ingresado;
                cantidad_de_positivos++;
            } else if(numero_ingresado < 0) {
                promedio_negativos += numero_ingresado;
                cantidad_de_negativos++;
            } else {
                cantidad_de_ceros++;
            }
            printf("Van %d de %d numeros\n", i, cantidad_de_iteraciones);
        }
            if(cantidad_de_positivos > 0) {
                promedio_positivos /= cantidad_de_positivos;
            }
            if(cantidad_de_negativos > 0){
                promedio_negativos /= cantidad_de_negativos;
            }
            printf("Promedio de numeros positivos: %.2f\n", promedio_positivos);
            printf("Promedio de numeros negativos: %.2f\n", promedio_negativos);
            printf("Cantidad de ceros: %d\n", cantidad_de_ceros);
    } else {
        printf("El numero ingresado es mayor a 12.");
    }
    return 0;
}
