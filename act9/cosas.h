#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*******************************************************************/
void my_gets(char cadena[], int n);
int valida_num(int ri, int rf, char msg[]);
/*******************************************************************/
int contar_cadena(char cadena[]);
/*******************************************************************/
int busq_sec(int vect[], int m, int num);
int busq_bin(int vect[], int m, int num);
void burbuja_sort(int vect[], int m);
/*******************************************************************/
void my_gets(char cadena[], int n)
{
    int band, i;
    band = 1;

    fflush(stdin);
    fgets(cadena, n, stdin);
    i = 0;
    do
    {
        if (cadena[i] == '\n')
        {
            cadena[i] = '\0';
            band = 0;
        }
        i++;
    } while (band);
}
/*******************************************************************/
int valida_num(int ri, int rf, char msg[])
{
    char snum[30];
    int num;

    do
    {
        printf("%s", msg);

        my_gets(snum, 30);
        num = atoi(snum);

        if (num < ri || num > rf)
        {
            printf("ERROR...\n");
        }
        

    } while (num < ri || num > rf);

    return num;
}
/*******************************************************************/
int contar_cadena(char cadena[])
{
    int n = 0, i = 0;

    while (cadena[i] != '\0')
    {
        if (cadena[i] != '\0')
        {
            n++;
        }
        i++;
    }
    return n;
}
/*******************************************************************/
int busq_sec(int vect[], int m, int num)
{
    for ( int i = 0; i < m; i++)
    {
        if (vect[i] == num)
        {
            return i;
        }
    }
    
    return -1;
}
/*******************************************************************/
int busq_bin(int vect[], int m, int num)
{
    int inicio = 0, fin = m - 1, medio;
    while (inicio <= fin)
    {
        medio = inicio + (fin - inicio) / 2;

        if (vect[medio] == num)
        {
            return medio;
        }
        else
        {
            if (vect[medio] < num)
            {
                inicio = medio + 1;
            }
            else
            {
                fin = medio - 1;
            }
        }
    }

    return -1;
}
/*******************************************************************/
void burbuja_sort(int vect[], int m)
{
    int i, j, temp;
    for (i = 0; i < m - 1; i++)
    {
        for (j = 0; j < m - i - 1; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                temp = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = temp;
            }
        }
    }
}
