#include <stdio.h>

int main(){


//Variações aplicadas 

    char estado1[20]; //Estado
    char estado2[20];
    char cidade1[30]; //Cidade
    char cidade2[30];
    char cdc1[4];  //Código da carta
    char cdc2[4];
    int populacao1; //Número de habitantes
    int populacao2;
    float area1; //Área em KM2
    float area2;
    float pib1; //PIB da cidade
    float pib2;
    int npt1; //Número de pontos turísticos
    int npt2;


//Título do jogo e entradas de dados da carta 01

printf(" === Seja bem vindo ao jogo Super Trunfo Países === \n"); 

printf("\nVamos escolher os atributos da sua primeira carta\n"); 

printf("\n1. Digite a sigla do estado escolhido (ex: RJ, SP, BA):\n");
scanf("%s", estado1);
printf("\n2. Digite a sua cidade:\n");
scanf("%s", cidade1);
printf("\n3. Digite o código da sua carta (ex: A01,A02):\n");
scanf("%s", &cdc1);
printf("\n4. Digite o número de habitantes da sua cidade:\n");
scanf("%d", &populacao1);
printf("\n5. Digite a área da sua cidade em KM²:\n");
scanf("%f", &area1);
printf("\n6. Digite o PIB total da sua cidade:\n");
scanf("%f", &pib1);
printf("\n7. Digite o número de pontos turísticos que possui a sua cidade:\n");
scanf("%d", &npt1);

printf("\n --- Muito bem, você escolheu seus atributos da primeira carta. Aqui está ela: ---\n");

//Saída de dados da carta 01

printf("\nEstado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Código da carta: %s\n", cdc1);
printf("População da cidade: %d habitantes\n", populacao1);
printf("A área em km² da sua cidade é: %.2f km²\n", area1);
printf("O PIB da sua cidade: %.2f reais\n", pib1);
printf("O número de pontos turísticos da sua cidade é: %d\n", npt1);

//Entrada de dados da carta 02

printf("\nAgora vamos escolher os atributos da sua segunda carta\n");

printf("\n1. Digite a sigla do estado escolhido (ex: RJ, SP, BA):\n");
scanf("%s", estado2);
printf("\n2. Digite a sua cidade:\n");
scanf("%s", cidade2);
printf("\n3. Digite o código da sua carta (ex: A01,A02,B03):\n");
scanf("%s", &cdc2);
printf("\n4. Digite o número de habitantes da sua cidade:\n");
scanf("%d", &populacao2);
printf("\n5. Digite a área da sua cidade em KM²:\n");
scanf("%f", &area2);
printf("\n6. Digite o PIB total da sua cidade:\n");
scanf("%f", &pib2);
printf("\n7. Digite o número de pontos turísticos que possui a sua cidade:\n");
scanf("%d", &npt2);

//Saída de dados da carta 0 

printf("\n --- Muito bem, você escolheu seus atributos da segunda carta. Aqui está ela: ---\n");

printf("\nEstado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Código da carta: %s\n", cdc2);
printf("População da cidade: %d habitantes\n", populacao2);
printf("A área em km² da sua cidade é: %.2f km²\n", area2);
printf("O PIB da sua cidade: %.2f Reais\n", pib2);
printf("O número de pontos turísticos da sua cidade é: %d\n", npt2);

printf("\n=== Obrigado por jogar ===\n");


return 0;
}
