#include <stdio.h>
#include <stdlib.h>

void creacion_de_pullRequest()
{
    printf("Cuando un compañero crea una rama y se necesita agregar a la rama main (origin), es necesario crear un pull request.\n\n");

    printf("\nPrimero, nos dirigimos a la rama que queremos agregar a la rama main.\n");
    system("imagenes\\pullrequest1.png");
    system("pause");

    printf("\nSegundo, damos click en 'Contribute' y despues en 'Open pull request' para generar un pull request.\n");
    system("imagenes\\pullrequest2.png");
    system("pause");

    printf("\nTercero, seleccionamos a donde va ir dirigido el pull request, para este caso sera al main.\n");
    system("imagenes\\pullrequest3.png");
    system("pause");

    printf("\nCuarto, verificamos que el texto que tenga sea el adecuado a las cosas que se realizaron y seleccionamos 'Create pull request'\n");
    system("imagenes\\pullrequest4.png");
    system("pause");

    printf("\nPor ultimo, nos aparecera una ventana que mandar un mensaje para saber si es posible realizar el proceso, en caso de serlo seleccionamos 'Merge pull request' y le damos en confirmar merge.\n");
    system("imagenes\\pullrequest5.png");
    system("pause");

    system("cls");
}