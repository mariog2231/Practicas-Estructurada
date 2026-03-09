/*******************************************************************/
/*Mario Guerrier                                                   */
/*05 de marzo de 2026                                              */
/*megc_PE_Act6_P1                                                  */
/*Programa que muestra un menu iterativo con diferentes opciones   */
/*******************************************************************/
#include "cosas.h"
/*******************************************************************/
int menu();
void ejecucion();
void factorial();
void numeros_rand();
void cal_algebra();
void exam_niv();
void ventas();
void tablas();
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
    system("CLS");
    printf("MENU\n");
    printf("1.- Calcular el factorial de un numero\n");
    printf("2.- Generar numeros aleatorios\n");
    printf("3.- Evaluar calificaciones de algebra\n");
    printf("4.- Derecho a examen de nivelacion\n");
    printf("5.- Calcular sueldo y comision\n");
    printf("6.- Imprimir tablas de multiplicar\n");
    printf("0.- Salir\n");
    opc = valida_num(0, 6, "Introduce una opcion: ");

    return opc;
}
/*******************************************************************/
void ejecucion()
{
    int opc, n;
    
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            system("CLS");
            factorial();
            system("PAUSE");
            break;
        case 2:
            system("CLS");
            numeros_rand();
            system("PAUSE");
            break;
        case 3:
            system("CLS");
            cal_algebra();
            system("PAUSE");
            break;
        case 4:
            system("CLS");
            exam_niv();
            system("PAUSE");
            break;
        case 5:
            system("CLS");
            ventas();
            system("PAUSE");
            break;
        case 6:
            system("CLS");
            tablas();
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
void factorial()
{
    int num, i, fact = 1;

    num = valida_num(0, 15, "Introduce un numero entero positivo [0-15]: ");
    i = num;

    while (i > 1)
    {
        fact = fact * i;
        printf("%d * ", i);
        i--;
    }

    printf("1 = %d\n", fact);
}
/*******************************************************************/
void numeros_rand()
{
    int num, par = 0, i = 0, sum = 0, band = 1, rank;

    while (band)
    {
        num = rand() % 100 + 100;
        if ((num % 2) == 0)
        {
            printf("%d - PAR\n", num);
            par++;
            sum += num;
            if (par > 13)
            {
                band = 0;
            }
        }
        else
        {
            printf("%d - IMPAR\n", num);
        }
        i++;
        if (i > 24)
        {
            band = 0;
        }
    }
    printf("La suma de los numeros pares es: %d\n", sum);
    printf("La media es: %.2f\n", float(sum / par));
    printf("Los numeros totales fueron: %d\n", i);
}
/*******************************************************************/
void cal_algebra()
{
    int parc, inten = 0, band = 1, i, sum;
    float cal;

    printf("CALIFICACIONES ALGEBRA\n");
    while (band)
    {
        i = 0;
        sum = 0;
        while (i < 3)
        {
            printf("Calificacion del parcial %d", i + 1);
            parc = valida_num(0, 100, ": ");
            sum += parc;
            i++;
        }

        cal = float(sum / 3);
        inten++;

        if (cal >= 60)
        {
            printf("Aprobaste, pasaste al siguiente semestre...\n");
            band = 0;
        }
        else
        {
            if (inten < 3)
            {
                printf("Intentalo el siguiente semestre, te quedan %d oportunidad(es)\n", 3 - inten);
            }
            else
            {
                printf("BAJA ACADEMICA...\n");
                band = 0;
            }
        }
    }
}
/*******************************************************************/
void exam_niv()
{
    int cal, i = 0, j, sum, rep = 0;
    float prom;

    while (i < 5)
    {
        system("CLS");
        printf("Alumno %d\n", i + 1);

        sum = 0;
        j = 0;

        while (j < 5)
        {
            printf("Calificacion del parcial %d", j + 1);
            cal  = valida_num(0, 100, ": ");
            sum += cal;

            j++;
        }

        prom = float(sum / 5);

        if (prom < 50)
        {
            rep++;
        }

        i++;
    }

    printf("%d alumnos NO tienen derecho al examen de nivelacion\n", rep);
}
/*******************************************************************/
void ventas()
{
    int vent, sueldo, cant = 0, i, sem, emp = 0;
    float comis;
    char opc[5];
    do
    {
        printf("Vendedor %d\n", emp + 1);
        sueldo = valida_num(0, 5000, "Cual es el sueldo base del vendedor: ");

        sem = valida_num(0, 50,"Cuantas ventas tuvo esta semana: ");

        for (i = 0; i < sem; i++)
        {
            printf("Cual fue la venta %d", i + 1);
            vent = valida_num(1, 5000, ": ");

            comis = comis + float(vent * .10);
        }

        system("CLS");
        printf("El vendedor tuvo %d ventas\n", sem);
        printf("Comisiones:  %.2f\n", comis);
        printf("Sueldo base: %d\n", sueldo);
        printf("Total:       %.2f\n", float(comis + sueldo));
        system("PAUSE");
        emp++;
        printf("Quieres registrar a otro empleado: ");
        my_gets(opc, 5);
    } while (strcmp(opc, "Si") == 0);
}
/*******************************************************************/
void tablas()
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        system("CLS");
        for (j = 0; j < 10; j++)
        {
            printf("%d * %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1));
        }
        system("PAUSE");
    }
}