#include <stdio.h>
#include <stdlib.h>

int login (){
    char Usuario[100];
    int Contrasena, intentos = 0;


    do{
        printf("Coloque el su usuario para ingresar:\n");
        scanf("%s", &Usuario);
        printf("Coloque la contrasena\n");
        scanf("%d", &Contrasena);

        if (strcmp(Usuario, "Pedro")==0 && Contrasena == 6754){
            printf("Usario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1;    
        }else if (strcmp(Usuario, "Juan")==0 && Contrasena == 8523){
            printf("Usario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1; 
        }else if (strcmp(Usuario, "Sofia")==0 && Contrasena == 9288){
            printf("Usario y contrasena correcta.\n");
            intentos = intentos + 5;
            return 1; 
        }else{
            printf("No es corecta la contrasena correcta\n");
            intentos++;
        }
    } while (intentos < 3);
    return 0;
    

}