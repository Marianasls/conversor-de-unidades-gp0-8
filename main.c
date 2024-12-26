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
void conversao_area();
void conversao_tempo();
void conversao_energia();

// funcoes para conversao de temperatura
float celsius_to_fahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32;
}

float celsius_to_kelvin(float c)
{
    return c + 273.15;
}

float fahrenheit_to_celsius(float f)
{
    return (f - 32) * 5.0 / 9.0;
}

float fahrenheit_to_kelvin(float f)
{
    return celsius_to_kelvin(fahrenheit_to_celsius(f));
}

float kelvin_to_celsius(float k)
{
    return k - 273.15;
}

float kelvin_to_fahrenheit(float k)
{
    return celsius_to_fahrenheit(kelvin_to_celsius(k));
}

int main() {
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
        while (tarefa < 1 || tarefa > 9)
        {
            printf("Opcao invalida, digite novamente:\n");
            scanf("%d", &tarefa);
        }

        // chamando funcoes
        switch (tarefa)
        {
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
        case 7:
            conversao_area();
            break;
        case 8:
            conversao_tempo();
            break;
        case 10:
            conversao_energia();
            break;
        }

        // perguntando se deseja realizar outra conversao
        printf("Deseja realizar outra conversao? [1] SIM [2] NAO\n");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("Obrigado por utilizar o Conversor de Unidade Embarcatech.\n");

    return 0;
}


// Conversao das unidades km^2, m^2 e cm^2
void conversao_area()
{
    int escolha;
    float valor_inicial;
    double valor_final;

    // Menu da funcao conversao de aea.
    printf("CONVERSAO DE AREA\n\n");
    printf("[1] km^2 --> m^2\n[2] km^2 --> cm^2\n");
    printf("[3] m^2 --> km^2\n[4] m^2 --> cm^2\n");
    printf("[5] cm^2 --> km^2\n[6] cm^2 --> m^2\n\n");
    scanf("%d", &escolha);

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

void conversao_tempo()
{
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
    while (escolha < 1 || escolha > 6)
    {
        printf("\n\tOpcao inesistente. Tente novamente: ");
        scanf("%d", &escolha);
    }

    // Operacao selecionada conforme opcao escolhida no menu.
    system("cls");
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
void conversao_velocidade() {
    int escolha;
    float valor, resultado;

    printf("CONVERSAO DE VELOCIDADE\n\n");
    printf("[1] KM/H --> M/S\n[2] KM/H --> MPH\n");
    printf("[3] M/S --> KM/H\n[4] M/S --> MPH\n");
    printf("[5] MPH --> KM/H\n[6] MPH --> M/S\n");
    scanf("%d", &escolha);

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

void conversao_potencia()
{
    int escolha;
    float valor, resultado;

    printf("CONVERSAO DE POTENCIA\n\n");
    printf("[1] W --> kW\n[2] W --> CV\n");
    printf("[3] kW --> W\n[4] kW --> CV\n");
    printf("[5] CV --> W\n[6] CV --> kW\n");
    scanf("%d", &escolha);

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

void conversao_temperatura()
{
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

    switch (origem)
    {
    case 1: // Celsius
        switch (destino)
        {
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
        switch (destino)
        {
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
        switch (destino)
        {
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

// conversao de comprimento
void conversao_comprimento()
{
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE COMPRIMETO\n\n");
    printf("[1] METROS --> CENTIMENTRO\n[2] METROS --> MILIMETROS\n");
    printf("[3] CENTIMETRO --> METROS\n[4] CENTIMETROS --> MILIMETROS\n");
    printf("[5] MILIMETROS --> METROS\n[6] MILIMETROS --> CENTIMETROS\n");
    scanf("%d", &escolha);
    // validando opcao
    while (escolha < 1 || escolha > 6)
    {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }
    // conversao
    if (escolha <= 2)
    {
        printf("Digite o valor em metros:\n");
        scanf("%f", &valor);
        if (escolha == 1)
        {
            resultado = valor * 100;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 2)
        {
            resultado = valor * 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
    else if (escolha <= 4)
    {
        printf("Digite o valor em centimetros:\n");
        scanf("%f", &valor);
        if (escolha == 3)
        {
            resultado = valor / 100;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 4)
        {
            resultado = valor * 10;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
    else
    {
        printf("Digite o valor em milimetros:\n");
        scanf("%f", &valor);
        if (escolha == 5)
        {
            resultado = valor / 1000;
            printf("O valor convertido é: %.2f\n", resultado);
        }
        else if (escolha == 6)
        {
            resultado = valor / 10;
            printf("O valor convertido é: %.2f\n", resultado);
        }
    }
}

// conversao de massa
void conversao_massa()
{
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE MASSA\n\n");
    printf("[1] QUILOGRAMA --> GRAMA\n[2] QUILOGRAMA --> TONELADA\n");
    printf("[3] GRAMA --> QUILOGRAMA\n[4] GRAMA --> TONELADA\n");
    printf("[5] TONELADA --> QUILOGRAMA\n[6] TONELADA --> GRAMA\n");
    scanf("%d", &escolha);
    // validando opcao
    while (escolha < 1 || escolha > 6)
    {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }
    // conversao
    if (escolha <= 2)
    {
        printf("Digite o valor em quilogramas:\n");
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
        printf("Digite o valor em gramas:\n");
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
        printf("Digite o valor em toneladas:\n");
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

// conversao de volume
void conversao_volume(void)
{
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE VOLUME\n\n");
    printf("[1] LITRO --> MILILITRO\n[2] LITRO --> METRO CUBICO\n");
    printf("[3] MILILITRO --> LITRO\n[4] MILILITRO --> METRO CUBICO\n");
    printf("[5] METRO CUBICO --> LITRO\n[6] METRO CUBICO --> MILILITRO\n");
    scanf("%d", &escolha);
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

// conversor de energia
void conversao_energia()
{
    int escolha;
    float valor, resultado = 0;

    printf("CONVERSAO DE ENERGIA\n\n");
    printf("[1] Joules (J) --> Quilojoules (kJ)\n");
    printf("[2] Joules (J) --> Calorias (cal)\n");
    printf("[3] Quilojoules (kJ) --> Joules (J)\n");
    printf("[4] Quilojoules (kJ) --> Kilocalorias (kcal)\n");
    printf("[5] Calorias (cal) --> Joules (J)\n");
    printf("[6] Kilocalorias (kcal) --> Quilojoules (kJ)\n");

    // Lendo a escolha do usuário
    scanf("%d", &escolha);
    while (escolha < 1 || escolha > 6)
    {
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &escolha);
    }

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
