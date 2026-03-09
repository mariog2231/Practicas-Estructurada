/*******************************************************************/
/*Mario Guerrier                                                   */
/*26 de febrero de 2026                                            */
/*megc_PE_Act5_P1                                                  */
/*Programa que muestra un menu iterativo con diferentes opciones   */
/*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*******************************************************************/
int menu();
void ejecucion();
void lectura_rango();
void valid_rango();
void cont_numeros();
void fibo();
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
    printf("-MENU-\n");
    printf("1.- Leer, sumar y promedio de numeros dentro de [10-50]\n");
    printf("2.- Numeros dentro del rango [1-100]\n");
    printf("3.- Contar los digitos de un numero\n");
    printf("4.- Mostrar la serie de Fibonacci\n");
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
        system("CLS");
        opc =  menu();

        switch (opc)
        {
            case 1:
                system("CLS");
                lectura_rango();
                system("PAUSE");
                break;
            case 2:
                system("CLS");
                valid_rango();
                system("PAUSE");
                break;
            case 3:
                system("CLS");
                cont_numeros();
                system("PAUSE");
                break;
            case 4:
                system("CLS");
                fibo();
                system("PAUSE");
                break;
            default:
                system("CLS");
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
void lectura_rango()
{
    int num, ver = 0, total = 0, suma = 0;

    do
    {
        printf("Introduce un numero entero (CERO para salir): ");
        scanf("%d", &num);
        if (num >= 10 && num <= 50)
        {
            ver++;
            suma = suma + num;
        }

        total++;

    } while (num != 0);

    printf("Se introdujeron %d numeros\n", total - 1);
    printf("El %.2f%c del total estuvieron dentro del rango\n", float((ver * 100) / (total - 1)), 37);
    printf("La suma de los numeros correctos es %d\n", suma);
}
/*******************************************************************/
void valid_rango()
{
    int num, band = 1;

    do
    {
        printf("Introduce un numero entre [1-100]: ");
        scanf("%d", &num);

        if (num <= 100)
        {
            if (num >= 1)
            {
                band = 0;
            }
            else
            {
                printf("ERROR, introduce el numero de nuevo...\n");
            }
        }
        else
        {
            printf("ERROR, introduce el numero de nuevo...\n");
        }

    } while (band);
}
/*******************************************************************/
void cont_numeros()
{
    int num, cop, dig = 0;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    cop = num;

    do
    {
        dig++;
        cop = cop / 10;
    } while ( cop > 0 );
    
    printf("El numero %d tiene %d digitos\n", num, dig);
}
/*******************************************************************/
void fibo()
{
    int num, band = 1;
    long int n1 = 0, n2 = 1, temp;

    do
    {
        printf("Hasta que numero de la serie quieres contar: ");
        scanf("%d", &num);

        if(num < 5000)
        {
            if (num > 10)
            {
                band = 0;
            }
        }

    } while (band);

    printf("%ld %ld ", n1, n2);
    do
    {
        temp = n1 + n2;
        if (temp < num)
        {
            printf("%ld ", temp);
        }

        n1 = n2;
        n2 = temp;

    } while (n2 < num);
    printf("\n");
}