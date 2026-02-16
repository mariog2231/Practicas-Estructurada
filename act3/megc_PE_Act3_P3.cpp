/************************************************/
/*Mario Guerrier                                */
/*15 de febrero de 2026                         */
/*megc_PE_Act3_P3                               */
/*Programa que compara numeros y da el mayor    */
/************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Introduce el primer numero:\n");
    scanf("%d", &num1);
    printf("Introduce el segundo numero:\n");
    scanf("%d", &num2);
    printf("Introduce el tercer numero:\n");
    scanf("%d", &num3);

    if (num3 >= num2)
    {
        if (num3 >= num1)
        {
            printf("El numero mayor: %d", num3);
        }
        else
        {
            printf("El numero mayor: %d", num1);
        }
    }
    else
    {
        if (num2 >= num1)
        {
            printf("El numero mayor es: %d", num2);
        }
        else
        {
            printf("El numero mayor es: %d", num1);
        }
    }

    return 0;
}