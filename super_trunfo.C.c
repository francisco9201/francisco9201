#include <stdio.h>

int main() {
       //Declaração das Variáveis.
    char Carta1[4], Carta2[4];
    char Estado1[4] = "SP", Estado2[4] = "RJ";
    char Codigo1[9] = "A01", Codigo2[9] = "B02";
    char Cidade1[50] = "SãoPaulo", Cidade2[50] = "RioDeJaneiro";
    unsigned long int Populacao1 = 12325000, Populacao2 = 6748000;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turisticos1, Turisticos2;
    float Densidade1, PibPercapita1, Densidade2, PibPercapita2, SuperPoder1, SuperPoder2;
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;
     // Apresentação do Jogo
    printf(" ### Super Trunfo Brasil ###\n");

    // Entrada e saída dos dados Carta1
    printf("=== CARTA 1 ===\n");

    printf("Carta: \n");
    scanf("%s", Carta1);

    printf("Estado: \n");
    scanf("%s", Estado1);

    printf("Código: \n");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: \n ");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%lu", &Populacao1);

    printf("Área: (km²)\n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos túristicos: \n ");
    scanf("%d", &Turisticos1);

    // Cálculos (feitos após leitura dos dados)
    Densidade1 = Populacao1 / Area1;
    PibPercapita1 = PIB1 / Populacao1;



    // Saída do cálculo dos dados
    printf("Densidade populacional: %.5f hab/km²\n", Densidade1);
    printf("PIB per capita: R$ %.2f \n", PibPercapita1);


    Densidade1 = (float)Populacao1 / Area1;       // conversão explícita
    PibPercapita1 = PIB1 / (float)Populacao1;     // conversão explícita

    // Super Poder
    SuperPoder1 = (float)Populacao1              // converte população para float
               + Area1
               + PIB1
               + (float)Turisticos1
               + PibPercapita1
               + (1.0 / Densidade1);           // inverso da densidade

    printf("\n--- RESULTADOS CARTA 1 ---\n");
    printf("Super Poder: %.2f\n", SuperPoder1);





     // Entrada e saída dos dados Carta2
    printf("=== CARTA 2 ===\n");

    printf("Carta: \n");
    scanf("%s", Carta2);

    printf("Estado: \n");
    scanf("%s", Estado2);

    printf("Código: \n");
    scanf("%s", Codigo2);

    printf("Nome da Cidade: \n ");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%lu", &Populacao2);

    printf("Área: (km²)\n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: \n ");
    scanf("%d", &Turisticos2);


 // Cálculos (feitos após leitura dos dados)
    Densidade2 = Populacao2 / Area2;
    PibPercapita2 = PIB2 / Populacao2;

    
    Densidade2 = (float)Populacao2 / Area2;       // conversão explícita
    PibPercapita2 = PIB2 / (float)Populacao2;     // conversão explícita

    // Super Poder
    SuperPoder2 = (float)Populacao2               // converte população para float
               + Area2
               + PIB2
               + (float)Turisticos2
               + PibPercapita2;
               + (1.0 / Densidade2);          // inverso da densidade

    printf("\n--- RESULTADOS CARTA 2 ---\n");

    printf("Super Poder: %.2f\n", SuperPoder2);

    // ================= CÁLCULOS =================
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PibPercapita1 = PIB1 / Populacao1;
    PibPercapita2 = PIB2 / Populacao2;



     //Comparação das cartas.
    printf("\n=== RESULTADOS (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");

    // -------- RESULTADOS --------
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta- %d venceu (%d)\n",
           (Populacao1 > Populacao2) ? 1 : 2,
           (Populacao1 > Populacao2) ? 1 : 0);

    printf("Area: Carta- %d venceu (%d)\n",
           (Area1 > Area2) ? 1 : 2,
           (Area1 > Area2) ? 1 : 0);

    printf("PIB: Carta- %d venceu- (%d)\n",
           (PIB1 > PIB2) ? 1 : 2,
           (PIB1 > PIB2) ? 1 : 0);

    printf("Pontos Turisticos: Carta- %d venceu (%d)\n",
           (Turisticos1 > Turisticos2) ? 1 : 2,
           (Turisticos1 > Turisticos2) ? 1 : 0);

    printf("Densidade Populacional: Carta- %d venceu (%d)\n",
           (Densidade1 < Densidade2) ? 1 : 2,
           (Densidade1 < Densidade2) ? 1 : 0); // menor vence

    printf("PIB per Capita: Carta- %d venceu (%d)\n",
           (PibPercapita1 > PibPercapita2) ? 1 : 2,
           (PibPercapita1 > PibPercapita2) ? 1 : 0);

    printf("Super Poder: Carta- %d venceu (%d)\n",
           (SuperPoder1 > SuperPoder2) ? 1 : 2,
           (SuperPoder1 > SuperPoder2) ? 1 : 0);


           // ================= COMPARAÇÃO =================
    printf("\n=== Comparação ===\n");

    // Escolha fixa do atributo para comparação: PIB per capita
    if (PibPercapita1 > PibPercapita2) {
        printf("Carta 1 venceu no atributo PIB per capita!\n");
    } else if (PibPercapita2 > PibPercapita1) {
        printf("Carta 2 venceu no atributo PIB per capita!\n");
    } else {
        printf("Empate no atributo PIB per capita!\n");
    }

    // Exibir valores formatados
    printf("Carta 1 - %s (%s): %d\n", Cidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%s): %d\n", Cidade2, Estado2, Populacao2);


    printf("\n### MENU DE COMPARAÇÃO ###\n");

    printf("\nEscolha o atributo para Comparar as Cartas:\n");

 // ===== MENU 1 =====
    printf("\n=== MENU DE COMPARAÇÃO (Escolha 2 atributos) ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("\nEscolha o PRIMEIRO atributo (1-5):\n ");
    scanf("%d", &escolha1);


     // ===== MENU 2 (dinâmico, exclui a primeira opção) =====
    printf("\nAgora escolha o SEGUNDO atributo (1-5, diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    do {
        printf("\nEscolha o SEGUNDO atributo: ");
        scanf("%d", &escolha2);
        if (escolha2 == escolha1) {
            printf("⚠️ Você já escolheu esse atributo! Escolha outro.\n");
        }
    } while (escolha2 == escolha1);

    printf("\n=== RESULTADOS DA RODADA ===\n");
    printf("Carta 1 - %s (%s)\n", Cidade1, Estado1);
    printf("Carta 2 - %s (%s)\n\n", Cidade2, Estado2);

    // ===== COMPARAÇÃO DO PRIMEIRO ATRIBUTO =====
    switch (escolha1) {
        case 1: valor1_c1 = Populacao1; valor1_c2 = Populacao2;
                printf("Atributo 1: População\n");
                break;
        case 2: valor1_c1 = Area1; valor1_c2 = Area2;
                printf("Atributo 1: Área\n");
                break;
        case 3: valor1_c1 = PIB1; valor1_c2 = PIB2;
                printf("Atributo 1: PIB\n");
                break;
        case 4: valor1_c1 = Turisticos1; valor1_c2 = Turisticos2;
                printf("Atributo 1: Pontos Turísticos\n");
                break;
        case 5: valor1_c1 = Densidade1; valor1_c2 = Densidade2;
                printf("Atributo 1: Densidade Demográfica\n");
                break;
    }

    // ===== COMPARAÇÃO DO SEGUNDO ATRIBUTO =====
    switch (escolha2) {
        case 1: valor2_c1 = Populacao1; valor2_c2 = Populacao2;
                printf("Atributo 2: População\n");
                break;
        case 2: valor2_c1 = Area1; valor2_c2 = Area2;
                printf("Atributo 2: Área\n");
                break;
        case 3: valor2_c1 = PIB1; valor2_c2 = PIB2;
                printf("Atributo 2: PIB\n");
                break;
        case 4: valor2_c1 = Turisticos1; valor2_c2 = Turisticos2;
                printf("Atributo 2: Pontos Turísticos\n");
                break;
        case 5: valor2_c1 = Densidade1; valor2_c2 = Densidade2;
                printf("Atributo 2: Densidade Demográfica\n");
                break;
    }

    // ===== EXIBIÇÃO DOS VALORES =====
    printf("\nValores:\n");
    printf("Carta 1 -> Atributo 1: %.2f | Atributo 2: %.2f\n", valor1_c1, valor2_c1);
    printf("Carta 2 -> Atributo 1: %.2f | Atributo 2: %.2f\n", valor1_c2, valor2_c2);

    // ===== REGRAS DE COMPARAÇÃO =====
    // Atributo 1
    if (escolha1 == 5) { // densidade (menor vence)
        if (valor1_c1 < valor1_c2)
         printf("-> Carta 1 venceu no atributo 1 (Densidade)\n");
        else if (valor2_c2 < valor1_c1)
         printf("-> Carta 2 venceu no atributo 1 (Densidade)\n");
        else 
        printf("-> Empate no atributo 1 (Densidade)\n");
    } else {
        if (valor1_c1 > valor1_c2)
         printf("-> Carta 1 venceu no atributo 1\n");
        else if (valor1_c2 > valor1_c1) 
        printf("-> Carta 2 venceu no atributo 1\n");
        else printf("-> Empate no atributo 1\n");
    }

    // Atributo 2
    if (escolha2 == 5) { // densidade (menor vence)
        if (valor2_c1 < valor2_c2) 
        printf("-> Carta 1 venceu no atributo 2 (Densidade)\n");
        else if (valor2_c2 < valor2_c1)
         printf("-> Carta 2 venceu no atributo 2 (Densidade)\n");
        else printf("-> Empate no atributo 2 (Densidade)\n");
    } else {
        if (valor2_c1 > valor2_c2) 
        printf("-> Carta 1 venceu no atributo 2\n");
        else if (valor2_c2 > valor2_c1) 
        printf("-> Carta 2 venceu no atributo 2\n");
        else 
        printf("-> Empate no atributo 2\n");
    }

    // ===== SOMA FINAL =====
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (SÃO PAULO): %.2f\n", soma1);
    printf("Carta 2 (RIO DE JANEIRO): %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\n🏆 Carta 1 (SÃO PAULO) venceu a rodada pelo somatório!\n");
    else if (soma2 > soma1)
        printf("\n🏆 Carta 2 (RIO DE JANEIRO) venceu a rodada pelo somatório!\n");
    else
        printf("\n🤝 Empate!\n");




    return 0;
}
