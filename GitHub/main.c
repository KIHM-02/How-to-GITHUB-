#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "crear_repositorio.h"

int main()
{
    int opcion = 0;

    printf("Ingrese la opcion deseada:\n 1)Como crear un repositorio\n 5)Salir\n");
        scanf("%d", &opcion);


    switch (opcion)
    {
        case 1:
            explicacion_de_creacion();
        break;
        
        default: break;
    }

    
    printf("\n----*Hasta luego***----\n");
    getch();
    return 0;
}