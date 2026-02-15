#include <stdio.h>

int main()
{
    int hrs, ext = 0;
    float sal, total;

    printf("Introduce las horas que trabajo el empleado: ");
    scanf("%d", &hrs);
    printf("Introduce el salario por hora: ");
    scanf("%f", &sal);

    if (hrs >= 40)
    {
        if ((hrs - 40) < 10)
        {
            ext = (hrs - 40) * 2;
        }
        else
        {
            ext = (hrs - 40) * 3;
        }
        total = float((40 + ext) * sal);
    }
    else
    {
        total = float(hrs * sal);
    }

    printf("El salario por hora es: $%.2f\n", sal);
    printf("Horas trabajadas:       %d\n", hrs);
    if (hrs >= 40)
    {
        printf("Salario normal:         $%.2f\n", float(40 * sal));
    }
    else
    {
        printf("Salario normal:         $%.2f\n", float(hrs * sal));
    }
    printf("Salario extra:          $%.2f\n", float(ext * sal));
    printf("Salario total:          $%.2f\n", total);

    return 0;
}