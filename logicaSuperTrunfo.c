#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese"); // Configura a linguagem para português (acentos, caracteres especiais)

    // Variáveis da primeira carta e segunda carta
    char estado1, codigo1[20], nome1[50], estado2, codigo2[20], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidadepopulacional1, pibpercapta1, densidadepopulacional2, pibpercapta2;
    float superpoder1, superpoder2;
    int escolha1;
    int escolha2;

    // Entrada de Dados - Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo1);

    while (getchar() != '\n'); //limpar o buffer antes do fgets

    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin); //comando com "Fgets" para ler nomes compostos
    nome1[strcspn(nome1, "\n")] = 0; // remove o '\n' final

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (KM²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

     // Cálculos de densidade populacional e Pibpercapita
     densidadepopulacional1 = (float)populacao1 / area1; //converter população que e 'int' pra 'float'.
     pibpercapta1 = (float)pib1 / populacao1;
     superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1.0f / densidadepopulacional1);
 
    // Entrada de Dados - Carta 2
    printf("\n=== Cadastro Carta 2 ===\n");

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

     // Cálculos de densidade populacional e Pibpercapita
     densidadepopulacional2 = (float)populacao2 / area2; //converter população que e 'int' pra 'float'.
     pibpercapta2 = (float)pib2 / populacao2;
     superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1.0f / densidadepopulacional2);

         // Exibindo resultados - Carta 1
         printf("\n=== Valores da Carta 01 ===\n");
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
         printf("\n=== Valores Carta 02 ===\n");
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
                 printf("\n=== Comparação de cartas Primeiro Atributo ===\n");
                 printf("Escolha o primeiro atributo para comparar\n");
                 printf("1. População\n");
                 printf("2. Aréa\n");
                 printf("3. PIB (Produto Interno Bruto)\n");
                 printf("4. Numeros de Pontos Turisticos\n");
                 printf("5. Densidade Demografica\n");
                 printf("Atributo Numero: ");
                 scanf("%d", &escolha1);

                    // Logica da comparação de cartas com switch e if-else
                    switch (escolha1){
                    case 1:
                        if (populacao1 > populacao2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - População\n");
                             printf("População Carta 1: %lu - População Carta 2: %lu\n", populacao1, populacao2);
                             printf("Carta 1 - %s Venceu no quisito População !!\n", nome1);
                        }else if (populacao1 < populacao2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - População\n");
                             printf("População Carta 1: %lu - População Carta 2: %lu\n", populacao1, populacao2);
                             printf("Carta 2 - %s Venceu no quisito População !! !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 2:
                        if (area1 > area2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Aréa\n");
                             printf("Aréa Carta 1: %.2f - Aréa Carta 2: %.2f\n", area1, area2);
                             printf("Carta 1 - %s Venceu no quisito Area !!\n", nome1);
                        }else if (area1 < area2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Aréa\n");
                             printf("Aréa Carta 1: %.2f - Aréa Carta 2: %.2f\n", area1, area2);
                             printf("Carta 2 - %s Venceu no quisito Area !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 3:
                        if (pib1 > pib2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - PIB (Produto Interno Bruto)\n");
                             printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
                             printf("Carta 1 - %s Venceu no quisito PIB !!\n", nome1);
                        }else if (pib1 < pib2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - PIB (Produto Interno Bruto)\n");
                             printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
                             printf("Carta 2 - %s Venceu no quisito PIB !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 4:
                        if (pontosturisticos1 > pontosturisticos2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Numero de Pontos Turisticos\n");
                             printf("Pontos Turisticos Carta 1: %d - Pontos Turisticos Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
                             printf("Carta 1 - %s Venceu no quisito Pontos Turisticos !!\n", nome1);
                        }else if (pontosturisticos1 < pontosturisticos2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Numero de Pontos Turisticos\n");
                             printf("Pontos Turisticos Carta 1: %d - Pontos Turisticos Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
                             printf("Carta 2 - %s Venceu no quisito Pontos Turisticos !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 5:
                        if (densidadepopulacional1 < densidadepopulacional2){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Densidade Demografica\n");
                             printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepopulacional1, densidadepopulacional2);
                             printf("Carta 1 - %s Venceu no quisito Densidade Populacional !!\n", nome1);
                        }else if (densidadepopulacional2 < densidadepopulacional1){
                             printf("\n=== Vencedor do Primeiro Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Densidade Demografica\n");
                             printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepopulacional1, densidadepopulacional2);
                             printf("Carta 2 - %s Venceu no quisito Densidade Populacional !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
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
                    switch (escolha2)
                    {
                    case 1:
                        if (populacao1 > populacao2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - População\n");
                             printf("População Carta 1: %lu - População Carta 2: %lu\n", populacao1, populacao2);
                             printf("Carta 1 - %s Venceu no quisito População !!\n", nome1);
                        }else if (populacao1 < populacao2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - População\n");
                             printf("População Carta 1: %lu - População Carta 2: %lu\n", populacao1, populacao2);
                             printf("Carta 2 - %s Venceu no quisito População !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 2:
                        if (area1 > area2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Aréa\n");
                             printf("Aréa Carta 1: %.2f - Aréa Carta 2: %.2f\n", area1, area2);
                             printf("Carta 1 - %s Venceu no quisito Area !!\n", nome1);
                        }else if (area1 < area2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Aréa\n");
                             printf("Aréa Carta 1: %.2f - Aréa Carta 2: %.2f\n", area1, area2);
                             printf("Carta 2 - %s Venceu no quisito Area !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 3:
                        if (pib1 > pib2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - PIB (Produto Interno Bruto)\n");
                             printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
                             printf("Carta 1 - %s Venceu no quisito PIB !!\n", nome1);
                        }else if (pib1 < pib2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - PIB (Produto Interno Bruto)\n");
                             printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
                             printf("Carta 2 - %s Venceu no quisito PIB !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 4:
                        if (pontosturisticos1 > pontosturisticos2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Numero de Pontos Turisticos\n");
                             printf("Pontos Turisticos Carta 1: %d - Pontos Turisticos Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
                             printf("Carta 1 - %s Venceu no quisito Pontos Turisticos !!\n", nome1);
                        }else if (pontosturisticos1 < pontosturisticos2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Numero de Pontos Turisticos\n");
                             printf("Pontos Turisticos Carta 1: %d - Pontos Turisticos Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
                             printf("Carta 2 - %s Venceu no quisito Pontos Turisticos !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    case 5:
                        if (densidadepopulacional1 < densidadepopulacional2){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Densidade Demografica\n");
                             printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepopulacional1, densidadepopulacional2);
                             printf("Carta 1 - %s Venceu no quisito Densidade Populacional !!\n", nome1);
                        }else if (densidadepopulacional2 < densidadepopulacional1){
                             printf("\n=== Vencedor do Segundo Atributo ===\n");
                             printf("Cidade 1: %s - Cidade 2: %s \n", nome1, nome2);
                             printf("Atributo usado - Densidade Demografica\n");
                             printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepopulacional1, densidadepopulacional2);
                             printf("Carta 2 - %s Venceu no quisito Densidade Populacional !!\n", nome2);
                        }else{
                             printf("\n=== Empate !! ===\n");
                        }
                    break;
                    default:
                         printf("Opção invalida !!");
                        break;
                    }
                 }

                 //Resulatado final Carta Vencedora
                 if (superpoder1 > superpoder2){
                    printf("\n=== Vencedor da Rodada ===\n");
                    printf("Carta 1 Cidade: %s - Carta 2 Cidade: %s\n", nome1, nome2);
                    printf("Super poder Carta 1: %.2f  Super poder Carta 2:%.2f\n", superpoder1, superpoder2);
                    printf("==== Carta 1 - %s venceu a Rodada!!!! ====", nome1);
                 }else if (superpoder2 > superpoder1){
                    printf("\n=== Vencedor da Rodada ===\n");
                    printf("Carta 1 Cidade: %s - Carta 2 Cidade: %s\n", nome1, nome2);
                    printf("Super poder Carta 1: %.2f - Super poder Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("==== Carta 2 - %s venceu venceu a Rodada !!!! ====", nome2);
                 }else{
                    printf("=== Empate !! ===");
                 }
                                               

                return 0;
}