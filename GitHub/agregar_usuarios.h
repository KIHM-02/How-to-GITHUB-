#include <stdio.h>
#include <stdlib.h>

void agregar_usuarios_repositorio()
{
    printf("Para agregar a los usuarios, se necesitan hacer los siguientes pasos: \n\n");

    printf("Primer paso, una vez estemos dentro del repositorio que trabajaremos, iremos a 'settings'\n");
    system("imagenes\\agregar_usuarios.png");
    system("pause");

    printf("\nSegundo paso, iremos a 'collaborators' y seleccionamos 'Add people'\n");
    system("imagenes\\agregar_usuarios2.png");
    system("pause");

    printf("\nTercer paso, aparecera una ventana donde pondremos el nombre de usuario del companero y lo seleccionamos\n");
    system("imagenes\\agregar_usuarios3.png");
    system("pause");

    printf("\nAhora solo esperamos a que confirmen la solicitud\n");
    system("pause");
    system("cls");
}