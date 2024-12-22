/***
 * Programa conversor de unidades.
*/
#include <stdio.h>

// declaracao das funcoes de conversao de unidades
void conversao_comprimento();
void conversao_massa();
void conversao_volume();
void conversao_temperatura();
void conversao_velocidade();
void conversao_potencia();
void conversao_tempo();

// funcoes para conversao de temperatura
float celsius_to_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float celsius_to_kelvin(float c) {
    return c + 273.15;
}

float fahrenheit_to_celsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float fahrenheit_to_kelvin(float f) {
    return celsius_to_kelvin(fahrenheit_to_celsius(f));
}

float kelvin_to_celsius(float k) {
    return k - 273.15;
}

float kelvin_to_fahrenheit(float k) {
    return celsius_to_fahrenheit(kelvin_to_celsius(k));
}

void convert_seconds(int total_seconds, int *days, int *hours, int *minutes, int *seconds) {
    // Calcula dias, horas, minutos e segundos restantes
    *days = total_seconds / 86400;         // Um dia tem 86400 segundos
    *hours = (total_seconds % 86400) / 3600;  // Uma hora tem 3600 segundos
    *minutes = (total_seconds % 3600) / 60;  // Um minuto tem 60 segundos
    *seconds = total_seconds % 60;           // Segundos restantes
}

int main() {
    int tarefa, opcao;
    //menu inicial
    do {
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
        scanf("%d", &tarefa);

        //validando opcao
        while(tarefa < 1 || tarefa > 9) {
            printf("Opcao invalida, digite novamente:\n");
            scanf("%d", &tarefa);
        }

        //chamando funcoes
        switch (tarefa) {  
            case 1: 
                conversao_comprimento();
                break; 
            case 2: 
                conversao_massa();
                break; 
            case 3: 
                conversao_volume();
                break;
            case 4: 
                conversao_temperatura();
                break;
            case 5:
                conversao_velocidade();
                break;
            case 6:
                conversao_potencia();
                break;
            case 8:
                conversao_tempo();
                break;
        }

        //perguntando se deseja realizar outra conversao 
        printf("Deseja realizar outra conversao? [1] SIM [2] NAO\n");
        scanf("%d", &opcao);
    } while(opcao == 1); 

    printf("Obrigado por utilizar o Conversor de Unidade Embarcatech.\n");

    return 0;
}

void conversao_tempo() {
    int total_seconds; // Variável para entrada do usuário
    int days, hours, minutes, seconds;

    // Solicita entrada do usuário
    printf("Digite o total de segundos: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Erro: Por favor, insira um número inteiro positivo.\n");
        return;
    }

    // Realiza a conversão
    convert_seconds(total_seconds, &days, &hours, &minutes, &seconds);

    // Exibe o resultado
    printf("Resultado: %d dias, %d horas, %d minutos, %d segundos\n", days, hours, minutes, seconds);
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

