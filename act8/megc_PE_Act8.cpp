/*******************************************************************/
/*Mario Guerrier                                                   */
/*22 de marzo de 2026                                              */
/*megc_PE_Act8                                                     */
/*Programa que trabaja con vectores y matrices                     */
/*******************************************************************/
#include "cosas.h"
/*******************************************************************/
int menu();
void ejecucion();
void llenar_vect(int vect[], int m, int ri, int rf);
void llenar_mat(int mat[][4], int n, int m);
void imprimir_vect(int vect[], int m, char msg[]);
void imprimir_mat(int mat[][4], int n, int m, char msg[]);
void ordenar(int vect[], int m);
void buscar(int vect[], int m, int band);
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
    printf("1.- Llenar vector\n");
    printf("2.- Llenar matriz\n");
    printf("3.- Imprimir vector\n");
    printf("4.- Imprimir matriz\n");
    printf("5.- Ordenar vector\n");
    printf("6.- Buscar en vector\n");
    printf("0.- Salir\n");
    opc = valida_num(0, 6, "Elige una opcion: ");
    return opc;
}
/*******************************************************************/
void ejecucion()
{
    int opc, band_vect = 0, band_mat = 0, ord = 0;
    int vect[15], mat[4][4];

    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            system("CLS");
            llenar_vect(vect, 15, 100, 200);
            printf("Vector lleno\n");
            band_vect = 1;
            system("PAUSE");
            break;
        case 2:
            system("CLS");
            llenar_mat(mat, 4, 4);
            printf("Matriz llena\n");
            band_mat = 1;
            system("PAUSE");
            break;
        case 3:
            system("CLS");
            if (band_vect == 1)
            {
                imprimir_vect(vect, 15, "Vector");
            }
            else
            {
                printf("No hay elementos en el vector\n");
            }
            system("PAUSE");
            break;
        case 4:
            system("CLS");
            if (band_mat == 1)
            {
                imprimir_mat(mat, 4, 4, "Matriz");
            }
            else
            {
                printf("No hay elementos en la matriz\n");
            }
            system("PAUSE");
            break;
        case 5:
            system("CLS");
            if (ord == 0)
            {
                ordenar(vect, 15);
                ord = 1;
            }
            else
            {
                printf("El vector ya esta ordenado\n");
            }
            system("PAUSE");
            break;
        case 6:
            system("CLS");
            buscar(vect, 15, ord);
            system("PAUSE");
            break;
        }
    } while (opc != 0);
}
/*******************************************************************/
void llenar_vect(int vect[], int m, int ri, int rf)
{
    int num, i, rank;
    rank = (rf - ri) + 1;

    for (i = 0; i < m; i++)
    {
        do
        {
            num = (rand() % rank) + ri;

        } while (busq_sec(vect, i, num) > -1);

        vect[i] = num;
    }
}
/*******************************************************************/
void llenar_mat(int mat[][4], int n, int m)
{
    int i, j, k = 0, matri[n * m];
    llenar_vect(matri, n * m, 1, 16);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat[i][j] = matri[k++];
        }
    }
}
/*******************************************************************/
void imprimir_vect(int vect[], int m, char msg[])
{
    printf("-%s-\n", msg);
    for (int i = 0; i < m; i++)
    {
        printf("%2d - [%d]\n", i, vect[i]);
    }
}
/*******************************************************************/
void imprimir_mat(int mat[][4], int n, int m, char msg[])
{
    printf("-%s-\n", msg);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%c", 218);
        }
        else
        {
            if (i == n - 1)
            {
                printf("%c", 192);
            }
            else
            {
                printf("%c", 179);
            }
        }

        for (int j = 0; j < m; j++)
        {
            printf(" %2d ", mat[i][j]);
        }

        if (i == 0)
        {
            printf("%c\n", 191);
        }
        else
        {
            if (i == n - 1)
            {
                printf("%c\n", 217);
            }
            else
            {
                printf("%c\n", 179);
            }
        }
    }
}
/*******************************************************************/
void ordenar(int vect[], int m)
{
    imprimir_vect(vect, m, "Vector desordenado");
    burbuja_sort(vect, m);
    imprimir_vect(vect, m, "Vector ordenado");
}
/*******************************************************************/
void buscar(int vect[], int m, int band)
{
    int num, aux;

    num = valida_num(100, 200, "Que numero quieres buscar: ");
    if (band == 0)
    {
        aux = busq_sec(vect, m, num);
    }
    else
    {
        aux = busq_bin(vect, m, num);
    }

    if (aux > -1)
    {
        printf("El numero %d esta en la posicion %d del vector\n", num, aux);
    }
    else
    {
        printf("El numero %d no esta en el vector\n", num);
    }
}