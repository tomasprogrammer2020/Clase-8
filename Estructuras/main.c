#include <stdio.h>
#include <stdlib.h>
#include "Estructuras.h"
#include "inputs.h"
#define OCUPADO 1
#define LIBRE 0


int main()
{
int tam = 2;
int opcion;
int empleadoBorrar;
int seguir='s';
eEmpleado lista[tam];
inicializarEmpleados(lista, tam);
int i;


    do
    {
        printf("Ingrese el numero de la opcion correspondiente:\n");

        printf("1. Dar de alta un empleado.\n");
        printf("2. Modificar un empleado.\n");
        printf("3. Dar de baja un empleado\n");
        printf("4. Ordenar empleados por numero de legajo.\n");
        printf("5. Mostrar empleados\n");
        printf("6. Salir del programa\n");
        scanf("%d", &opcion);


        switch(opcion)
        {
            case 1:
            cargarUno(lista, tam);
            break;

            case 2:


            case 3:
            getInt(&empleadoBorrar,"el legajo del empleado que desea borrar","legajo valido (mayor a 0)", 0, 9999999);
            borrarUno(lista, tam, empleadoBorrar);
            break;

            case 4:
            printf("Los empleados seran ordenados en forma creciente...\n");
            ordenarVector(lista, tam);
            printf("Empleados ordenados.\n");
            break;

            case 5:
            for (i=0;i<tam;i++)
            {
                if (lista[i].legajo !=-1)
               {
                   mostrarUno(lista, i);
               }
            }
            break;

            case 6:
            printf("El programa se cerrara\n");
            seguir='n';
            break;

            default:
                printf("No ingreso una opcion valida\n");
                break;
        }

        system("pause");
        system("cls");

    }while (seguir=='s');
    return 0;
}
