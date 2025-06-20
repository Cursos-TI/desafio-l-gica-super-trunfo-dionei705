#include <stdio.h>

int main() {
    char cidade[20];
    char estado[20];
    int turistico;
    int populacao;
    float pib;
    float area;
    float densidade;
    float percapita;
    //float percapta;


    printf("Digite a sua cidade: \n");
    scanf("%s", cidade);  // Correto: sem &

    printf("Sua cidade e: %s\n", cidade);

    printf("Digite o seu estado: \n");
    scanf("%s", estado);  // Correto: sem &

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &turistico);  // Correto: sem &

    printf("quantidade de pontos turisticos: %d \n", turistico);

    printf("Digite a sua populacao: \n");
    scanf("%d", &populacao);  // Correto: sem &

    printf("Sua populacao e: %d\n", populacao);

    printf("Digite o seu pib: \n");
    scanf("%f", &pib);

    //printf(" seu pib e: %.3f \n", pib);
    //scanf("%d", &pib);

    printf("Digite a sua area: \n");
    scanf("%f", &area);

    printf("sua area e: %.3fm \n", area);


    densidade = (float) populacao / area;
    
    printf("sua densidade demografica e: %.3f\n", densidade);
    

    percapita = (float) pib / populacao;
    
    printf("sua renda percapita e: %.2f \n ", percapita);
    
    float geral = turistico + populacao + pib + area + densidade + percapita;


    printf("pontos do jogo: %.2f \n", geral);
    

    char cidade2[20];
    char estado2[20];
    int turistico2;
    int populacao2;
    float pib2;
    float area2;
    float densidade2;
    float percapita2;
    //float percapta;
    printf("Qual a sua cidade:\n");
    scanf("%s", cidade2);
    printf("sua cidade e %s\n", cidade2);


    printf("qual o seu estado?\n");
    scanf("%s", estado2);
    printf("seu estado e %s\n", estado2);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &turistico2);  // Correto: sem &

    printf("quantidade de pontos turisticos: %d \n", turistico2);

    printf("Digite a sua populacao: \n");
    scanf("%d", &populacao2);  // Correto: sem &

    printf("Sua populacao e: %d\n", populacao2);

    printf("Digite o seu pib: \n");
    scanf("%f", &pib2);

    printf("seu pib e: %.3f \n", pib2);

    printf("Digite a sua area: \n");
    scanf("%f", &area2);

    printf("sua area e: %.3fm \n", area2);

    densidade2 = (float) populacao2 / area2;
    
    printf("sua densidade demografica e: %.3f\n", densidade2);

    percapita2 = (float) pib2 / populacao2;
    
    printf("sua renda percapita e: %.2f \n ", percapita2);

    float geral2 = turistico2 + populacao2 + pib2 + area2 + densidade2 + percapita2;

    printf("pontos do jogo: %.2f \n", geral2);

     float carta1 = geral > geral2;
     float carta2 =  geral2 > geral;

    printf("mostre qual das cidades tem maior pontuacao: o ganhador e\n");
    printf("cidade1 (%.2f) --- cidade2 (%.2f)\n", carta1, carta2);

    if (geral > geral2)
    {
        printf("carta um: carta vencedora");
    } else {
        printf("carta dois: a carta vencedora");
    }

    
    











    return 0;
}