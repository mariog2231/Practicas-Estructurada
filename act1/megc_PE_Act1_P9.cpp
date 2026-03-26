<<<<<<< HEAD
#include <stdio.h>

int main()
{
    char gen[25];
    int edad[25], i, h = 0, m = 0;

    for (i = 0; i < 25; i++)
    {
        printf("Cual es la edad del alumno %d: ", i + 1);
        scanf("%d", &edad[i]);
        fflush(stdin);
        printf("Cual es el genero del alumn@ %d: ", i + 1);
        scanf("%c", &gen[i]);

        if (gen[i] == 'm')
        {
            m++;
        }
        else
        {
            h++;
        }
    }

    printf("Hay %d cantidad de alumnas mujer", m);
    printf("\nHay %d cantidad de alumnos hombre", h);

    return 0;
=======
#include <stdio.h>

int main()
{
    char gen[25];
    int edad[25], i, h = 0, m = 0;

    for (i = 0; i < 25; i++)
    {
        printf("Cual es la edad del alumno %d: ", i + 1);
        scanf("%d", &edad[i]);
        fflush(stdin);
        printf("Cual es el genero del alumn@ %d: ", i + 1);
        scanf("%c", &gen[i]);

        if (gen[i] == 'm')
        {
            m++;
        }
        else
        {
            h++;
        }
    }

    printf("Hay %d cantidad de alumnas mujer", m);
    printf("\nHay %d cantidad de alumnos hombre", h);

    return 0;
>>>>>>> 22952f51de080bd5661731485ee44fec6703c2eb
}