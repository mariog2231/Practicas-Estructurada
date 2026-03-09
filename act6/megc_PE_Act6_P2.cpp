/*******************************************************************/
/*Mario Guerrier                                                   */
/*05 de marzo de 2026                                              */
/*megc_PE_Act6_P2                                                  */
/*Programa que muestra una cadena en diferentes patrones           */
/*******************************************************************/
#include "cosas.h"
/*******************************************************************/
int menu();
void ejecucion();
void patron_uno(char cadena[], int n);
void patron_dos(char cadena[], int n);
void patron_tres(char cadena[], int n);
void patron_cuatro(char cadena[], int n);
void patron_cinco(char cadena[], int n);
void patron_seis(char cadena[], int n);
void patron_siete(char cadena[], int n);
/*******************************************************************/
int main()
{
    ejecucion();
    return 0;
}
/*******************************************************************/
int menu()
{
    int opc;
    system("CLS");
    printf("MENU\n");
    printf("1.-Imprimir palabra\n");
    printf("2.-Imprimir palabra en columna\n");
    printf("3.-Imprimir palabra al reves en columna\n");
    printf("4.-Imrpimir palabra en piramide invertida\n");
    printf("5.-Imprimir palabra al reves en piramide invertida\n");
    printf("6.-Imprimir palabra en pramide invertida\n");
    printf("7.-Imprimir palabra en piramide invertida\n");
    printf("0.-SALIR\n");
    printf("Elige una opcion: ");
    scanf("%d", &opc);

    return opc;
}
/*******************************************************************/
void ejecucion()
{
    int opc, n;
    char cadena[30];
    printf("Escribe una palabra: ");
    my_gets(cadena, 30);
    n = contar_cadena(cadena);
    
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            system("CLS");
            patron_uno(cadena, n);
            system("PAUSE");
            break;
        case 2:
            system("CLS");
            patron_dos(cadena, n);
            system("PAUSE");
            break;
        case 3:
            system("CLS");
            patron_tres(cadena, n);
            system("PAUSE");
            break;
        case 4:
            system("CLS");
            patron_cuatro(cadena, n);
            system("PAUSE");
            break;
        case 5:
            system("CLS");
            patron_cinco(cadena, n);
            system("PAUSE");
            break;
        case 6:
            system("CLS");
            patron_seis(cadena, n);
            system("PAUSE");
            break;
        case 7:
            system("CLS");
            patron_siete(cadena, n);
            system("PAUSE");
            break;
        default:
            if (opc != 0)
            {
                printf("Opcion no valida...");
                system("PAUSE");
            }
            break;
        }
    } while (opc != 0);
}
/*******************************************************************/
void patron_uno(char cadena[], int n)
{
    printf("PATRON 1\n");
    printf("La palabra es: %s\n", cadena);
}

void patron_dos(char cadena[], int n)
{
    int i;
    printf("PATRON 2\n");
    for (i = 0; i < n; i++)
    {
        printf("%c\n", cadena[i]);
    }
}
/*******************************************************************/
void patron_tres(char cadena[], int n)
{
    int i;
    printf("PATRON 3\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c\n", cadena[i]);
    }
}
/*******************************************************************/
void patron_cuatro(char cadena[], int n)
{
    int aux, i, j;
    aux = n;

    printf("PATRON 4\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < aux; j++)
        {
            printf("%c", cadena[j]);
        }
        aux -= 1;
        printf("\n");
    }
}
/*******************************************************************/
void patron_cinco(char cadena[], int n)
{
    int i, j;
    
    printf("PATRON 5\n");
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
/*******************************************************************/
void patron_seis(char cadena[], int n)
{
    int i, j;

    printf("PATRON 6\n");
    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
/*******************************************************************/
void patron_siete(char cadena[], int n)
{
    int i, j, aux;
    aux = n - 1;

    printf("PATRON 7\n");
    for (i = 0; i < n; i++)
    {
        for (j = aux; j > -1; j--)
        {
            printf("%c", cadena[j]);
        }
        aux--;
        printf("\n");
    }
}