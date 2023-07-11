#ifndef STOCK_H
#define STOCK_H

typedef struct {
    char nombre[100];
    char codigo[10];
    char definicion[200];
    int cantidad;
    float precio;
} Medicina;

void revisarStock();
void pedirMedicina();
void buscarMedicina();

#endif
