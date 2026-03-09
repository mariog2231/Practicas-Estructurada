/*******************************************************************/
/*Mario Guerrier                                                   */
/*26 de febrero de 2026                                            */
/*megc_PE_Act5_P2                                                  */
/*Programa que muestra un menu iterativo con diferentes opciones   */
/*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*******************************************************************/
int menu();
void ejecucion();
void promedio();
void tablas();
void cont_dig();
void factorial();
/*******************************************************************/
int main()
{
    ejecucion();

    return 0;
}
/*******************************************************************/
int menu()
{
    system ("CLS");
    int opc;
    printf("MENU\n");
    printf("1.-Calcular el promedio de una materia\n");
    printf("2.-Imprimir las tablas de multiplicar\n");
    printf("3.-Contar digitos de un numero\n");
    printf("4.-Calcular el factorial\n");
    printf("0.-Salir\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opc);
    return opc;
}
/*******************************************************************/
void ejecucion()
{
    int opc;

    do
    {
        opc = menu();

        switch (opc)
        {
            case 1:
                system("CLS");
                promedio();
                system("PAUSE");
                break;
            case 2:
                system("CLS");
                tablas();
                system("PAUSE");
                break;
            case 3:
                system("CLS");
                cont_dig();
                system("PAUSE");
                break;
            case 4:
                system("CLS");
                factorial();
                system("PAUSE");
                break;
            default:
                if (opc != 0)
                {
                    printf("Opcion no valida...\n");
                    system("PAUSE");
                }
                break;
        }
    } while (opc != 0);
}
/*******************************************************************/
void promedio()
{
    int cal, band = 1, i, sum, aux = 0;
    float prom;

    while (band)
    {
        i = 0;
        sum = 0;
        while (i < 3)
        {
            do
            {
                printf("Introduce la calificacion %d: ", i + 1);
                scanf("%d", &cal);

            } while (cal < 0 || cal > 100);
            sum = sum + cal;
            i++;
        }
        prom = float(sum / 3);

        if (prom < 60)
        {
            if (aux < 2)
            {
                printf("Reprobaste, intentalo el siguiente semestre...\n");
                aux++;
            }
            else
            {
                printf("Baja academica...\n");
                band = 0;
            }
        }
        else
        {
            printf("Pasaste al siguiente semestre...\n");
            band = 0;
        }
    }
}
/*******************************************************************/
void tablas()
{
    int i = 0, j;

    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            printf("%d * %d = %d\n", i + 1, j + 0, (i + 1) * (j + 1));
            j++;
        }
        printf("/********/\n");
        i++;
    }
}
/*******************************************************************/
void cont_dig()
{
    int num, cop, dig = 0;

    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    cop = num;

    while (cop > 0)
    {
        cop = cop / 10;
        dig++;
    }

    printf("El numero %d tiene %d digitos\n", num, dig);
}
/*******************************************************************/
void factorial()
{
    int num, fact = 1, i;

    do
    {
        printf("Introduce el numero con el que quieres trabajar [1-10]: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    i = num;
    while (i > 1)
    {
        fact = fact * i;
        i--;
    }

    printf("El resultado es %d\n", fact);
}