#include "Estructuras.h"
#include <stdio.h>
void cargarLista (eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
    }
}


void mostrarLista (eEmpleado lista[], int tam)
{
int i;
        for(i=0; i<tam;i++)
    {
       printf("%d-%s-%c-%.2f-%.2f\n", lista[i].legajo,lista[i].nombre, lista[i].sexo, lista[i].sueldoBruto, lista[i].sueldoNeto);
    }

}

void inicializarEmpleados (eEmpleado lista[], int tam)
{
    int i;

    for (i=0; i<tam; i++)
    {
        lista[i].legajo = -1;
    }
}

int buscarLibre (eEmpleado lista[], int tam)
{
    int i;
    int libre=-1;

    for (i=0; i<tam; i++)
    {
       if (lista[i].legajo ==-1)
       {
           libre= i;
           break;
       }

    }

    return libre;
}

void cargarUno(eEmpleado lista[], int tam)
{
    int libre= buscarLibre(lista, tam);

    if (libre!=-1)
{

    printf("Ingrese legajo: ");
    scanf("%d", &lista[libre].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[libre].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[libre].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[libre].sueldoBruto);
    lista[libre].sueldoNeto = lista[libre].sueldoBruto*0.85;
}
else
    printf("No hay espacio disponible.\n");
}

int buscarUno(eEmpleado lista[], int tam, int legajo)
{
    int indice=-1;
    int i;

    for (i=0;i<tam;i++)
    {
        if (lista[i].legajo==legajo)
        {
            indice = i;
            break;
        }
    }
return indice;
}


int borrarUno(eEmpleado lista[], int tam, int legajo)
{
    int estaOcupado=1;

    int indice=buscarUno(lista, tam, legajo);

    if (indice!=-1)
    {
        printf("Se borrara el empleado con legajo %d\n", legajo);
        lista[indice].legajo=-1;
        estaOcupado=0;
        printf("Empleado borrado.\n");
    }

return estaOcupado;
}

void ordenarVector(eEmpleado lista[], int tam)
{
    int i, j;
    eEmpleado aux;

    for (i=0; i<tam-1; i++)
    {
        for (j=i+1; j<tam; j++)
        {
            if (lista[i].legajo>lista[j].legajo)
        {
            aux = lista[i];
            lista[i]= lista[j];
            lista[j]= aux;
        }
        }
    }
}

void mostrarUno(eEmpleado lista[], int i)
{
    printf("%d-%s-%c-%.2f-%.2f\n", lista[i].legajo,lista[i].nombre, lista[i].sexo, lista[i].sueldoBruto, lista[i].sueldoNeto);
}

