typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;

} eEmpleado;


void inicializarEmpleados (eEmpleado [], int);
void cargarLista (eEmpleado [], int);
void mostrarLista (eEmpleado [], int);
int buscarLibre (eEmpleado[], int);
void cargarUno (eEmpleado[], int);
int buscarUno (eEmpleado [], int, int);
int borrarUno(eEmpleado lista[], int, int);
void ordenarVector(eEmpleado lista[], int tam);
void mostrarUno(eEmpleado [], int );
