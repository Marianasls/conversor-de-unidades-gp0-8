/***
 * Programa conversor de unidades.
*/
#include <stdio.h>
int opcao1, opcao2, opcao3, tarefa, opcao;;
float valor, resultado;

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
    scanf("%d", &tarefa);
    printf("A opcao digita foi %d", tarefa);//linha de teste de retorno da opcão selecionada
   while(tarefa <1 || tarefa > 9){
        printf("Opcao invalida, digite novamente:\n");
        scanf("%d", &tarefa);
       }
   switch (tarefa) {   //inicio do switch case
         case 1: printf("Escolha qual unidade deseja converter:\n");    //inicio do case 1 Unidades de comprimento
               printf("1. Metro\n");
               printf("2. Centimetro\n");
               printf("3. Milimetro\n"); 
               scanf("%d", &opcao1);
                    while(opcao1 <1 || opcao1 > 3){ //validação da opção escolhida pelo usuário
                        printf("Opcao invalida, digite novamente:\n");
                        scanf("%d", &opcao1);
                    }            
               printf("escolha para qual unidade sera convertida:\n");
               scanf("%d", &opcao2);    
                    while(opcao2 <1 || opcao2 > 3 || opcao2 == opcao1){ //validação da opção escolhida pelo usuário e impedindo que a mesma opção seja escolhida
                        printf("Opcao ja escolhida ou invalida, escolha outra opçao:\n");
                        scanf("%d", &opcao2);
                    }
               printf("Digite o valor a ser convertido:\n");
               scanf("%f", &valor); 
                  if(opcao1 == 1 && opcao2 == 2){
                     resultado = valor * 100;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 1 && opcao2 == 3){
                     resultado = valor * 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 1){
                     resultado = valor / 100;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 3){
                     resultado = valor * 10;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 1){
                     resultado = valor / 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 2){
                     resultado = valor / 10;
                     printf("O valor convertido e: %f\n", resultado);
                  } else {
                     printf("Opcao invalida, tente novamente.\n");
                  }
                  break;
         case 2: printf("Escolha qual unidade deseja converter:\n");//inicio do case 2 unidades de massa
               printf("1. Quilograma\n");
               printf("2. Grama\n");
               printf("3. Tonelada\n");
               scanf("%d", &opcao1);
                    while(opcao1 <1 || opcao1 > 3){ //validação da opção escolhida pelo usuário
                        printf("Opcao invalida, digite novamente:\n");
                        scanf("%d", &opcao1);
                    }            
               printf("escolha para qual unidade sera convertida:\n");
               scanf("%d", &opcao2);    
                    while(opcao2 <1 || opcao2 > 3 || opcao2 == opcao1){ //validação da opção escolhida pelo usuário e impedindo que a mesma opção seja escolhida
                        printf("Opcao ja escolhida ou invalida, escolha outra opçao:\n");
                        scanf("%d", &opcao2);
                    } 
               printf("Digite o valor a ser convertido:\n");
               scanf("%f", &valor); 
                  if(opcao1 == 1 && opcao2 == 2){
                     resultado = valor * 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 1 && opcao2 == 3){
                     resultado = valor / 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 1){
                     resultado = valor / 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 3){
                     resultado = valor / 1000000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 1){
                     resultado = valor * 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 2){
                     resultado = valor * 1000000;
                     printf("O valor convertido e: %f\n", resultado);
                  } else {
                     printf("Opcao invalida, tente novamente.\n");
                  }
                  break;
         case 3: printf("Escolha qual unidade deseja converter:\n"); //inicio do case 3 unidades de volume
                  printf("1. Litro\n");  
                  printf("2. Mililitro\n");
                  printf("3. Metro cúbico\n");
                  scanf("%d", &opcao1);
                    while(opcao1 <1 || opcao1 > 3){ //validação da opção escolhida pelo usuário
                        printf("Opcao invalida, digite novamente:\n");
                        scanf("%d", &opcao1);
                    }            
               printf("escolha para qual unidade sera convertida:\n");
               scanf("%d", &opcao2);    
                    while(opcao2 <1 || opcao2 > 3 || opcao2 == opcao1){ //validação da opção escolhida pelo usuário e impedindo que a mesma opção seja escolhida
                        printf("Opcao ja escolhida ou invalida, escolha outra opçao:\n");
                        scanf("%d", &opcao2);
                    }
                  printf("Digite o valor a ser convertido:\n");
                  scanf("%f", &valor);
                  if(opcao1 == 1 && opcao2 == 2){
                     resultado = valor * 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 1 && opcao2 == 3){
                     resultado = valor / 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 1){
                     resultado = valor / 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 2 && opcao2 == 3){
                     resultado = valor / 1000000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 1){
                     resultado = valor * 1000;
                     printf("O valor convertido é: %f\n", resultado);
                  } else if(opcao1 == 3 && opcao2 == 2){
                     resultado = valor * 1000000;
                     printf("O valor convertido e: %f\n", resultado);
                  } else {
                     printf("Opcao invalida, tente novamente.\n");
                  }
        
   }  
    return 0;
}