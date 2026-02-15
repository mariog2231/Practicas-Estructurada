/**********************************************/
/*Mario Guerrier                              */
/*05 de febrero de 2026                       */
/*megc_PE_act2_P1                             */
/*Programa que calcula el area y perimetro    */
/**********************************************/
#include <stdio.h>

int main()
{
    int l, a;

    printf("Introduce el largo del terreno: ");
    scanf("%d", &l);
    printf("Introduce el ancho del terreno: ");
    scanf("%d", &a);

    if (l > 0)
    {
        if (a > 0)
        {
            printf("El costo por todo el pasto sera $%.2f\n", float((l * a) * 35.40));
            printf("Y se necesitan %d metros de alambre", (l * 2) + (a * 2));
        }
        else
        {
            printf("LAS MEDIDAS DEL TERRENO DEBEN SON INCORRECTAS...");
        }
        
    }
    else
    {
        printf("LAS MEDIDAS DEL TERRENO DEBEN SON INCORRECTAS...");
    }

    return 0;
}