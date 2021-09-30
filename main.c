#include <studio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int num;
    char binario[100];

    printf("Ingresa un número entero en base 10: /n");
    scanf("%d", &num);
    //binario = conv_decimal_binario(num);
    strcpy(binario, conv_binario_decimal(num));
    printf("Su equivalencia en binario es %s/n", binario);

    printf("Ingresa un número entero en base 2: /n");
    scanf("%s", &binario);
    num = conv_decimal_binario(binario);
    strcpy(binario, conv_binario_decimal(num));
    printf("Su equivalencia en binario es %s/n", binario);
}