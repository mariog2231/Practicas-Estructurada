/*******************************************************************/
/*Mario Guerrier                                                   */
/*15 de marzo de 2026                                              */
/*megc_PE_Act7_P1                                                  */
/*Programa que trabaja con vectores y matrices                     */
/*******************************************************************/
#include "cosas.h"
/*******************************************************************/
int menu();
void ejecucion();
void llenar_man(int vect[], int m);
void llenar_aut(int vect[], int m);
void vector_tres(int vect1[], int vect2[], int vect3[], int m);
void imprimir(int vect1[], int vect2[], int vect3[], int m);
void llenar_matriz(int vect3[], int mat[][4]);
void llenar_mat(int vect1[], int vect2[], int mat[][4]);
void imprimir_mat(int mat[][4]);
int llenar_cad(char cadenas[][30], int cant);
void imprimir_cad(char cadenas[][30], int cant);
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
    printf("-MENU-\n");
    printf("1.- Llenar vector 1 manualmente\n");
    printf("2.- Llenar el vector 2 automaticamente\n");
    printf("3.- Llenar el vector 3\n");
    printf("4.- Imprimir vectores\n");
    printf("5.- Llenar matriz\n");
    printf("6.- Imprimir matriz\n");
    printf("7.- Llenar vector de cadenas\n");
    printf("8.- Imprimir vector de cadenas\n");
    printf("0.- Salir\n");
    opc = valida_num(0, 8, "Elige una opcion: ");

    return opc;
}
/*******************************************************************/
void ejecucion()
{
    int opc, cant = 0, vect1[10], vect2[10], vect3[20], mat[4][4];
    int band_uno = 0, band_dos = 0, band_tres = 0, band_mat = 0;
    char vect_cad[10][30];
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            system("CLS");
            llenar_man(vect1, 10);
            band_uno = 1;
            system("PAUSE");
            break;
        case 2:
            system("CLS");
            llenar_aut(vect2, 10);
            band_dos = 1;
            system("PAUSE");
            break;
        case 3:
            system("CLS");
            if (band_uno == 1)
            {
                if (band_dos == 1)
                {
                    vector_tres(vect1, vect2, vect3, 20);
                    band_tres = 1;
                }
                else
                {
                    printf("Vector 2 vacio...\n");
                }
            }
            else
            {
                printf("Vector 1 vacio...\n");
            }
            system("PAUSE");
            break;
        case 4:
            system("CLS");
            if (band_tres == 1)
            {
                imprimir(vect1, vect2, vect3, 10);
            }
            else
            {
                printf("Alguno de los vectores no esta lleno...\n");
            }
            system("PAUSE");
            break;
        case 5:
            system("CLS");
            if (band_tres == 1)
            {
                llenar_matriz(vect3, mat);
                band_mat = 1;
                printf("Matriz llena\n");
            }
            else
            {
                if (band_uno == 1)
                {
                    if (band_dos == 1)
                    {
                        llenar_mat(vect1, vect2, mat);
                        band_mat == 1;
                        printf("Matriz llena\n");
                    }
                    else
                    {
                        printf("Vector 2 vacio...\n");
                    }
                }
                else
                {
                    printf("Vector 1 vacio...\n");
                }
            }
            system("PAUSE");
            break;
        case 6:
            system("CLS");
            if (band_mat == 1)
            {
                imprimir_mat(mat);
            }
            else
            {
                printf("La matriz no esta llena...\n");
            }
            system("PAUSE");
            break;
        case 7:
            system("CLS");
            if (cant < 10)
            {
                cant = llenar_cad(vect_cad, cant);
            }
            else
            {
                printf("Ya no hay espacio en el vector...\n");
            }
            system("PAUSE");
            break;
        case 8:
            system("CLS");
            if (cant > 0)
            {
                imprimir_cad(vect_cad, cant);
            }
            else
            {
                printf("El vector de cadenas esta vacio...\n");
            }
            system("PAUSE");
            break;
        default:
            if (opc != 0)
            {
                printf("Opcion no valida...\n");
            }
            break;
        }
    } while (opc != 0);
}
/*******************************************************************/
void llenar_man(int vect[], int m)
{
    int i;

    for (i = 0; i < m; i++)
    {
        vect[i] = valida_num(30, 70, "Ingresa un numero [30-70]: ");
    }
    printf("Vector 1 lleno...\n");
}
/*******************************************************************/
void llenar_aut(int vect[], int m)
{
    int aux, i;
    for (i = 0; i < m; i++)
    {
        do
        {
            vect[i] = rand() % 20 + 1;
            aux = busq_sec(vect, i, vect[i]);
        } while (aux != 0);
    }
    printf("Vector 2 lleno...\n");
}
/*******************************************************************/
void vector_tres(int vect1[], int vect2[], int vect3[], int m)
{
    int i, k = 0;

    for (i = 0; i < 10; i++)
    {
        vect3[k++] = vect1[i];
    }
    for (i = 0; i < 10; i++)
    {
        vect3[k++] = vect2[i];
    }
    printf("Vector 3 lleno...\n");
}
/*******************************************************************/
void imprimir(int vect1[], int vect2[], int vect3[], int m)
{
    int i;

    printf("-Vector 1-   -Vector 2-   -Vector 3-\n");
    for (i = 0; i < m; i++)
    {
        printf("      [%2d]         [%2d]     [%2d][%2d]\n", vect1[i], vect2[i], vect3[i], vect3[i + 10]);
    }
}
/*******************************************************************/
void llenar_matriz(int vect3[], int mat[][4])
{
    int i, j, k = 0;

    for (int i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = vect3[k++];
        }
    }
}
void llenar_mat(int vect1[], int vect2[], int mat[][4])
{
    int i, j, k = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = vect1[k++];
        }
    }
    for (i; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = vect2[k++];
        }
    }
}
/*******************************************************************/
void imprimir_mat(int mat[][4])
{
    int i, j;

    printf("-Matriz-\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }
}
/*******************************************************************/
int llenar_cad(char cadenas[][30], int cant)
{
    int opc, band = 1;
    do
    {
        printf("Escribe la cadena %d: ", cant + 1);
        my_gets(cadenas[cant], 30);
        if (cant < 9)
        {
            opc = valida_num(1, 2, "Quieres escribir otra cadena (1-Si 2-No): ");
            if (opc == 2)
            {
                band = 0;
            }
        }
        else
        {
            printf("La matriz esta llena\n");
            band = 0;
        }
        cant++;
    } while (band);
    return cant;
}
/*******************************************************************/
void imprimir_cad(char cadenas[][30], int cant)
{
    printf("-Vector de cadenas-\n");
    for (int i = 0; i < cant; i++)
    {
        printf("%d - %s tiene %d caracteres\n", i + 1, cadenas[i], strlen(cadenas[i]));
    }
}