#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    // Variáveis da primeira carta
    char estado1, codigo1[20], nome1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1, pibpercapta1;
    float superpoder1;
    int escolha1;
    int escolha2;
    int resultado1, resultado2;

    // Variáveis da segunda carta
    char estado2, codigo2[20], nome2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2, pibpercapta2;
    float superpoder2;

    // Entrada de Dados - Carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo1);

    while (getchar() != '\n'); //limpar o buffer antes do fgets

    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin); //comando para ler nomes compostos
    nome1[strcspn(nome1, "\n")] = 0; // remove o '\n' final

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (KM²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

     // Cálculos
     densidadepopulacional1 = (float)populacao1 / area1; //converter população que e 'int' pra 'float'.
     pibpercapta1 = (pib1 * 1000000000.0f) / populacao1;
     superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1.0f / densidadepopulacional1);
 
    // Entrada de Dados - Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo2);

    while (getchar() != '\n'); //limpar o buffer antes do fgets

    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0; // remove o '\n' final 

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (KM²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

     // Cálculos
     densidadepopulacional2 = (float)populacao2 / area2; //converter população que e 'int' pra 'float'.
     pibpercapta2 = (pib2 * 1000000000.0f) / populacao2;
     superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1.0f / densidadepopulacional2);

         // Exibindo resultados - Carta 1
         printf("\n=== Carta 01 ===\n");
         printf("Estado: %c\n", estado1);
         printf("Código: %s\n", codigo1);
         printf("Nome da Cidade: %s\n", nome1);
         printf("População: %lu\n", populacao1);
         printf("Área: %.2f KM²\n", area1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turísticos: %d\n", pontosturisticos1);
         printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
         printf("PIB per Capita: %.2f reais \n", pibpercapta1);
         
        // Exibindo resultados - Carta 2
         printf("\n=== Carta 02 ===\n");
         printf("Estado: %c\n", estado2);
         printf("Código: %s\n", codigo2);
         printf("Nome da Cidade: %s\n", nome2);
         printf("População: %lu\n", populacao2);
         printf("Área: %.2f KM²\n", area2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turísticos: %d\n", pontosturisticos2);
         printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
         printf("PIB per Capita: %.2f reais \n", pibpercapta2);

                //Menu de Comparação de cartas com escolha do primeiro atributo
                 printf("\n=== Comparação de cartas ===\n");
                 printf("Escolha o primeiro atributo para comparar\n");
                 printf("1. População\n");
                 printf("2. Aréa\n");
                 printf("3. PIB (Produto Interno Bruto)\n");
                 printf("4. Numeros de Pontos Turisticos\n");
                 printf("5. Densidade Demografica\n");
                 printf("Atributo Numero: ");
                 scanf("%d", &escolha1);

                // Logica da comparação de cartas com switch e operador ternario
                switch (escolha1){
                case 1:
                     resultado1 = populacao1 > populacao2 ? 1 : 0;
                break;
                case 2:
                     resultado1 = area1 > area2 ? 1 : 0;
                break;
                case 3:
                     resultado1 = pib1 > pib2 ? 1 : 0;
                break;
                case 4:
                     resultado1 = pontosturisticos1 >pontosturisticos2 ? 1 : 0;
                break;
                case 5:
                     resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
                break;
                default:
                     printf("Opção invalida !!");
                break;
                    }

                 //Menu de Comparação de cartas com escolha do segundo atributo
                 printf("\n=== Comparação de cartas ===\n");
                 printf("Escolha o segundo atributo para comparar\n");
                 printf("1. População\n");
                 printf("2. Aréa\n");
                 printf("3. PIB (Produto Interno Bruto)\n");
                 printf("4. Numeros de Pontos Turisticos\n");
                 printf("5. Densidade Demografica\n");
                 printf("Atributo Numero: ");
                 scanf("%d", &escolha2);

                //Mensagem caso os atributos escolhidos forem iguais
                 if (escolha1 == escolha2){
                    printf("\nOs atributos não podem ser os mesmos !!\n");
                 }else{
                // Logica da comparação de cartas com switch e if-else
                    switch (escolha2){
                case 1:
                     resultado2 = populacao2 > populacao1 ? 1 : 0;
                break;
                case 2:
                     resultado2 = area2 > area1 ? 1 : 0;
                break;
                case 3:
                     resultado2 = pib2 > pib1 ? 1 : 0;
                break;
                case 4:
                     resultado2 = pontosturisticos2 > pontosturisticos1 ? 1 : 0;
                break;
                case 5:
                     resultado2 = densidadepopulacional2 < densidadepopulacional1 ? 1 : 0;
                break;
                default:
                     printf("Opção invalida !!");
                break;
                    }
                 }

                return 0;
}