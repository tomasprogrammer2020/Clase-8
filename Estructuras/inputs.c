#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    printf("Ingrese %s : ", message);
    scanf("%d", input);

    while (*input>hiLimit || *input<lowLimit)
    {
        printf("Reingrese %s: ", eMessage);
        scanf("%d", input);
    }

    return 0;
}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    printf("Ingrese %s: ", message);
    scanf("%f", input);

   while (*input>hiLimit || *input<lowLimit)
    {
        printf("Reingrese %s: ", eMessage);
        (scanf("%f", input));
    }

    return 0;
}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
    printf("Ingrese %s: ", message);
    fflush(stdin);
    scanf("%c", input);

   while (*input>hiLimit || *input<lowLimit)
    {
        printf("Reingrese %s: ", eMessage);
        fflush(stdin);
        scanf("%c", input);
        *input=toupper(*input);
    }

    return 0;
}


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud mínima de la cadena
* \param hiLimit Longitud máxima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char input[],char message[],char eMessage[], int lowLimit, int hiLimit)
{
    char buffer[100];

    printf("Ingrese %s: ", message);
    fflush(stdin);
    gets(buffer);


    while (strlen(buffer)>hiLimit || strlen(buffer)<lowLimit)
    {

        printf("Reingrese %s: ", eMessage);
        fflush(stdin);
        scanf("%[^\n]", &buffer);

    }

    strcpy(input,buffer);
    return 0;
}

int nameUpper(char name[])
{
strlwr(name);

name[0] = toupper(name[0]);
int i=0;

while(name[i]!='\0')
{

    if(name[i]==' ')
    {
        name[i+1]= toupper (name[i+1]);

    }
    i++;
}
return 0;}

void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
    while (strlen (cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }

}


void pedirCadena(char mensaje[], char cadena[], int tam)
{
    printf("Ingrese %s :", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje, cadena, tam);

}

