#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login() {
    char Usuario[100];
    int Contrasena, intentos = 0;

    printf("Coloque su usuario para ingresar:\n");
    scanf("%s", Usuario);
    printf("Coloque la contrasena:\n");
    scanf("%d", &Contrasena);

    do {
        if (strcmp(Usuario, "Pedro") == 0 && Contrasena == 6754) {
            printf("Usuario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1;
        } else if (strcmp(Usuario, "Juan") == 0 && Contrasena == 8523) {
            printf("Usuario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1;
        } else if (strcmp(Usuario, "Sofia") == 0 && Contrasena == 9288) {
            printf("Usuario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1;
        } else {
            printf("No es correcta la contrasena\n");
            intentos++;
        }
    } while (intentos < 3);

    return 0;
}