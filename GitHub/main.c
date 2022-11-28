#include "agregar_usuarios.h"
#include "crear_repositorio.h"
#include "crear_pull_request.h"
#include "historial_cambios.h"
#include "solidifica_trabajo_equipo.h"
#include "estadisticas_p.h"
#include "ventajas_uso.h"

#include <conio.h>
#include <stdbool.h>
int main()
{
    int opcion = 0;

    bool ban = false;  

    while (ban==false)
    {
        printf("Ingrese la opcion deseada:\n1)Como crear un repositorio\n2)Como agregar un compa%cero\n3)Como hacer Commits y Pull request\n4)Historial de Cambios\n5)Datos que pueden visualizarse en estadisticas del proyecto\n6)Solidifica como hacer el trabajo en equipo\n7)Beneficios al usar github\n8)Salir\n\nIngrese la opcion: ",-92);
        
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
                    ver_estadisticas_proyecto();
                break;

                case 6:
                    solidifica_trabajo_equipo();
                break;

                case 7:
                    resolver_problemas_repositorio();
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
