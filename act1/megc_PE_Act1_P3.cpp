#include <stdio.h>

int main()
{
    int cal1, cal2, cal3;
    float prom;

    printf("Ingresa calificaion 1: ");
    scanf("%d", &cal1);
    printf("Ingresa calificaion 2: ");
    scanf("%d", &cal2);
    printf("Ingresa calificaion 3: ");
    scanf("%d", &cal3);

    prom = float((cal1 + cal2 + cal3) / 3);

    if (prom >= 80)
    {
        if (prom < 90)
        {
            printf("Bien");
        }
        else
        {
            if (prom < 98)
            {
                printf("Muy bien");
            }
            else
            {
                if (prom <= 100)
                {
                    printf("Excelente");
                }
                else
                {
                    printf("Error de promedio");
                }
            }
        }
    }

    else
    {
        if (prom >= 70)
        {
            printf("bien");
        }
        else
        {
            if (prom >= 60)
            {
                printf("Suficiente");
            }
            else
            {
                if (prom > 30)
                {
                    printf("Extraordinario");
                }
                else
                {
                    printf("Repetir");
                }
            }
        }
    }

    return 0;
}