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