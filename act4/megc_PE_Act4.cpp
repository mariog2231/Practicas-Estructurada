/*******************************************************************/
/*Mario Guerrier                                                   */
/*22 de febrero de 2026                                            */
/*megc_PE_Act4                                                     */
/*Programa que muestra un menu iterativo con diferentes opciones   */
/*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*******************************************************************/
int menu();
void ejecucion();
void numeros_uno_diez();
void cuenta_regresiva();
void suma_veinte();
void tablas();
void numeros_aleatorios();
/*******************************************************************/
int main()
{
    srand(time(NULL));
    ejecucion();

    return 0;
}
/*******************************************************************/
int menu()
{
    int opc;
    printf("-MENU-\n");
    printf("1.- Mostrar numeros del 1 al 10 y su suma\n");
    printf("2.- Mostrar numeros menores a n, suma y promedio\n");
    printf("3.- Mostrar suma y promedio de 20 numeros\n");
    printf("4.- Mostrar tablas de multiplicar\n");
    printf("5.- Generar numeros aleatorios\n");
    printf("0.- Salir\n");
    printf("Elige una opcion: ");
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
                numeros_uno_diez();
                break;
            case 2:
                cuenta_regresiva();
                break;
            case 3:
                suma_veinte();
                break;
            case 4:
                tablas();
                break;
            case 5:
                numeros_aleatorios();
                break;
            default:
                if (opc != 0)
                {
                    printf("OPCION NO VALIDA...\n");
                }
                break;
        }
    } while (opc != 0);
}
/*******************************************************************/
void numeros_uno_diez()
{
    int i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i + 1);
        sum = sum + (i + 1);
    }
    printf("La suma es: %d\n", sum);
}
/*******************************************************************/
void cuenta_regresiva()
{
    int n, sum = 0, i;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    for (i = n - 1; i > 0; i--)
    {
        printf("%d\n", i);
        sum += i;
    }

    printf("La suma es: %d\n", sum);
    printf("El promedio es: %f\n", float(sum / (n - 1)));
}
/*******************************************************************/
void suma_veinte()
{
    int i, sum = 0, num;

    for (i = 0; i < 20; i++)
    {
        printf("Dame el numero %d: ", i + 1);
        scanf("%d", &num);

        sum += num;
    }

    printf("La suma de los 20 numero es: %d\n", sum);
    printf("El promedio de los 20 numeros es: %f\n", float(sum / 20));
}
/*******************************************************************/
void tablas()
{
    int i, num;

    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
}
/*******************************************************************/
void numeros_aleatorios()
{
    int num, i, par = 0, imp = 0;

    for (i = 0; i < 25; i++)
    {
        num = rand() % 40 + 10;
        printf("%d ", num);
        if ((num % 2) == 0)
        {
            printf("PAR\n");
            par++;
        }
        else
        {
            printf("IMPAR\n");
            imp++;
        }
    }
    printf("Hay %d numeros pares\n", par);
    printf("Hay %d numeros impares\n", imp);
}