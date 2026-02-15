#include <stdio.h>

#define PI 3.1416

int main()
{
    int r, h;

    printf("Introduce el radio del cilindro: ");
    scanf("%d", &r);
    printf("Introduce la altura del cilindro: ");
    scanf("%d", &h);

    printf("La altura del cilindro es de %f", float(PI * (r*r) * h));

    return 0;
}