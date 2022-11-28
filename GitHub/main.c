#include "agregar_usuarios.h"
#include "crear_repositorio.h"
#include "crear_pull_request.h"
#include "historial_cambios.h"
#include "solidifica_trabajo_equipo.h"

#include <conio.h>
#include <stdbool.h>
int main()
{
    int opcion = 0;
    
    bool ban = false;  

    while (ban==false)
    {
        printf("Ingrese la opcion deseada:\n 1)Como crear un repositorio\n 2)Como agregar un companiero\n 3)Como hacer Commits y Pull request\n 4)Historial de Cambios\n 6)Solidifica como hacer el trabajo en equipo\n 8)Salir\n\n");
        
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
                    creacion_de_pullRequest();
                break;

                case 4:
                    ver_historial_cambios();
                break;

                case 5:
                    //poner aqui la funcion de la libreria YAEL
                break;

                case 6:
                    solidifica_trabajo_equipo();
                break;

                case 7:
                    
                break;
                
                case 8:
                    ban = true;
                break;
                
                default: break;
            }

    }
    
    

    system("cls");
    printf("\n----***Hasta luego***----\n");
    getch();
    return 0;
}
