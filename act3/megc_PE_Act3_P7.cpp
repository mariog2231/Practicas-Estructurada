/**********************************************************/
/*Mario Guerrier                                          */
/*15 de febrero de 2026                                   */
/*megc_PE_Act3_P7                                         */
/*Programa que calcula el promedio de 5 calificaciones    */
/**********************************************************/
#include <stdio.h>

int main()
{
    int cal[5] = {0}, men, sum = 0;
    float prom;

    for (int i = 0; i < 5; i++)
    {
        printf("Dame la calificacion %d: ", i+1);
        scanf("%d", &cal[i]);
        if (cal[i] < cal[i - 1])
        {
            men = cal[i];
        }
        sum += cal[i];
    }
    
    prom = float((sum - men) / 4);

    printf("El promedio final es %.2f", prom);

    return 0;
}