void conversao_temperatura() {
    int origem, destino;
    float valor, resultado;

    printf("Escolha a temperatura de origem:\n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("3 - Kelvin\n");
    printf("Digite o numero correspondente: ");
    scanf("%d", &origem);

    printf("Escolha a temperatura para converter:\n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("3 - Kelvin\n");
    printf("Digite o numero correspondente: ");
    scanf("%d", &destino);

    printf("Digite o valor da temperatura de origem: ");
    scanf("%f", &valor);

    switch (origem) {
        case 1: // Celsius
            switch (destino) {
                case 1:
                    resultado = valor;
                    break;
                case 2:
                    resultado = celsius_to_fahrenheit(valor);
                    break;
                case 3:
                    resultado = celsius_to_kelvin(valor);
                    break;
                default:
                    printf("Opção de destino inválida.\n");
                    return;
            }
            break;

        case 2: // Fahrenheit
            switch (destino) {
                case 1:
                    resultado = fahrenheit_to_celsius(valor);
                    break;
                case 2:
                    resultado = valor;
                    break;
                case 3:
                    resultado = fahrenheit_to_kelvin(valor);
                    break;
                default:
                    printf("Opção de destino inválida.\n");
                    return;
            }
            break;

        case 3: // Kelvin
            switch (destino) {
                case 1:
                    resultado = kelvin_to_celsius(valor);
                    break;
                case 2:
                    resultado = kelvin_to_fahrenheit(valor);
                    break;
                case 3:
                    resultado = valor;
                    break;
                default:
                    printf("Opção de destino inválida.\n");
                    return;
            }
            break;

        default:
            printf("Opção de origem inválida.\n");
    }

    printf("A temperatura convertida é: %.2f\n", resultado);
}

//conversao de comprimento
void conversao_comprimento() {  
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE COMPRIMETO\n\n");
    printf("[1] METROS --> CENTIMENTRO\n[2] METROS --> MILIMETROS\n");
    printf("[3] CENTIMETRO --> METROS\n[4] CENTIMETROS --> MILIMETROS\n");
    printf("[5] MILIMETROS --> METROS\n[6] MILIMETROS --> CENTIMETROS\n");
    scanf("%d", &escolha);
    //validando opcao
    while(escolha < 1 || escolha > 6){
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }
    //conversao
    if (escolha <= 2){
        printf("Digite o valor em metros:\n");
        scanf("%f", &valor);
        if(escolha == 1){
            resultado = valor * 100;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 2){
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else if(escolha <= 4){
        printf("Digite o valor em centimetros:\n");
        scanf("%f", &valor);
        if(escolha == 3){
            resultado = valor / 100;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 4){
            resultado = valor * 10;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else {
        printf("Digite o valor em milimetros:\n");
        scanf("%f", &valor);
        if(escolha == 5){
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 6){
            resultado = valor / 10;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
}

//conversao de massa
void conversao_massa() { 
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE MASSA\n\n");
    printf("[1] QUILOGRAMA --> GRAMA\n[2] QUILOGRAMA --> TONELADA\n");
    printf("[3] GRAMA --> QUILOGRAMA\n[4] GRAMA --> TONELADA\n");
    printf("[5] TONELADA --> QUILOGRAMA\n[6] TONELADA --> GRAMA\n");
    scanf("%d", &escolha);
    //validando opcao
    while(escolha < 1 || escolha > 6){
        printf("Opcao invalida, digite novamente:\n");  
        scanf("%d", &escolha);
    }
    //conversao
    if (escolha <= 2){
        printf("Digite o valor em quilogramas:\n");
        scanf("%f", &valor);
        if(escolha == 1){
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 2){
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else if(escolha <= 4){
        printf("Digite o valor em gramas:\n");
        scanf("%f", &valor);
        if(escolha == 3){
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 4){
            resultado = valor / 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else {
        printf("Digite o valor em toneladas:\n");
        scanf("%f", &valor);
        if(escolha == 5){
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 6){
            resultado = valor * 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
}

//conversao de volume
void conversao_volume(void) {
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE VOLUME\n\n");
    printf("[1] LITRO --> MILILITRO\n[2] LITRO --> METRO CUBICO\n");
    printf("[3] MILILITRO --> LITRO\n[4] MILILITRO --> METRO CUBICO\n");
    printf("[5] METRO CUBICO --> LITRO\n[6] METRO CUBICO --> MILILITRO\n");
    scanf("%d", &escolha);
    //validando opcao
    while(escolha < 1 || escolha > 6){
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }
    //conversao
    if (escolha <= 2){
        printf("Digite o valor em litros:\n");
        scanf("%f", &valor);
        if(escolha == 1){
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 2){
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else if(escolha <= 4){
        printf("Digite o valor em mililitros:\n");
        scanf("%f", &valor);
        if(escolha == 3){
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 4){
            resultado = valor / 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    } else {
        printf("Digite o valor em metros cubicos:\n");
        scanf("%f", &valor);
        if(escolha == 5){
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        } else if(escolha == 6){
            resultado = valor * 1000000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
}

