<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int num[7], i, j, aux;

    for (i = 0; i < 7; i++)
    {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (num[j] > num[j + 1])
            {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }

    printf("El numero mayor es %d y el menor es %d", num[0], num[6]);

    return 0;
=======
#include <stdio.h>

int main()
{
    int num[7], i, j, aux;

    for (i = 0; i < 7; i++)
    {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (num[j] > num[j + 1])
            {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }

    printf("El numero mayor es %d y el menor es %d", num[0], num[6]);

    return 0;
>>>>>>> 22952f51de080bd5661731485ee44fec6703c2eb
}