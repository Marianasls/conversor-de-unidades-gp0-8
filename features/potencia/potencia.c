#include <stdio.h>
#include <features/potencia/potencia.h>

void conversao_potencia(int escolha)
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
        printf("Digite o valor em W:\n");
        scanf("%f", &valor);
        resultado = valor / 1000; // W para kW
        printf("O valor convertido é: %.2f kW\n", resultado);
    }
    else if (escolha == 2)
    {
        printf("Digite o valor em W:\n");
        scanf("%f", &valor);
        resultado = valor / 735.5; // W para CV (1 CV = 735.5 W)
        printf("O valor convertido é: %.2f CV\n", resultado);
    }
    else if (escolha == 3)
    {
        printf("Digite o valor em kW:\n");
        scanf("%f", &valor);
        resultado = valor * 1000; // kW para W
        printf("O valor convertido é: %.2f W\n", resultado);
    }
    else if (escolha == 4)
    {
        printf("Digite o valor em kW:\n");
        scanf("%f", &valor);
        resultado = valor * 1356; // kW para CV (1 kW = 1.356 CV)
        printf("O valor convertido é: %.2f CV\n", resultado);
    }
    else if (escolha == 5)
    {
        printf("Digite o valor em CV:\n");
        scanf("%f", &valor);
        resultado = valor * 735.5; // CV para W
        printf("O valor convertido é: %.2f W\n", resultado);
    }
    else if (escolha == 6)
    {
        printf("Digite o valor em CV:\n");
        scanf("%f", &valor);
        resultado = valor / 1.356; // CV para kW
        printf("O valor convertido é: %.2f kW\n", resultado);
    }
}
