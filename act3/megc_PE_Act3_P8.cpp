/***********************************************/
/*Mario Guerrier                               */
/*15 de febrero de 2026                        */
/*megc_PE_Act3_P8                              */
/*Programa que simula, piedra papel y tijera   */
/***********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opc, rnd;

    printf("Elije una opcion: 1-piedra 2-papel 3-tijera\n");
    scanf("%d", &opc);

    srand(time(NULL));
    rnd = (rand() % 3) + 1;

    if (opc == rnd)
    {
        printf("EMPATE");
    }
    else
    {
        if (opc == 1)
        {
            if (rnd == 2)
            {
                printf("GANA MAQUINA");
            }
            else
            {
                printf("GANA JUGADOR");
            }
        }
        else
        {
            if (opc == 2)
            {
                if (rnd == 1)
                {
                    printf("GANA JUGADOR");
                }
                else
                {
                    printf("GANA MAQUINA");
                }
            }
            else
            {
                if (opc == 1)
                {
                    printf("GANA MAQUINA");
                }
                else
                {
                    printf("GANA JUGADOR");
                }
            }
        }
    }

    return 0;
}