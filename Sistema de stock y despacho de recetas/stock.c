#include <stdio.h>
#include <string.h>
#include "stock.h"

Medicina stock[10] = {
    {"Simvastatina", "Si627", "Para controlar el colesterol", 5, 4.00},
    {"Aspirina", "As389", "Casi para todo", 5, 12.00},
    {"Omeprazol", "Om820", "Para la acidez de estomago", 5, 2.80 },
    {"Lexotiroxina sodica", "Le019", "Para reemplazar la tiroxina", 5, 28.94 },
    {"Ramipril", "Ra203", "Para la hipertension", 5, 4.00},
    {"Amlodipina", "Am281", "Para la hipertension y la angina", 5, 2.12},
    {"Paracetamol", "Pa311", "Para aliviar el dolor", 5, 6.65},
    {"Atorvastatina", "At915", "Para controlar el colesterol", 5, 1.03},
    {"Salbutamol", "Sa672", "Para el asma", 5, 6.55},
    {"Lansoprazol", "La420", "Para controlar el acido del estomago", 5, 7.50}
};

void revisarStock() {
    printf("Medicinas disponibles en el stock:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nombre: %s, Codigo: %s, Cantidad: %d, Precio: $%.2f\n", stock[i].nombre, stock[i].codigo, stock[i].cantidad, stock[i].precio);
    }
}

void pedirMedicina() {
    char codigo[10];
    int cantidad;

    printf("Ingrese el codigo de la medicina que desea pedir: ");
    scanf("%s", codigo);

    printf("Ingrese la cantidad que desea pedir: ");
    scanf("%d", &cantidad);

    for (int i = 0; i < 10; i++) {
        if (strcmp(stock[i].codigo, codigo) == 0) {
            stock[i].cantidad += cantidad;
            printf("Se han agregado %d unidades de la medicina %s al stock.\n", cantidad, stock[i].nombre);
            return;
        }
    }

    printf("No se encontro la medicina con el codigo ingresado en el stock.\n");
}

void buscarMedicina() {
    char nombre[100];
    char codigo[10];

    printf("Ingrese el nombre de la medicina que desea buscar: ");
    scanf("%s", nombre);

    printf("Ingrese el codigo de la medicina que desea buscar: ");
    scanf("%s", codigo);

    for (int i = 0; i < 10; i++) {
        if (strcmp(stock[i].nombre, nombre) == 0 || strcmp(stock[i].codigo, codigo) == 0) {
            if (stock[i].cantidad > 0) {
                printf("Medicina encontrada\n");
                printf("Nombre: %s\n Codigo: %s\n Definicion: %s\n Precio: $%.2f\n ", stock[i].nombre, stock[i].codigo, stock[i].definicion,stock[i].precio);

                char confirmacion[3];
                printf("Desea retirar la medicina? (si/no): ");
                scanf("%s", confirmacion);

                if (strcmp(confirmacion, "si") == 0) {
                    stock[i].cantidad--;
                    printf("Se ha entregado la medicina.\n");
                } else {
                    printf("No se ha retirado la medicina.\n");
                }
            } else {
                printf("La medicina %s no está disponible en stock. Debe ser pedida mediante la opción 3.\n", stock[i].nombre);
            }
            return;
        }
    }

    printf("No se encontró la medicina con el nombre o código ingresado en el stock.\n");
}
