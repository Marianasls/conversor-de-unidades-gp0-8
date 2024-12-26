#include <stdio.h>
#include <features/velocidade/velocidade.h>

void conversao_velocidade(int escolha)
{
    float valor, resultado;

    // Validando a opção
    while (escolha < 1 || escolha > 6)
    {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }

    // Conversão
    if (escolha == 1)
    {
        printf("Digite o valor em KM/H:\n");
        scanf("%f", &valor);
        resultado = valor / 3.6; // KM/H para M/S
        printf("O valor convertido é: %.2f M/S\n", resultado);
    }
    else if (escolha == 2)
    {
        printf("Digite o valor em KM/H:\n");
        scanf("%f", &valor);
        resultado = valor / 1.609; // KM/H para MPH
        printf("O valor convertido é: %.2f MPH\n", resultado);
    }
    else if (escolha == 3)
    {
        printf("Digite o valor em M/S:\n");
        scanf("%f", &valor);
        resultado = valor * 3.6; // M/S para KM/H
        printf("O valor convertido é: %.2f KM/H\n", resultado);
    }
    else if (escolha == 4)
    {
        printf("Digite o valor em M/S:\n");
        scanf("%f", &valor);
        resultado = valor * 2.237; // M/S para MPH
        printf("O valor convertido é: %.2f MPH\n", resultado);
    }
    else if (escolha == 5)
    {
        printf("Digite o valor em MPH:\n");
        scanf("%f", &valor);
        resultado = valor * 1.609; // MPH para KM/H
        printf("O valor convertido é: %.2f KM/H\n", resultado);
    }
    else if (escolha == 6)
    {
        printf("Digite o valor em MPH:\n");
        scanf("%f", &valor);
        resultado = valor / 2.237; // MPH para M/S
        printf("O valor convertido é: %.2f M/S\n", resultado);
    }
}
