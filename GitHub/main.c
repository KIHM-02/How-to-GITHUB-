#include "agregar_usuarios.h"
#include "crear_repositorio.h"

#include <conio.h>

int main()
{
    int opcion = 0;

    printf("Ingrese la opcion deseada:\n 1)Como crear un repositorio\n 2)Como agregar un companiero\n 5)Salir\n");
        scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            explicacion_de_creacion();
        break;

        case 2:
            agregar_usuarios_repositorio();
        break;
        
        default: break;
    }

    printf("\n----*Hasta luego***----\n");
    getch();
    return 0;
}