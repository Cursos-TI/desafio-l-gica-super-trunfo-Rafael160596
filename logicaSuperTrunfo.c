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

    // Variáveis da segunda carta
    char estado2, codigo2[20], nome2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2, pibpercapta2;
    float superpoder2;

    // Escolhas e resultados
    int escolha1, escolha2;
    int resultado1 = 0, resultado2 = 0;
    float soma1 = 0, soma2 = 0;

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

           // Menu do segundo atributo (dinâmico)
           switch (escolha1) {
           case 1:
                resultado1 = populacao1 > populacao2 ? 1 : 2;
                soma1 += populacao1;
                soma2 += populacao2;
           break;
           case 2:
                resultado1 = area1 > area2 ? 1 : 2;
                soma1 += area1;
                soma2 += area2;
           break;
           case 3:
                resultado1 = pib1 > pib2 ? 1 : 2;
                soma1 += pib1;
                soma2 += pib2;
           break;
           case 4:
                resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 2;
                soma1 += pontosturisticos1;
                soma2 += pontosturisticos2;
           break;
           case 5:
                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 2;
                soma1 += densidadepopulacional1;
                soma2 += densidadepopulacional2;
           break;
           case 6:
                resultado1 = pibpercapta1 > pibpercapta2 ? 1 : 2;
                soma1 += pibpercapta1;
                soma2 += pibpercapta2;
           break;
           default:
                printf("Opção inválida!\n");
           break;
           return 0;
    }

    // Menu do segundo atributo (dinâmico)
    printf("\nEscolha o segundo atributo para comparação (não pode repetir o primeiro):\n");
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turísticos\n");
    if (escolha1 != 5) printf("5. Densidade Populacional\n");
    if (escolha1 != 6) printf("6. PIB per Capita\n");
    scanf("%d", &escolha2);

    switch (escolha2) {
        case 1:
            resultado2 = populacao1 > populacao2 ? 1 : 2;
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            resultado2 = area1 > area2 ? 1 : 2;
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            resultado2 = pib1 > pib2 ? 1 : 2;
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 2;
            soma1 += pontosturisticos1;
            soma2 += pontosturisticos2;
            break;
        case 5:
            resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 2;
            soma1 += densidadepopulacional1;
            soma2 += densidadepopulacional2;
            break;
        case 6:
            resultado2 = pibpercapta1 > pibpercapta2 ? 1 : 2;
            soma1 += pibpercapta1;
            soma2 += pibpercapta2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Resultado final
    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s (soma=%.2f) x %s (soma=%.2f)\n", nome1, soma1, nome2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", nome1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", nome2);
    else
        printf("Empate!\n");

      return 0;
}