/***
 * Programa conversor de unidades.
*/
#include <stdio.h>
void conversao_velocidade();
void conversao_potencia();

int main () {
 
    return 0;
}

void conversao_velocidade() {
    int escolha;
    float valor, resultado;

    printf("CONVERSAO DE VELOCIDADE\n\n");
    printf("[1] KM/H --> M/S\n[2] KM/H --> MPH\n");
    printf("[3] M/S --> KM/H\n[4] M/S --> MPH\n");
    printf("[5] MPH --> KM/H\n[6] MPH --> M/S\n");
    scanf("%d", &escolha);

    // Validando a opção
    while (escolha < 1 || escolha > 6) {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }

    // Conversão
    if (escolha == 1) {
        printf("Digite o valor em KM/H:\n");
        scanf("%f", &valor);
        resultado = valor / 3.6;  // KM/H para M/S
        printf("O valor convertido é: %.2f M/S\n", resultado);
    } else if (escolha == 2) {
        printf("Digite o valor em KM/H:\n");
        scanf("%f", &valor);
        resultado = valor / 1.609;  // KM/H para MPH
        printf("O valor convertido é: %.2f MPH\n", resultado);
    } else if (escolha == 3) {
        printf("Digite o valor em M/S:\n");
        scanf("%f", &valor);
        resultado = valor * 3.6;  // M/S para KM/H
        printf("O valor convertido é: %.2f KM/H\n", resultado);
    } else if (escolha == 4) {
        printf("Digite o valor em M/S:\n");
        scanf("%f", &valor);
        resultado = valor * 2.237;  // M/S para MPH
        printf("O valor convertido é: %.2f MPH\n", resultado);
    } else if (escolha == 5) {
        printf("Digite o valor em MPH:\n");
        scanf("%f", &valor);
        resultado = valor * 1.609;  // MPH para KM/H
        printf("O valor convertido é: %.2f KM/H\n", resultado);
    } else if (escolha == 6) {
        printf("Digite o valor em MPH:\n");
        scanf("%f", &valor);
        resultado = valor / 2.237;  // MPH para M/S
        printf("O valor convertido é: %.2f M/S\n", resultado);
    }
}

void conversao_potencia() {
    int escolha;
    float valor, resultado;

    printf("CONVERSAO DE POTENCIA\n\n");
    printf("[1] W --> kW\n[2] W --> CV\n");
    printf("[3] kW --> W\n[4] kW --> CV\n");
    printf("[5] CV --> W\n[6] CV --> kW\n");
    scanf("%d", &escolha);

    // Validando a opção
    while (escolha < 1 || escolha > 6) {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }

    // Conversão
    if (escolha == 1) {
        printf("Digite o valor em W:\n");
        scanf("%f", &valor);
        resultado = valor / 1000;  // W para kW
        printf("O valor convertido é: %.2f kW\n", resultado);
    } else if (escolha == 2) {
        printf("Digite o valor em W:\n");
        scanf("%f", &valor);
        resultado = valor / 735.5;  // W para CV (1 CV = 735.5 W)
        printf("O valor convertido é: %.2f CV\n", resultado);
    } else if (escolha == 3) {
        printf("Digite o valor em kW:\n");
        scanf("%f", &valor);
        resultado = valor * 1000;  // kW para W
        printf("O valor convertido é: %.2f W\n", resultado);
    } else if (escolha == 4) {
        printf("Digite o valor em kW:\n");
        scanf("%f", &valor);
        resultado = valor * 1356;  // kW para CV (1 kW = 1.356 CV)
        printf("O valor convertido é: %.2f CV\n", resultado);
    } else if (escolha == 5) {
        printf("Digite o valor em CV:\n");
        scanf("%f", &valor);
        resultado = valor * 735.5;  // CV para W
        printf("O valor convertido é: %.2f W\n", resultado);
    } else if (escolha == 6) {
        printf("Digite o valor em CV:\n");
        scanf("%f", &valor);
        resultado = valor / 1.356;  // CV para kW
        printf("O valor convertido é: %.2f kW\n", resultado);
    }
}