#include <stdio.h>
#include <stdlib.h>
#include "Login.h"
#include "stock.h"

int main() {
    int sesion, opciones;

    sesion = login();

    if (sesion == 1) {
        printf("Se ha iniciado la sesion."); 
        do {
            printf("Escoja alguna de las opciones:\n");
            printf("1) Revisar stock\n");
            printf("2) Despacho de medicina\n");
            printf("3) Pedir medicinas\n");
            printf("4) Cerrar sesion\n");
            scanf("%d", &opciones);

            switch (opciones) {
                case 1:
                    printf("Se va a revisar el stock:\n");
                    revisarStock();
                    break;

                case 2:
                    printf("Se va despachara las medicinas pedidas:\n");
                    buscarMedicina();
                    break;

                case 3:
                    printf("Se va a pedir las medicinas solicitadas:\n");
                    pedirMedicina();
                    break;

                case 4:
                    printf("Se va a cerrar la sesion. Gracias por usar esta aplicacion.\n");
                    break;

                default:
                    printf("Escoja una de las opciones por favor.\n");
                    break;
            }
        } while (opciones != 4);

    } else {
        printf("Demasiados errores. Intentelo mas tarde.\n");
    }

    return 0;
}

