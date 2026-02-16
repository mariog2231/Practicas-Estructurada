/***************************************************/
/*Mario Guerrier                                   */
/*15 de febrero de 2026                            */
/*megc_PE_Act3_P1                                  */
/*Programa que funciona como calculadora basica    */
/***************************************************/
#include <stdio.h>

int main()
{
    int opc, num1, num2;

    printf("1.-Suma \n2.-Restas \n3.-Multiplicacion \n4.-Division \nQue operacion quieres realizar: ");
    scanf("%d", &opc);

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    switch (opc)
    {
        case 1:
            printf("La suma de %d y %d es %d", num1, num2, num1 + num2);
            break;
        case 2:
            printf("La resta de %d y %d es %d", num1, num2, num1 - num2);
            break;
        case 3:
            printf("La multiplicacion de %d y %d es %d", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0)
            {
                printf("La division de %d entre %d es %f", num1, num2, float(num1 / num2));
            }
            else
            {
                printf("No puedes dividir entre cero...");
            }
            break;
        default:
            printf("Opcion no valida...");
            break;
    }
    
    return 0;
}
