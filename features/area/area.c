#include <stdio.h>
#include <features/area/area.h>

// Conversao das unidades km^2, m^2 e cm^2
void conversao_area(int escolha)
{   
    float valor_inicial;
    double valor_final = 0;
    // Teste de erro de escolha de opcao.
    while (escolha < 1 || escolha > 6)
    {
        printf("\nOpcao inexistente. Tente novamente: ");
        scanf("%d", &escolha);
    }

    // Calculo da conversao de area.
    if (escolha <= 2)
    {
        printf("\nValor a ser convertido (km^2): ");
    }
    else if (escolha <= 4)
    {
        printf("\nValor a ser convertido (m^2): ");
    }
    else
    {
        printf("\nValor a ser convertido (cm^2): ");
    }
    scanf("%f", &valor_inicial);

    // Calculo da conversao e exibicao do resultado.
    const double dez_bilhoes = 1e10;
    switch (escolha)
    {
    case 1: // km^2 --> m^2
        valor_final = valor_inicial * 1000000;
        printf("\n%.3f km^2 equivalem a %.3f m^2.\n", valor_inicial, valor_final);
        break;
    case 2: // km^2 --> cm^2
        valor_final = valor_inicial * dez_bilhoes;
        printf("\n%.3f km^2 equivalem a %.3f cm^2.\n", valor_inicial, valor_final);
        break;
    case 3: // m^2 --> km^2
        valor_final = valor_inicial / 1000000;
        printf("\n%.3f m^2 equivalem a %.3f km^2.\n", valor_inicial, valor_final);
        break;
    case 4: // m^2 --> cm^2
        valor_final = valor_inicial * 10000;
        printf("\n%.3f m^2 equivalem a %.3f cm^2.\n", valor_inicial, valor_final);
        break;
    case 5: // cm^2 --> km^2
        valor_final = valor_inicial / dez_bilhoes;
        printf("\n%.3f cm^2 equivalem a %.3f km^2.\n", valor_inicial, valor_final);
        break;
    case 6: // cm^2 --> m^2
        valor_final = valor_inicial / 10000;
        printf("\n%.3f cm^2 equivalem a %.3f m^2.\n", valor_inicial, valor_final);
        break;
    }
}
