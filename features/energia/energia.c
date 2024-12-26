#include <stdio.h>
#include <features/energia/energia.h>

// conversor de energia
void conversao_energia(int escolha)
{
    float valor, resultado = 0;

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &valor);

    // Realizando a conversão
    switch (escolha)
    {
    case 1: // J --> kJ
        resultado = valor / 1000;
        printf("%.3f Joules equivalem a %.3f Quilojoules.\n", valor, resultado);
        break;
    case 2: // J --> cal
        resultado = valor / 4.184;
        printf("%.3f Joules equivalem a %.3f Calorias.\n", valor, resultado);
        break;
    case 3: // kJ --> J
        resultado = valor * 1000;
        printf("%.3f Quilojoules equivalem a %.3f Joules.\n", valor, resultado);
        break;
    case 4: // kJ --> kcal
        resultado = valor / 4.184;
        printf("%.3f Quilojoules equivalem a %.3f Kilocalorias.\n", valor, resultado);
        break;
    case 5: // cal --> J
        resultado = valor * 4.184;
        printf("%.3f Calorias equivalem a %.3f Joules.\n", valor, resultado);
        break;
    case 6: // kcal --> kJ
        resultado = valor * 4.184;
        printf("%.3f Kilocalorias equivalem a %.3f Quilojoules.\n", valor, resultado);
        break;
    }
}
