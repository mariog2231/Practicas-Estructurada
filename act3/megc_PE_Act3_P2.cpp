/**********************************************/
/*Mario Guerrier                              */
/*15 de febrero de 2026                       */
/*megc_PE_Act3_P2                             */
/*Programa que hace conversiones              */
/**********************************************/
#include <stdio.h>

#define IN 2.54
#define FT 30.48
#define MI 1.61

int main()
{
    int opc;
    float conv;

    printf("1-Centimetros a pulgadas\n");
    printf("2-Centimetros a pies\n");
    printf("3-Kilometros a millas\n");
    printf("4-Pulgadas a centimetros\n");
    printf("5-Pies a centimetros\n");
    printf("6-Milas a kilometros\n");
    printf("Que conversion quieres realizar:\n");
    scanf("%d", &opc);

    switch (opc)
    {
        case 1:
            printf("Cuantos centimetros quieres convertir: ");
            scanf("%f", &conv);
            printf("Hay %.2f pulgadas en %.2f cm", conv/IN, conv);
            break;
        case 2:
            printf("Cuantos centimetros quieres convertir: ");
            scanf("%f", &conv);
            printf("Hay %.2f pies en %.2f cm", conv/FT, conv);
            break;
        case 3:
            printf("Cuantos kilometros quieres convertir: ");
            scanf("%f", &conv);
            printf("Hay %.2f millas en %.2f kilometros", conv/MI, conv);
            break;
        case 4: 
            printf("Cuantas pulgadas quieres convetir: ");
            scanf("%f", &conv);
            printf("Hay %.2f cm en %.2f pulgadas", conv*IN, conv);
            break;
        case 5: 
            printf("Cuantos pies quieres convertir: ");
            scanf("%f", &conv);
            printf("Hay %.2f cm en %.2f pies", conv*FT, conv);
            break;
        case 6: 
            printf("Cuantos millas quieres convertir: ");
            scanf("%f", &conv);
            printf("Hay %.2f km en %.2f millas", conv*MI, conv);
            break;
        default: 
            printf("OPCION NO VALIDA");
            break;
    }

    return 0;
}