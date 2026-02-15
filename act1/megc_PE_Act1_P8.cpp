#include  <stdio.h>

int main()
{
    int num, i;

    printf("Introduce un numero un numero: ");
    scanf("%d", &num);

    for(i=0; i<10; i++){
        printf("\n%d * %d = %d", num, i+1, num*(i+1));
    }
    
    return 0;
}