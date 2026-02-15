/**********************************************/
/*Mario Guerrier                              */
/*05 de febrero de 2026                       */
/*megc_PE_act2_P9                             */
/*Programa que calcula las horas de llamada   */
/**********************************************/
#include <stdio.h>

int main()
{

    int min, tipo, sub_tot;
    float iva, tot;

    printf("Cuantos minutos fueron de llamada: ");
    scanf("%d", &min);
    ;
    printf("1-local \n2-nacional \n3-internacional \nLa llamada de que tipo fue: ");
    scanf("%d", &tipo);

    switch (tipo)
    {
        case 1:
            sub_tot = min * 3;
            break;
        case 2:
            if (min > 3)
            {
                sub_tot = (21) + ((min - 3) * 2);
            }
            else
            {
                if (min <= 3)
                {
                    sub_tot = min * 7;
                }
            }
            break;
        case 3:
            if (min > 2)
            {
                sub_tot = (18) + ((min - 2) * 4);
            }
            else
            {
                if (min <= 2)
                {
                    sub_tot = min * 9;
                }
            }
            break;
        default:
            printf("Opcion no valida");
            break;
    }

    iva = float(sub_tot * .16);
    tot = float(sub_tot + iva);

    printf("Subtotal: $%d\n", sub_tot);
    printf("I.V.A: $%.2f\n", iva);
    printf("Total: %.2f", tot);

    return 0;
}