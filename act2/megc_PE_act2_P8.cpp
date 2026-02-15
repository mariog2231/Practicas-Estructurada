/**********************************************/
/*Mario Guerrier                              */
/*05 de febrero de 2026                       */
/*megc_PE_act2_P8                             */
/*Programa que juega pieda, papel y tijer     */
/**********************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opc1, opc2, num_jug, rnd;

    printf("Cuantos jugadores van a jugar: (1 o 2)\n");
    scanf("%d", &num_jug);

    if (num_jug == 1)
    {
        printf("Elije una opcion: 1-piedra 2-papel 3-tijera\n");
        scanf("%d", &opc1);

        rnd = (rand() % 3) + 1;

        if (opc1 == rnd)
        {
            printf("EMPATE");
        }
        else
        {
            if (opc1 == 1 && rnd == 2)
            {
                printf("PERDISTE");
            }
            else
            {
                if (opc1 == 1 && rnd == 3)
                {
                    printf("GANASTE");
                }
                else
                {
                    if (opc1 == 2 && rnd == 1)
                    {
                        printf("GANASTE");
                    }
                    else
                    {
                        if (opc1 == 2 && rnd == 3)
                        {
                            printf("PERDISTE");
                        }
                        else
                        {
                            if (opc1 == 3 && rnd == 1)
                            {
                                printf("PERDISTE");
                            }
                            else
                            {
                                if (opc1 == 3 && rnd == 2)
                                {
                                    printf("GANASTE");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if (num_jug == 2)
    {
        printf("Jugador 1 elige tu opcion: 1-piedra 2-papel 3-tijera\n");
        scanf("%d", &opc1);
        printf("Jugador 2 elige tu opcion: 1-piedra 2-papel 3-tijera\n");
        scanf("%d", &opc2);

        if (opc1 == opc2)
        {
            printf("EMPATE");
        }
        else
        {
            if (opc1 == 1 && opc2 == 2)
            {
                printf("GANA JUGADOR 2");
            }
            else
            {
                if (opc1 == 1 && rnd == 3)
                {
                    printf("GANA JUGADOR 1");
                }
                else
                {
                    if (opc1 == 2 && opc2 == 1)
                    {
                        printf("GANA JUGADOR 1");
                    }
                    else
                    {
                        if (opc1 == 2 && opc2 == 3)
                        {
                            printf("GANA JUGADOR 2");
                        }
                        else
                        {
                            if (opc1 == 3 && opc2 == 1)
                            {
                                printf("GANA JUGADOR 2");
                            }
                            else
                            {
                                if (opc1 == 3 && opc2 == 2)
                                {
                                    printf("GANA JUGADOR 1");
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}