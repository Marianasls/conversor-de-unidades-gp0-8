#include <stdio.h>
#include <features/tempo/tempo.h>

void conversao_tempo(int escolha)
{
    float valor_inicial, valor_final;

    // Operacao selecionada conforme opcao escolhida no menu.
    printf("\nCONVERSAO DE AREA\n");
    if (escolha <= 2)
    { // Opcao para a medida inicial sendo segundo (s).
        printf("\nDigite o valor do tempo em segundos (s): ");
    }
    else if (escolha <= 4)
    { // Opcao para medida inicial sendo minuto (min).
        printf("\nDigite o valor do tempo em minutos (min): ");
    }
    else
    { // Opcao para medida inicial sendo hora (h).
        printf("\nDigite o valor do tempo em horas (h): ");
    }
    scanf("%f", &valor_inicial);

    // Calculo da conversao e exibicao do resultado.
    switch (escolha)
    {
    case 1: // s --> min
        valor_final = valor_inicial / 60;
        printf("\n%.3f s equivalem a %.3f min\n", valor_inicial, valor_final);
        break;
    case 2: // s --> h
        valor_final = valor_inicial / 3600;
        printf("\n%.3f s equivalem a %.3f h\n", valor_inicial, valor_final);
        break;
    case 3: // min --> s
        valor_final = valor_inicial * 60;
        printf("\n%.3f min equivalem a %.3f s\n", valor_inicial, valor_final);
        break;
    case 4: // min --> h
        valor_final = valor_inicial / 60;
        printf("\n%.3f min equivalem a %.3f h\n", valor_inicial, valor_final);
        break;
    case 5: // h --> s
        valor_final = valor_inicial * 3600;
        printf("\n%.3f h equivalem a %.3f s\n", valor_inicial, valor_final);
        break;
    case 6: // h --> min
        valor_final = valor_inicial * 60;
        printf("\n%.3f h equivalem a %.3f min\n", valor_inicial, valor_final);
        break;
    }
}