#include "agregar_usuarios.h"
#include "crear_repositorio.h"

#include <conio.h>

int main()
{
    int opcion = 0;

    printf("Ingrese la opcion deseada:\n 1)Como crear un repositorio\n 2)Como agregar un companiero\n 8)Salir\n");
    printf("");
        scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            explicacion_de_creacion();
        break;

        case 2:
            agregar_usuarios_repositorio();
        break;

        case 3:
           //poner aqui la libreria de COMMITS y pull request
        break;

        case 4:
             //poner aqui la funcion de la libreria ANGEL
        break;

        case 5:
            //poner aqui la funcion de la libreria YAEL
        break;

        case 6:
            //poner aqui la funcion de la libreria ROMAN
        break;

        case 7:
            //poner aqui la funcion de la libreria PETTERSON
        break;
        
        default: break;
    }

    system("cls");
    printf("\n----***Hasta luego***----\n");
    getch();
    return 0;
}