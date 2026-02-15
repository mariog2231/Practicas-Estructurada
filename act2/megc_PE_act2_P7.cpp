/**********************************************/
/*Mario Guerrier                              */
/*05 de febrero de 2026                       */
/*megc_PE_act2_P7                             */
/*Programa que es una calculadora basica      */
/**********************************************/
#include <stdio.h>

int main()
{
    int opc, num1, num2;

    printf("Introduce el primer numero entero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero entero: ");
    scanf("%d", &num2);

    printf("1.-Suma\n");
    printf("2.-Resta\n");
    printf("3.-Multiplicacion\n");
    printf("4.-Division\n");
    printf("Elige una operacion: ");
    scanf("%d", &opc);

    if (opc == 1)
    {
        printf("La suma %d + %d = %d", num1, num2, num1 + num2);
    }
    else
    {
        if (opc == 2)
        {
            printf("La resta %d - %d = %d", num1, num2, num1 - num2);
        }
        else
        {
            if (opc == 3)
            {
                printf("La multiplicacion %d * %d = %d", num1, num2, num1 * num2);
            }
            else
            {
                if (num2 =! 0)
                {
                    printf("La division %d / %d = %d", num1, num2, num1 / num2);
                }
                else
                {
                    printf("No puedes dividir numeros entre CERO...");
                }
            }
        }
    }

    return 0;
}