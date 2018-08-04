#include <stdio.h>
#include <stdlib.h>

/*
    Un negocio vende distintos artículos identificados por un código, según se muestra:

    código 1; 10 ; 100 : l0 pesos la unidad
    código 2; 22; 222 : 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
    código 3; 33 : 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del 10% sobre el total de la compra.
    código 4 ;44 : 1 peso la unidad.


Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se informe el importe de la compra, con las siguientes leyendas :


ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
*/

int main()
{
    int codigo_articulo;
    int cantidad;
    float importe_a_pagar;
    printf("Ingrese codigo de articulo: ");
    scanf("%d", &codigo_articulo);
    printf("Ingrese cantidad: ");
    scanf("%d", &cantidad);

    switch(codigo_articulo) {
        case 1:
        case 10:
        case 100:
            {
                importe_a_pagar = 10 * cantidad;
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %.2f\n", codigo_articulo, cantidad, importe_a_pagar);
                break;
            }
        case 2:
        case 22:
        case 222:
            {
                 // Calculo la cantidad de cajas que tengo
                int cantidad_de_cajas = cantidad / 10;
                // Me quedo con el resto que no entre en cajas
                cantidad = cantidad % 10;
                importe_a_pagar = cantidad * 7 + cantidad_de_cajas * 65;
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %.2f\n", codigo_articulo, cantidad, importe_a_pagar);
                break;
            }

        case 3:
        case 33:
            {
                importe_a_pagar = 3 * cantidad;
                if ( cantidad > 10 ) {
                    importe_a_pagar *= 0.90;
                }
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %.2f\n", codigo_articulo, cantidad, importe_a_pagar);
                break;
            }
        case 4:
        case 44:
            {
                importe_a_pagar = cantidad;
                printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %.2f\n", codigo_articulo, cantidad, importe_a_pagar);
                break;
            }
        default:
            printf("El articulo %d no es valido\n", codigo_articulo);

    }

    return 0;
}
