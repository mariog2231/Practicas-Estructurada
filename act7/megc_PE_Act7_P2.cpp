/*******************************************************************/
/*Mario Guerrier                                                   */
/*15 de marzo de 2026                                              */
/*megc_PE_Act7_P2                                                  */
/*Programa que da diferentes formatos a cadenas                    */
/*******************************************************************/
#include "my_string.h"

int main()
{
    int cant;
    char cadena[30], inversa[30], no_esp[30];

    printf("Escribe una cadena: ");
    my_gets(cadena, 30);
    
    system("CLS");
    printf("Cadena original:   %s\n", cadena);
    mayusculas(cadena);
    printf("Longitud:          %d\n", contar(cadena));
    printf("MAYUSCULAS:        %s\n", cadena);
    minusculas(cadena);
    printf("minusculas:        %s\n", cadena);
    capital(cadena);
    printf("Capital:           %s\n", cadena);
    invertir(cadena, inversa);
    printf("Invertida:         %s\n", inversa);
    sin_espacios(cadena, no_esp);
    printf("Sin espacios:      %s\n", no_esp);
    system("PAUSE");

    return 0;
}