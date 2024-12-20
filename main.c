#include <stdio.h>

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

int main() {
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
                    return 1;
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
                    return 1;
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
                    return 1;
            }
            break;

        default:
            printf("Opção de origem inválida.\n");
            return 1;
    }

    printf("A temperatura convertida é: %.2f\n", resultado);
    return 0;
}