#include "cosas.h"
/****************************************************/
void mayusculas(char cadena[]);
void minusculas(char cadena[]);
void capital(char cadena[]);
int contar(char cadena[]);
void invertir(char cadena[], char nueva[]);
void sin_espacios(char cadena[], char nueva[]);
/****************************************************/
void mayusculas(char cadena[])
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] > 96)
        {
            if (cadena[i] < 123)
            {
                cadena[i] = cadena[i] - 32;
            }
        }
        else
        {
            if (cadena[i] == 164)
            {
                cadena[i] = cadena[i] + 1;
            }
        }
    }
}
/****************************************************/
void minusculas(char cadena[])
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] > 64)
        {
            if (cadena[i] < 91)
            {
                cadena[i] = cadena[i] + 32;
            }
        }
        else
        {
            if (cadena[i] == 165)
            {
                cadena[i] = cadena[i] - 1;
            }
        }
    }
}
/****************************************************/
void capital(char cadena[])
{
    if (cadena[0] > 96 && cadena[0] < 123)
    {
        cadena[0] = cadena[0] - 32;
    }
    for (int i = 1; cadena[i] != '\0'; i++)
    {
        if (cadena[i - 1] == 32)
        {
            if (cadena[i] > 96 && cadena[i] < 123)
            {
                cadena[i] = cadena[i] - 32;
            }
            else
            {
                if (cadena[i] == 165)
                {
                    cadena[i] = cadena[i] - 1;
                }
            }
        }
        else
        {
            if (cadena[i] > 64 && cadena[i] < 91)
            {
                cadena[i] = cadena[i] + 32;
            }
            else
            {
                if (cadena[i] == 164)
                {
                    cadena[i] = cadena[i] + 1;
                }
            }
        }
    }
}
/****************************************************/
int contar(char cadena[])
{
    int i = 0;

    while (cadena[i] != '\0')
    {
        i++;
    }

    return i;
}
/****************************************************/
void invertir(char cadena[], char nueva[])
{
    int cant, i, aux;
    cant = contar(cadena);
    aux = cant - 1;

    for (i = 0; i < cant; i++)
    {
        nueva[i] = cadena[aux--];
    }
    nueva[cant] = '\0';
}
/****************************************************/
void sin_espacios(char cadena[], char nueva[])
{
    int i, j = 0;
    for (i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] != 32)
        {
            nueva[j] = cadena[i];
            j++;
        }
    }
}