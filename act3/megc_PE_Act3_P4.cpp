/************************************************************/
/*Mario Guerrier                                            */
/*15 de febrero de 2026                                     */
/*megc_PE_Act3_P4                                           */
/*Programa que compara numeros y da el numero de enmedio    */
/************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Escribe el primer numero:\n");
    scanf("%d", &num1);
    printf("Escribe el segundo numero:\n");
    scanf("%d", &num2);
    printf("Escribe el tercer numero:\n");
    scanf("%d", &num3);

    if (num2 >= num1)
    {
        if (num2 <= num3)
        {
            printf("El numero de en medio es: %d", num2);
        }
        else
        {
            if (num3 >= num2)
            {
                printf("El numero de en medio es: %d", num3);
            }
            else
            {
                printf("El numero de en medio es: %d", num1);
            }
            
        }
    }
    else
    {
        if (num1 <= num3)
        {
            printf("El numero de en medio es: %d", num1);
        }
        else
        {
            if (num3 >= num1)
            {
                printf("El numero de en medio es: %d", num3);
            }
            else
            {
                printf("El numero de en medio es: %d", num2);
            }
            
            
        }
    }

    return 0;
}