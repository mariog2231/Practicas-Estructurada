/*************************************************/
/*Mario Guerrier                                 */
/*05 de febrero de 2026                          */
/*megc_PE_act2_P6                                */
/*Programa que calcula el numero mayor y menor   */
/*************************************************/
#include <stdio.h>

int main()
{
    int num[7], i, j, aux;

    for (i=0; i<7; i++) {
        printf("Introduce el numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i=0; i<7; i++) {
        for(j=0; j<7; j++){
            if (num[j]>num[j+1]){
                aux= num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }

    printf("El numero mayor es %d y el menor es %d", num[0], num[6]);
    
    return 0;

    return 0;
}