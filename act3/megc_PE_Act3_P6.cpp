/******************************************************/
/*Mario Guerrier                                      */
/*15 de febrero de 2026                               */
/*megc_PE_Act3_P6                                     */
/*Programa que calcula el recibo del cobro de agua    */
/******************************************************/
#include <stdio.h>

int main()
{
    int cant;

    printf("Cuanto se gasto de agua:\n");
    scanf("%d", &cant);

    if (cant > 15)
    {
        if (cant > 50)
        {
            printf("Subtotal: $%d\n", 11 * cant);
            printf("IVA(16%): $%.2f\n", float((11 * cant) * .16));
            printf("Total:    $%.2f\n", (cant * 11) + (50 * .16));
        }
        else
        {
            printf("Subtotal: $%d\n", 10 * cant);
            printf("IVA(16%): $%.2f\n", float((10 * cant) * .16));
            printf("Total:    $%.2f\n", (cant * 10) + ((cant * 10) * .16));
        }
    }
    else
    {
        if (cant < 5)
        {
            printf("Subtotal: $50.00\n");
            printf("IVA(16%): $%.2f\n", float(50 * .16));
            printf("Total:    $%.2f\n", (50) + (50 * .16));
        }
        else
        {
            printf("Subtotal: $%d\n", 8 * cant);
            printf("IVA(16%): $%.2f\n", float((8 * cant) * .16));
            printf("Total:    $%.2f\n", (cant * 8) + ((cant * 8) * .16));
        }
    }

    return 0;
}