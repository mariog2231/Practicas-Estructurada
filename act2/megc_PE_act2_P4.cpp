/**********************************************/
/*Mario Guerrier                              */
/*05 de febrero de 2026                       */
/*megc_PE_act2_P4                             */
/*Programa que da el numero de enmedio de 3   */
/**********************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, med;

    printf("Introduce el numero 1: ");
    scanf("%d", &num1);
    printf("Introduce el numero 2: ");
    scanf("%d", &num2);
    printf("Introduce el numero 3: ");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num2 < num3)
        {
            med = num2;
        }
        else
        {
            if (num1 < num3)
            {
                med = num3;
            }
            else
            {
                med = num1;
            }
        }
    }
    else
    {
        if (num1 < num3)
        {
            med = num1;
        }
        else
        {
            if (num3 < num2)
            {
                med = num2;
            }
            else
            {
                med = num3;
            }
        }
    }

    printf("El numero de intermedio es el %d", med);

    return 0;
}