#include <stdio.h>
#include <features/dados/dados.h>

void conversao_dados(int escolha){
    // função de conversão de Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)

  double value;  
    printf("Digite o valor: ");
    if (scanf("%lf", &value) != 1 || value < 0) {
        printf("Valor inválido! Por favor, insira um número positivo.\n");
        return 1;
    }

    // Determina o fator de conversão
    int unit;
    switch (escolha) {
        
        case 1: unit = 1.0 / 8.0; break;          // 1 bit = 1/8 bytes
        case 2: unit = 1; break;                  // 1 byte = 1 byte
        case 3: unit = 1024; break;               // 1 KB = 1024 bytes
        case 4: unit = 1024 * 1024; break;        // 1 MB = 1024^2 bytes
        case 5: unit = 1024 * 1024 * 1024; break; // 1 GB = 1024^3 bytes
        case 6: unit = 1024 * 1024 * 1024 * 1024; break; // 1 TB
    }

    double bytes = value * unit;

    // Realiza todas as conversões
    double bits = bytes * 8;                  // 1 byte = 8 bits
    double kilobytes = bytes / 1024.0;        // 1 KB = 1024 bytes
    double megabytes = kilobytes / 1024.0;    // 1 MB = 1024 KB
    double gigabytes = megabytes / 1024.0;    // 1 GB = 1024 MB
    double terabytes = gigabytes / 1024.0;    // 1 TB = 1024 GB

    // Exibe os resultados
    printf("\nConversão de tamanhos de dados:\n");
    printf("Bits: %.0lf bits\n", bits);
    printf("Bytes: %.0lf bytes\n", bytes);
    printf("Kilobytes: %.2lf KB\n", kilobytes);
    printf("Megabytes: %.2lf MB\n", megabytes);
    printf("Gigabytes: %.2lf GB\n", gigabytes);
    printf("Terabytes: %.6lf TB\n", terabytes);
}

