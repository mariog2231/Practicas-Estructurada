#include <stdio.h>

int main()
{
    int num1, num2, num3, med;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero: ");
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