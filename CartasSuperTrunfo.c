#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo 

  int main(){
     char estado1 [100], estado2 [100];
     char codigo1 [100],codigo2 [100];
     char nome1 [100], nome2 [100];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int numero1, numero2;
     float densidade_populacional1,densidade_populacional2;
     float pib_per_capita1,pib_per_capita2;
     
     int jogador1,jogador2;


     printf("Carta 1 \n");

    printf("digite o nome do seu Estado: \n");
    scanf(" %s",estado1);

    printf("digite o nome seu Código: \n");
    scanf(" %s",codigo1);

    printf("digite o nome da sua Cidade : \n");
    scanf(" %s",nome1);

    printf("digite a sua População \n");
    scanf(" %d",&populacao1);

    printf("digite a sua Area km²\n");
    scanf(" %f",&area1);
    
    printf("digite o seu Pib \n");
    scanf(" %f",&pib1);

    printf("digite o numero de pontos turisticos \n");
    scanf(" %d",&numero1);
    
    printf("Estado: %s - Codigo: %s - Nome: %s\n", estado1, codigo1, nome1);
    printf("População: %d - Area: %.2fkm² - Pib %.2f bilhoes\n", populacao1, area1, pib1);
    printf("Numero: %d\n", numero1);
   
   
    //operaçao divisao
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1; 


    printf("A Densidade Populacional é: %.2f Habitantes/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("Carta 2 \n");

    printf("digite o nome do seu Estado: \n");
    scanf(" %s",estado2);

    printf("digite o nome seu Código: \n");
    scanf(" %s",codigo2);

    printf("digite o nome da sua Cidade : \n");
    scanf(" %s",nome2);

    printf("digite a sua População \n");
    scanf(" %d",&populacao2);

    printf("digite a sua Area km²\n");
    scanf(" %f",&area2);
    
    printf("digite o seu Pib \n");
    scanf(" %f",&pib2);

    printf("digite o numero de pontos turisticos \n");
    scanf(" %d",&numero2);
 
    printf("Estado: %s - Codigo: %s - Nome: %s\n", estado2, codigo2, nome2);
    printf("Populacão: %d - Area: %.2fkm² - Pib %.2f bilhoes\n", populacao2, area2, pib2);
    printf("Numero: %d\n", numero2); 
   

   
    //operaçao divisao
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2; 

    printf("A Densidade Populacional2 é: %.2f habitantes/km²\n", densidade_populacional2);
    
    printf("Pib Per Capita2: R$ %.2f\n", pib_per_capita2);


    
                        printf("comparaçao das cartas: \n");


    printf("Populacao 1 > Populacao 2: %d\n",populacao1 > populacao2);
    printf("Area 1 > Area2: %d\n",area1 > area2);
    printf("Numero 1 > Numero2: %d\n",numero1 > numero2);
    printf("Pib 1 > Pib 2: %d\n",pib1 > pib2);
    printf("Densidade Populacional 1 > Densidade Populacional 2: %d\n",densidade_populacional1 > densidade_populacional2);
    printf("Pib_Per_Capita 1 > Pib_Per_Capita 2: %d\n",pib_per_capita1 > pib_per_capita2);

    float superpoder1 =  populacao1 + area1 + numero1 + pib1 + densidade_populacional1 + pib_per_capita1;
    printf("superpoder = Populacao 1 + Area 1 + Numero 1 + Pib 1 + Densidade Populacional 1 + Pib_Per_Capita1\n");
    
    float superpoder2 =  populacao2 + area2 + numero2 + pib2 + densidade_populacional2 + pib_per_capita2;
    printf("superpoder2 =  Populacao2 + Area2 + Numero2 + Pib2 + Densidade_Populacional2 + Pib_Per_Capita2\n");
     
    
                        printf("\n=== SUPERPODER ===\n");
    printf("Superpoder da Carta 1: %.2f\n", superpoder1);
    printf("Superpoder da Carta 2: %.2f\n", superpoder2);
 
       printf("jogo das cartas***\n");
   printf("escolha uma opçao:\n");
   printf("1. populaçao\n");
   printf("2. area\n");
   printf("3. pib\n");
   printf("4. numero\n");
   printf("5. densidade_populacional\n");
   printf("escolha:\n");
   scanf(" %d",&jogador1);
   scanf(" %d",&jogador2);

 
    if (jogador1 != jogador2) {
    printf("Jogadores escolheram atributos diferentes. Não é possível comparar.\n");
} else {
    switch (jogador1) {
    case 1:
    if (populacao1 > populacao2)
        printf("Jogador 1 venceu com maior população!\n");
    else if (populacao1 < populacao2)
        printf("Jogador 2 venceu com maior população!\n");
    else
        printf("Empate na população!\n");
         break;
    case 2:
    if (area1 > area2)
        printf("Jogador 1 venceu com maior área!\n");
    else if (area1 < area2)
         printf("Jogador 2 venceu com maior área!\n");
    else
        printf("Empate na área!\n");
    break;
    case 3:
    if (pib1 > pib2)
         printf("Jogador 1 venceu com maior PIB!\n");
    else if (pib1 < pib2)
        printf("Jogador 2 venceu com maior PIB!\n");
    else
        printf("Empate no PIB!\n");
    break;
    case 4:
    if (numero1 > numero2)
        printf("Jogador 1 venceu com mais pontos turísticos!\n");
    else if (numero1 < numero2)
        printf("Jogador 2 venceu com mais pontos turísticos!\n");
    else
        printf("Empate nos pontos turísticos!\n");
    break;
    case 5:
    if (densidade_populacional1 < densidade_populacional2)
        printf("Jogador 1 venceu com menor densidade!\n");
    else if (densidade_populacional1 > densidade_populacional2)
        printf("Jogador 2 venceu com menor densidade!\n");
    else
        printf("Empate na densidade!\n");
    break;
    default:
        printf("Opção inválida!\n");
    }
}

int carta1,carta2;
char primeiroatributo, segundoatributo;
int Populaçao1,Populaçao2,Area1,Area2,Pib1,Pib2,Numero1,Numero2,Densidade_populacional1,Densidade_populacional2;

// gerar numero aleatorio
srand (time(0));
Populaçao1 = rand() % 100 + 1; // numero entre 1 e 100
Populaçao2 = rand() % 100 + 1; // numero entre 1 e 100
area1 = rand() % 100 + 1; // numero entre 1 e 100
area2 = rand() % 100 + 1; // numero entre 1 e 100
pib1 = rand() % 100 + 1; // numero entre 1 e 100 
pib2 = rand() % 100 + 1; // numero entre 1 e 100
numero1 = rand() % 100 + 1; // numero entre 1 e 100
numero2 = rand() % 100 + 1; // numero entre 1 e 100
densidade_populacional1 = rand() % 100 + 1; // numero entre 1 e 100
densidade_populacional2 = rand() % 100 + 1; // numero entre 1 e 100

// inicio do jogo

  printf("Bem-vindo ao jogo!\n");
printf("escolha o primeiro atributo.\n");
printf("1. populaçao\n");
printf("2. area\n");
printf("3. pib\n");
printf("4. numero\n");
printf("5. densidade_populacional\n");

printf("Escolha a comparaçao: ");
scanf(" %c",&primeiroatributo);

switch (primeiroatributo)
{
case '1':
   printf("voce escolher a opçao populaçao!\n");
   carta1 = Populaçao1 > Populaçao2 ? 1 : 0;
    break;
case '2':
   printf("voce escolher a opçao area!\n");
   carta1 = area1 > area2 ? 1 : 0;
    break;
case '3':
   printf("voce escolher a opçao pib!\n");
   carta1 = pib1 > pib2 ? 1 : 0;
    break;
    case '4':
   printf("voce escolher a opçao numero!\n");
   carta1 = numero1 > numero2 ? 1 : 0;
    break;
    case '5':
   printf("voce escolher a opçao densidade_populacional!\n");
   carta1 = densidade_populacional1 > densidade_populacional2 ? 1 : 0;
    break;
}

printf("escolha o segundo atributo.\n");
printf("Atençao: voce deve escolhar um atributo diferente do primeiro.\n");
printf("1. populaçao\n");
printf("2. area\n");
printf("3. pib\n");
printf("4. numero\n");
printf("5. densidade_populacional\n");

printf("Escolha a comparaçao: ");
scanf(" %c",&segundoatributo);


if (primeiroatributo == segundoatributo)
{
    printf("voce escolheu o mesmo atributo!");
}
else{
    switch (segundoatributo)
{
case '1':
   printf("voce escolher a opçao populaçao!\n");
   carta2 = Populaçao1 > Populaçao2 ? 1 : 0;
    break;
case '2':
   printf("voce escolher a opçao area!\n");
   carta2 = area1 > area2 ? 1 : 0;
    break;
case '3':
   printf("voce escolher a opçao pib!\n");
   carta2 = pib1 > pib2 ? 1 : 0;
    break;
    case '4':
   printf("voce escolher a opçao numero!\n");
   carta2 = Numero1 > Numero2 ? 1 : 0;
    break;
    case '5':
   printf("voce escolher a opçao densidade_populacional!\n");
   carta2 = densidade_populacional1 > densidade_populacional2 ? 1 : 0;
    break;
default:
   printf("opçao invalida!\n");
    break;
}
}

if (carta1 > carta2)
    printf("jogador 1 venceu!\n");
else if (carta2 > carta1)
    printf("jogador 2 venceu!\n");
else
    printf("empate!\n");







return 0;
  }
