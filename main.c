/***
 * Programa conversor de unidades.
*/
#include <stdio.h>

void conversao_comprimento(void);
void conversao_massa(void);
void conversao_volume(void);

int opcao1, opcao2, tarefa, opcao, escolha;
float valor, resultado;

int main () {
    //tela inicial
   printf("Bem vindo ao Conversor de Unidade Embarcatech.\n");
   printf("\n");
   printf("digite o numero da opcao desejada:\n");
   printf("1. Unidades de comprimento (metro, centímetro, milímetro)\n") ;
   printf("2. Unidades de massa (quilograma, grama, tonelada\n");
   printf("3. Unidades de volume (litro, mililitro, metros cúbicos\n");
   printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin\n");
   printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
   printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
   printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n");
   printf("8. Unidades de tempo (segundos, minutos, horas)\n");
   printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
   scanf("%d", &tarefa);
   while(tarefa < 1 || tarefa > 9) {
   printf("Opcao invalida, digite novamente:\n");
      scanf("%d", &tarefa);
   }
   switch (tarefa) {
      case 1: conversao_comprimento();
      break; 
      case 2: conversao_massa();
      break; 
      case 3: conversao_volume();
      break;
   }
     
   printf("Deseja realizar outra conversao? [1] SIM [2] NAO\n");
   scanf("%d", &opcao);
   while(opcao < 1 || opcao > 2){
         printf("Opcao invalida, digite novamente:\n");
         scanf("%d", &opcao);
   }
   if(opcao == 1){
         main();
   } else {
         printf("Obrigado por utilizar o Conversor de Unidade Embarcatech.\n");
   }
   return 0;
}
void conversao_comprimento(void){
      printf("CONVERSAO DE COMPRIMETO\n\n");
      printf("[1] METROS --> CENTIMENTRO\n[2] METROS --> MILIMETROS\n");
      printf("[3] CENTIMETRO --> METROS\n[4] CENTIMETROS --> MILIMETROS\n");
      printf("[5] MILIMETROS --> METROS\n[6] MILIMETROS --> CENTIMETROS\n");
      scanf("%d", &escolha);
      while(escolha < 1 || escolha > 6){
            printf("Opcao invalida, digite novamente:\n");
            scanf("%d", &escolha);
      }
      if (escolha < 2){
            printf("Digite o valor em metros:\n");
            scanf("%f", &valor);
            if(escolha == 1){
                  resultado = valor * 100;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 2){
                  resultado = valor * 1000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else if(escolha < 4){
            printf("Digite o valor em centimetros:\n");
            scanf("%f", &valor);
            if(escolha == 3){
                  resultado = valor / 100;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 4){
                  resultado = valor * 10;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else {
            printf("Digite o valor em milimetros:\n");
            scanf("%f", &valor);
            if(escolha == 5){
                  resultado = valor / 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 6){
                  resultado = valor / 10;
                  printf("O valor convertido é: %f\n", resultado);
            }
      }
}
void conversao_massa(void){
      printf("CONVERSAO DE MASSA\n\n");
      printf("[1] QUILOGRAMA --> GRAMA\n[2] QUILOGRAMA --> TONELADA\n");
      printf("[3] GRAMA --> QUILOGRAMA\n[4] GRAMA --> TONELADA\n");
      printf("[5] TONELADA --> QUILOGRAMA\n[6] TONELADA --> GRAMA\n");
      scanf("%d", &escolha);
      while(escolha < 1 || escolha > 6){
            printf("Opcao invalida, digite novamente:\n");
            scanf("%d", &escolha);
      }
      if (escolha < 2){
            printf("Digite o valor em quilogramas:\n");
            scanf("%f", &valor);
            if(escolha == 1){
                  resultado = valor * 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 2){
                  resultado = valor / 1000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else if(escolha < 4){
            printf("Digite o valor em gramas:\n");
            scanf("%f", &valor);
            if(escolha == 3){
                  resultado = valor / 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 4){
                  resultado = valor / 1000000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else {
            printf("Digite o valor em toneladas:\n");
            scanf("%f", &valor);
            if(escolha == 5){
                  resultado = valor * 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 6){
                  resultado = valor * 1000000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      }
}
void conversao_volume(void){
      printf("CONVERSAO DE VOLUME\n\n");
      printf("[1] LITRO --> MILILITRO\n[2] LITRO --> METRO CUBICO\n");
      printf("[3] MILILITRO --> LITRO\n[4] MILILITRO --> METRO CUBICO\n");
      printf("[5] METRO CUBICO --> LITRO\n[6] METRO CUBICO --> MILILITRO\n");
      scanf("%d", &escolha);
      while(escolha < 1 || escolha > 6){
            printf("Opcao invalida, digite novamente:\n");
            scanf("%d", &escolha);
      }
      if (escolha < 2){
            printf("Digite o valor em litros:\n");
            scanf("%f", &valor);
            if(escolha == 1){
                  resultado = valor * 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 2){
                  resultado = valor / 1000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else if(escolha < 4){
            printf("Digite o valor em mililitros:\n");
            scanf("%f", &valor);
            if(escolha == 3){
                  resultado = valor / 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 4){
                  resultado = valor / 1000000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      } else {
            printf("Digite o valor em metros cubicos:\n");
            scanf("%f", &valor);
            if(escolha == 5){
                  resultado = valor * 1000;
                  printf("O valor convertido é: %f\n", resultado);
            } else if(escolha == 6){
                  resultado = valor * 1000000;
                  printf("O valor convertido é: %f\n", resultado);
            }
      }
}

