#include <stdio.h>

int main() {
    
int opcao,populacao,populacao2, NPontos, NPontos2, estado[20],estado2[20];
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
   
printf("Escolha qual atributo voce quer comparar\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Número de pontos turísticos\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Voce escolheu População\n");
    if (populacao>populacao2)
{
    
    printf("Estado : %s - Estado : %s\n", estado, estado2);
    printf("Voce esolheu atributo população\n");
    printf(" População do Estado : %s é: %d - População do Estado : %s é : %d\n", estado, populacao, estado2, populacao2);
    printf("Carta 1 venceu : %d\n", populacao);

}else
{
    printf("Estado : %s - Estado : %s\n", estado, estado2);
    printf("Voce esolheu atributo população\n");
    printf(" População do Estado : %s é: %d - População do Estado : %s é : %d\n", estado, populacao, estado2, populacao2);
    printf("Carta 2 venceu : %d\n", populacao2);

}
    break;
    
case 2:
    printf("Voce escolheu Area\n");
    if (area>area2)
    {
        printf("Estado : %s - Estado : %s\n", estado, estado2);
        printf("Voce esolheu atributo area\n");
        printf(" Área da Cidade : %s é: %2.f - Area da cidade : %s é : %2.f\n", nomeCidade, area, nomeCidade2, area2);
        printf("Carta 1 venceu : %2.f\n", area);

}else
{
    printf("Estado : %s - Estado : %s\n", estado, estado2);
    printf("Voce esolheu atributo area\n");
    printf(" Área da Cidade : %s é: %2.f - Area da cidade : %s é : %2.f\n", nomeCidade, area, nomeCidade2, area2);
    printf("Carta 2 venceu : %2.f\n", area2);
    }
    
    break;

    case 3:
    printf("Voce escolheu PIB\n");

    if (PIB>PIB2)
    {
        printf("Estado : %s - Estado : %s\n", estado, estado2);
        printf("Voce esolheu atributo PIB\n");
        printf(" PIB da Cidade : %s é: %2.f - PIB da cidade : %s é : %2.f\n", nomeCidade, PIB, nomeCidade2, PIB2);
        printf("Carta 1 venceu : %2.f\n", PIB);

}else
{
    printf("Estado : %s - Estado : %s\n", estado, estado2);
    printf("Voce esolheu atributo area\n");
    printf(" Área da Cidade : %s é: %2.f - Area da cidade : %s é : %2.f\n", nomeCidade, PIB, nomeCidade2, PIB2);
    printf("Carta 2 venceu : %2.f\n", PIB2);
    }

    break;

case 4:
    printf("Voce escolheu Numero de pontos tursiticos\n");

    if (NPontos2>NPontos2)
    {
        printf("Estado : %s - Estado : %s\n", estado, estado2);
        printf("Voce esolheu atributo Pontos turisticos\n");
        printf(" N Pontos da Cidade : %s é: %d - N Pontos da cidade : %s é : %d\n", nomeCidade, NPontos, nomeCidade2, NPontos2);
        printf("Carta 1 venceu : %d\n", NPontos);

}else
{
        printf("Estado : %s - Estado : %s\n", estado, estado2);
        printf("Voce esolheu atributo Pontos turisticos\n");
        printf(" N Pontos da Cidade : %s é: %d - N Pontos da cidade : %s é : %d\n", nomeCidade, NPontos, nomeCidade2, NPontos2);
        printf("Carta 2 venceu : %d\n", NPontos2);
    }
    
    break;
}
}
