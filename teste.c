/***
 * Programa conversor de unidades.
*/

#include <stdio.h>

int opcao;

int main () {
    //tela inicial
    printf("Bem vindo ao Conversor de Unidade Embarcatech.\n");
    printf("\n");
    printf("digite o numero da opcao desejada:\n");
    printf("1. Unidades de comprimento (metro, centímetro, milímetro)\n ") ;
    printf("2. Unidades de massa (quilograma, grama, tonelada\n");
    printf("3. Unidades de volume (litro, mililitro, metros cúbicos\n");
    printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin\n");
    printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
    printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n");
    printf("8. Unidades de tempo (segundos, minutos, horas\n");
    printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    scanf("%d", &opcao);
    printf("A opcao digita foi %d", opcao);//linha de teste de retorno da opcão selecionada
    if(opcao <1 || opcao > 9){
        printf("Opcao invalida, digite novamente:\n");
        scnaf("%d", &opcao);
    }

    return 0;

}