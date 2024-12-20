/***
 * Programa conversor de unidades.
*/

#include <stdio.h>

void conversao_area(void);
void conversao_tempo(void);

int main () {

    return 0;
}

// Conversao das unidades km^2, m^2 e cm^2
void conversao_area(void){
    int escolha;
    float valor_inicial, valor_final;

    // Menu da funcao conversao de aea.
    printf("CONVERSAO DE AREA\n\n");
    printf("[1] km^2 --> m^2\n[2] km^2 --> cm^2\n");
    printf("[3] m^2 --> km^2\n[4] m^2 --> cm^2\n");
    printf("[5] cm^2 --> km^2\n[6] cm^2 --> m^2\n\n");
    scanf("%d", &escolha);

    // Teste de erro de escolha de opcao.
    while(escolha < 1 || escolha > 6){
        printf("\nOpcao inexistente. Tente novamente: ");
        scanf("%d", &escolha);
    }

    // Calculo da conversao de area.
    if(escolha <= 2){
        printf("\nValor a ser convertido (km^2): ");
    }else if(escolha <= 4){
        printf("\nValor a ser convertido (m^2): ");
    }else{
        printf("\nValor a ser convertido (cm^2): ");
    }
    scanf("%f", &valor_inicial);

    // Calculo da conversao e exibicao do resultado.
    switch(escolha){
        case 1: // km^2 --> m^2
            valor_final = valor_inicial * 1000000;
            printf("\n%.3f km^2 equivalem a %.3f m^2.\n", valor_inicial, valor_final);
            break;
        case 2: // km^2 --> cm^2
            valor_final = valor_inicial * 100000 * 100000;
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
            valor_final = valor_inicial / (100000 * 100000);
            printf("\n%.3f cm^2 equivalem a %.3f km^2.\n", valor_inicial, valor_final);
            break;
        case 6: // cm^2 --> m^2
            valor_final = valor_inicial / 10000;
            printf("\n%.3f cm^2 equivalem a %.3f m^2.\n", valor_inicial, valor_final);
            break;
    }
}

void conversao_tempo(void){
    int escolha;
    float valor_inicial, valor_final;

    // Menu e tratamento de erro da escolha.
    system("cls");
    printf("\nCONVERSAO DE TEMPO\n");
    printf("\t[1] - Segundo (s) --> Minuto (min)\n\t[2] - Segundo (s) --> Hora (h)\n");
    printf("\t[3] - Minuto (min) --> Segundo (s)\n\t[4] - Minuto (min) --> Hora (h)\n");
    printf("\t[5] - Hora (h) --> Segundo (s)\n\t[6] - Hora (h) --> Minuto (min)\n");
    printf("\n\tEscolha uma alternativa: ");
    scanf("%d", &escolha);
    while(escolha < 1 || escolha > 6){
        printf("\n\tOpcao inesistente. Tente novamente: ");
        scanf("%d", &escolha);
    }

    // Operacao selecionada conforme opcao escolhida no menu.
    system("cls");
    printf("\nCONVERSAO DE AREA\n");
    if(escolha <= 2){ // Opcao para a medida inicial sendo segundo (s).
        printf("\nDigite o valor do tempo em segundos (s): ");
    }else if(escolha <= 4){ // Opcao para medida inicial sendo minuto (min).
        printf("\nDigite o valor do tempo em minutos (min): ");
    }else{ // Opcao para medida inicial sendo hora (h).
        printf("\nDigite o valor do tempo em horas (h): ");
    }
    scanf("%f", &valor_inicial);

    // Calculo da conversao e exibicao do resultado.
    switch(escolha){
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
