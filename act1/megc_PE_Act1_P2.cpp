#include <stdio.h>

#define PREC 35.40

int main()
{
    int l, a;

    printf("Introduce el largo del terreno: ");
    scanf("%d", &l);
    printf("Introduce el ancho del terreno: ");
    scanf("%d", &a);

    printf("El costo por todo el pasto sera %.2f\n", float((l * a) * PREC));
    printf("Y se necesitan %d metros de alambre", (l * 2) + (a * 2));

    return 0;
}