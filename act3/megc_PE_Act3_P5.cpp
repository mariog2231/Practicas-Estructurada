/****************************************************/
/*Mario Guerrier                                    */
/*15 de febrero de 2026                             */
/*megc_PE_Act3_P5                                   */
/*Programa que calcula promedio y arroja mensaje    */
/****************************************************/
#include <stdio.h>

int main()
{

    int cal1, cal2, cal3;
    float prom;

    printf("Ingresa la primera calificacion: ");
    scanf("%d", &cal1);
    printf("Ingresa la segunda calificacion: ");
    scanf("%d", &cal2);
    printf("Ingresa la tercera calificacion: ");
    scanf("%d", &cal3);

    prom = float((cal1 + cal2 + cal3) / 3);

    if (prom < 80)
    {
        if (prom < 60)
        {
            if (prom < 30)
            {
                printf("REPETIR");
            }
            else
            {
                printf("EXTRA");
            }
        }
        else
        {
            if (prom >= 70)
            {
                printf("REGULAR");
            }
            else
            {
                printf("SUFICIENTE");
            }
        }
    }
    else
    {
        if (prom < 98)
        {
            if (prom > 90)
            {
                printf("MUY BIEN");
            }
        }
        else
        {
            if (prom <= 100)
            {
                printf("EXCELENTE");
            }
            else
            {
                printf("ERROR EN PROMEDIO");
            }
        }
    }

    return 0;
}