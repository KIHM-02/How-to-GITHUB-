
#include <stdio.h>
#include <stdlib.h>


void ver_historial_cambios(){
    
    system("cls");
    printf("Para ver los cambios realizados al proyecto, se deben seguir los siguientes pasos:\n\n");

    printf("Se debe ir a la pesta%ca del codigo.\n\n",-92);
    system("imagenes\\ver_historialCambios.png");
    system("pause");
    system("cls");

    printf("Ahi aparecera el cambio mas reciente al proyecto con el nombre de la persona que lo efectuo \ny la descripcion del cambio. \n\n");
    system("imagenes\\ver_historialCambios1.png");
    system("pause");
    system("cls");

    printf("A nosotros nos interesa la parte donde dice commits en la parte superior derecha.\nLe damos click y se abrira otro panel nuevo.\n\n");
    system("imagenes\\ver_historialCambios2.png");
    system("pause");
    system("cls");

    printf("Este panel estara reflejado todos los cambios realizados al proyecto ordenados por\nfecha, se puede ver el nombre de la persona, la descripcion y un identificador unico para el commit.\n\n");
    system("imagenes\\ver_historialCambios3.png");
    printf("Listo!!! ya puedes ver los cambios hechos al proyecto para tener un mejor control del mismo.\n\n");
    system("pause");
    system("cls");

}