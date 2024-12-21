/***
 * Programa conversor de unidades.
*/

#include <stdio.h>
void convert_seconds(int total_seconds, int *days, int *hours, int *minutes, int *seconds);

int main() {
    int total_seconds; // Variável para entrada do usuário
    int days, hours, minutes, seconds;

    // Solicita entrada do usuário
    printf("Digite o total de segundos: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Erro: Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    // Realiza a conversão
    convert_seconds(total_seconds, &days, &hours, &minutes, &seconds);

    // Exibe o resultado
    printf("Resultado: %d dias, %d horas, %d minutos, %d segundos\n", days, hours, minutes, seconds);

  return 0;}

void convert_seconds(int total_seconds, int *days, int *hours, int *minutes, int *seconds) {
    // Calcula dias, horas, minutos e segundos restantes
    *days = total_seconds / 86400;         // Um dia tem 86400 segundos
    *hours = (total_seconds % 86400) / 3600;  // Uma hora tem 3600 segundos
    *minutes = (total_seconds % 3600) / 60;  // Um minuto tem 60 segundos
    *seconds = total_seconds % 60;           // Segundos restantes
}