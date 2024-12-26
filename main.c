/***
 * Programa conversor de unidades.
 */
#include <stdio.h>
// inclusão dos cabeçalhos com as funções de conversão.
#include <features/area/area.h>
#include <features/comprimento/comprimento.h>
#include <features/energia/energia.h>
#include <features/massa/massa.h>
#include <features/potencia/potencia.h>
#include <features/temperatura/temperatura.h>
#include <features/tempo/tempo.h>
#include <features/velocidade/velocidade.h>
#include <features/volume/volume.h>
#include <features/dados/dados.h>

void valida_escolha(int escolha, int max){
    // tratamento de erro da escolha do menu.
    while (escolha < 1 || escolha > max)
    {
        printf("\n\tOpcao inesistente. Tente novamente: ");
        scanf("%d", &escolha);
    }
}

int main()
{
    int tarefa, opcao;
    // menu inicial
    do
    {
        printf("Bem vindo ao Conversor de Unidade Embarcatech.\n\n");
        printf("digite o numero da opcao desejada:\n");
        printf("1. Unidades de comprimento (metro, centímetro, milímetro)\n");
        printf("2. Unidades de massa (quilograma, grama, tonelada\n");
        printf("3. Unidades de volume (litro, mililitro, metros cúbicos\n");
        printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin\n");
        printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
        printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
        printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n");
        printf("8. Unidades de tempo (segundos, minutos, horas)\n");
        printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
        printf("10. Unidades de energia (Joules, Quilojoules, Calorias, Kilocalorias)\n");
        scanf("%d", &tarefa);

        // validando opcao
        valida_escolha(tarefa, 10);

        int origem, destino, escolha;

        // chamando funcoes
        switch (tarefa)
        {
        case 1:
            printf("CONVERSAO DE COMPRIMETO\n\n");
            printf("[1] METROS --> CENTIMENTRO\n[2] METROS --> MILIMETROS\n");
            printf("[3] CENTIMETRO --> METROS\n[4] CENTIMETROS --> MILIMETROS\n");
            printf("[5] MILIMETROS --> METROS\n[6] MILIMETROS --> CENTIMETROS\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_comprimento(escolha);
            break;
        case 2:
            printf("CONVERSAO DE MASSA\n\n");
            printf("[1] QUILOGRAMA --> GRAMA\n[2] QUILOGRAMA --> TONELADA\n");
            printf("[3] GRAMA --> QUILOGRAMA\n[4] GRAMA --> TONELADA\n");
            printf("[5] TONELADA --> QUILOGRAMA\n[6] TONELADA --> GRAMA\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_massa(escolha);
            break;
        case 3:
            printf("CONVERSAO DE VOLUME\n\n");
            printf("[1] LITRO --> MILILITRO\n[2] LITRO --> METRO CUBICO\n");
            printf("[3] MILILITRO --> LITRO\n[4] MILILITRO --> METRO CUBICO\n");
            printf("[5] METRO CUBICO --> LITRO\n[6] METRO CUBICO --> MILILITRO\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_volume(escolha);
            break;
        case 4:
            printf("Escolha a temperatura de origem:\n");
            printf("1 - Celsius\n");
            printf("2 - Fahrenheit\n");
            printf("3 - Kelvin\n");
            printf("Digite o numero correspondente: ");
            scanf("%d", &origem);
            valida_escolha(origem, 3);

            printf("Escolha a temperatura para converter:\n");
            printf("1 - Celsius\n");
            printf("2 - Fahrenheit\n");
            printf("3 - Kelvin\n");
            printf("Digite o numero correspondente: ");
            scanf("%d", &destino);
            valida_escolha(destino, 3);
            conversao_temperatura(origem, destino);
            break;
        case 5:
            printf("CONVERSAO DE VELOCIDADE\n\n");
            printf("[1] KM/H --> M/S\n[2] KM/H --> MPH\n");
            printf("[3] M/S --> KM/H\n[4] M/S --> MPH\n");
            printf("[5] MPH --> KM/H\n[6] MPH --> M/S\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_velocidade(escolha);
            break;
        case 6:
            printf("CONVERSAO DE POTENCIA\n\n");
            printf("[1] W --> kW\n[2] W --> CV\n");
            printf("[3] kW --> W\n[4] kW --> CV\n");
            printf("[5] CV --> W\n[6] CV --> kW\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_potencia(escolha);
            break;
        case 7:
            printf("CONVERSAO DE AREA\n\n");
            printf("[1] km^2 --> m^2\n[2] km^2 --> cm^2\n");
            printf("[3] m^2 --> km^2\n[4] m^2 --> cm^2\n");
            printf("[5] cm^2 --> km^2\n[6] cm^2 --> m^2\n\n");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_area(escolha);
            break;
        case 8:
            printf("\nCONVERSAO DE TEMPO\n");
            printf("\t[1] - Segundo (s) --> Minuto (min)\n\t[2] - Segundo (s) --> Hora (h)\n");
            printf("\t[3] - Minuto (min) --> Segundo (s)\n\t[4] - Minuto (min) --> Hora (h)\n");
            printf("\t[5] - Hora (h) --> Segundo (s)\n\t[6] - Hora (h) --> Minuto (min)\n");
            printf("\n\tEscolha uma alternativa: ");
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_tempo(escolha);
            break;
        case 9:
            printf("CONVERSAO DE MEDIDAS DE DADOS\n\n");
        case 10:
            printf("CONVERSAO DE ENERGIA\n\n");
            printf("[1] Joules (J) --> Quilojoules (kJ)\n");
            printf("[2] Joules (J) --> Calorias (cal)\n");
            printf("[3] Quilojoules (kJ) --> Joules (J)\n");
            printf("[4] Quilojoules (kJ) --> Kilocalorias (kcal)\n");
            printf("[5] Calorias (cal) --> Joules (J)\n");
            printf("[6] Kilocalorias (kcal) --> Quilojoules (kJ)\n");

            // Lendo a escolha do usuário
            scanf("%d", &escolha);
            valida_escolha(escolha, 6);
            conversao_energia(escolha);
            break;
        }

        // perguntando se deseja realizar outra conversao
        printf("Deseja realizar outra conversao? [1] SIM [2] NAO\n");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("Obrigado por utilizar o Conversor de Unidade Embarcatech.\n");

    return 0;
}
