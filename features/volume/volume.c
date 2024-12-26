#include <stdio.h>
#include <features/volume/volume.h>

// conversao de volume
void conversao_volume(int escolha)
{
    float valor, resultado = 0;

    // validando opcao
    while (escolha < 1 || escolha > 6)
    {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }
    // conversao
    if (escolha <= 2)
    {
        printf("Digite o valor em litros:\n");
        scanf("%f", &valor);
        if (escolha == 1)
        {
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 2)
        {
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
    else if (escolha <= 4)
    {
        printf("Digite o valor em mililitros:\n");
        scanf("%f", &valor);
        if (escolha == 3)
        {
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 4)
        {
            resultado = valor / 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
    else
    {
        printf("Digite o valor em metros cubicos:\n");
        scanf("%f", &valor);
        if (escolha == 5)
        {
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 6)
        {
            resultado = valor * 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
}
