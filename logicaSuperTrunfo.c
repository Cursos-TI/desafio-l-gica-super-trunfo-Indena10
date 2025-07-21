#include <stdio.h>

int main() {
    
int populacao,populacao2, NPontos, NPontos2, estado[20],estado2[20];
float PIB,PIB2, area,area2, densidade, densidade2, PibPerCapta, PibPerCapta2, SuperPoder, SuperPoder2;
char nomeCidade[50], nomeCidade2[50],codigo[20],codigo2[20];

printf("Entre com os dados da Carta1\n");
  
//Dados da carta 1
printf("Digite o Estado entre A a H: \n");
scanf("%s", &estado);

printf("Digite o código entre 01 e 04: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade);

printf("Digite o tamanho da população: \n");
scanf("%d", &populacao);

printf("Digite a área total do país: \n");
scanf("%f", &area);

printf("Digite o PIB do país: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos existentes: \n");
scanf("%d", &NPontos);

//Dados da carta 2

printf("Entre com os dados da Carta2\n");
   
printf("Digite o Estado entre A a H: \n");
scanf("%s", &estado2);

printf("Digite o código entre 01 e 04: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade2);

printf("Digite o tamanho da população: \n");
scanf("%d", &populacao2);

printf("Digite a área total do país: \n");
scanf("%f", &area2);

printf("Digite o PIB do país: \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos existentes: \n");
scanf("%d", &NPontos2);

PibPerCapta = (PIB / populacao);
densidade = (populacao/area);
PibPerCapta2 = (PIB2/populacao2);
densidade2 = (populacao2/area2);
SuperPoder = (populacao + area + PIB + NPontos + PibPerCapta - densidade);
SuperPoder2 = (populacao2 + area2 + PIB2 + NPontos2 + PibPerCapta2 - densidade2);

printf("CARTA 1\n");
printf("Estado:%s \n",estado);
printf("Código:%s \n",codigo);
printf("Nome do Cidade:%s \n",nomeCidade);
printf("População: %d \n", populacao);
printf("A Área to total é: %.f km2\n", area);
printf("PIB:%.f \n", PIB);
printf("Numero de pontos turísticos:%d \n",NPontos);
printf("Densidade populaacional: %f hab/km2 \n", densidade);
printf("PIB per Capita: %f reais \n", PibPerCapta);
printf("Super Poder: %f\n", SuperPoder);

printf("\n");

printf("CARTA 2\n");
printf("Estado:%s \n",estado2);
printf("Código:%s \n",codigo2);
printf("Nome do Cidade:%s \n",nomeCidade2);
printf("População: %d \n", populacao2);
printf("A Área to total é: %.f km2 \n", area2);
printf("PIB:%.f \n", 2);
printf("Numero de pontos turísticos:%d \n",NPontos2);
printf("Densidade populacional: %f hab/km2 \n", densidade2);
printf("PIB per Capita: %f reais \n", PibPerCapta2);
printf("Super Poder: %f\n", SuperPoder2);
    
printf("\n");

// comparação das cartas
printf("Comparação de cartas\n");

printf("\n");  
   
    if (PIB > PIB2) {
        printf("Carta 1 - %s - %.f\n", nomeCidade, PIB);
        printf("Carta 2 - %s - %.f\n", nomeCidade2, PIB2);
        printf(" Carta 1: %s venceu\n", nomeCidade);
     } else {
        printf("Carta 1 - %s - %.f\n", nomeCidade, PIB);
        printf("Carta 2 - %s - %.f\n", nomeCidade2, PIB2);
        printf(" Carta 2: %s venceu\n", nomeCidade2);
     }

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
