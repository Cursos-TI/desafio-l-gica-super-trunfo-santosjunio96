#include <stdio.h>
 
int main() {
    
    // Variaveis carta 01           
    char Estado_01 [50];
    char CodigoDaCarta_01 [50];
    char NomeDaCidade_01 [50];
    unsigned long int Populacao_01;
    float Area_01;
    float PIB_01;
    int NumeroDePontosTuristicos_01;
    float DensidadePopulacional_01;
    float PibPerCapita_01;
    float DesindadeMenorPopulacao_01;
    float SuperPoder_01;


    printf("---------------------------------------\n");
    printf("Solicitação de informacaões da Carta 01\n");
    printf("---------------------------------------\n");
    // coloquei esse printf apenas para deixar o codigo visivelmente mais atraente apos rodado
  

    printf("Digite o nome do Estado:"); // Estado representado por letra de A-Z
    scanf("%s", Estado_01);

    printf("Digite o codigo da carta:"); // codigo da carta (Estado + numero de 01 a 99)
    scanf("%s", CodigoDaCarta_01);

    printf("Digite o nome da Cidade:"); // Nome da cidade referencia
    scanf("%s", NomeDaCidade_01);

    printf("Digite numero de habitantes:"); // Quantidade de habitantes da cidade
    scanf("%lu", &Populacao_01);

    printf("Digite o numero da Area:"); // Extensao do territorio da cidade
    scanf("%f", &Area_01);

    printf("Digite valor do PIB:"); // Produto interno bruto
    scanf("%f", &PIB_01);

    printf("Digite quantidade de pontos turisticos:"); // Quantidade de pontos turisticos da cidade
    scanf("%d", &NumeroDePontosTuristicos_01);

    // Cauculo de Densidade populacional
    DensidadePopulacional_01 = (float) Populacao_01 / Area_01;
    // Calculo de Pib per capita
    PibPerCapita_01 = (float) PIB_01 / Populacao_01;

    // Calculo DensidadeMenorPopulação
    DesindadeMenorPopulacao_01 = 1/DensidadePopulacional_01;
    // Calculo Super poder
    SuperPoder_01 = Populacao_01 + Area_01 + PIB_01 + NumeroDePontosTuristicos_01 + PibPerCapita_01 + DesindadeMenorPopulacao_01;


    printf("----------Carta 01---------\n");
    printf("Estado: %s \n", Estado_01); 
    printf("Codigo da carta: %s \n", CodigoDaCarta_01); 
    printf("Nome da Cidade: %s \n", NomeDaCidade_01); 
    printf("População: %lu \n", Populacao_01); 
    printf("Area: %.2f \n", Area_01); 
    printf("PIB: %.2f \n", PIB_01); 
    printf("Pontos turisticos: %d \n", NumeroDePontosTuristicos_01); 
    printf("Densidade populacional: %.2f \n",DensidadePopulacional_01); // Divisão população / area
    printf("Pib per capita: %.2f \n", PibPerCapita_01); // Divisão PIB / população
    printf("Menor densidade populacional: %f \n", DesindadeMenorPopulacao_01);
    printf("Super Poder: %.2f \n", SuperPoder_01);
    printf("---------------------------------------\n");
    // coloquei esse printf apenas para deixar o codigo visivelmente mais atraente apos rodado
    
    /* Codigo com dados sem usar o scanf  

    char Estado_01 [50] = "A";
    char CodigoDaCarta_01 [50] = "A01";
    char NomeDaCidade_01 [50] = "Camaragibe";
    int Populacao_01 = 147771;
    float Area_01 = 51.32;
    float PIB_01 = 1850647.50;
    int NumeroDePontosTuristicos_01 = 10;
    float DensidadePopulacional;
    float PibPerCapita;

    printf("----------Informacaoes Carta 01----------\n");
    printf("Estado: %s \n", Estado_01);
    printf("Codigo da carta: %s \n", CodigoDaCarta_01);
    printf("Nome da Cidade: %s \n", NomeDaCidade_01);
    printf("População: %d \n", Populacao_01);
    printf("Area: %.2f \n", Area_01);
    printf("PIB: %.2f \n", PIB_01);
    printf("Pontos turisticos: %d \n", NumeroDePontosTuristicos_01);
    printf("Densidade populacional: %.2f\n",DensidadePopulacional_01);
    printf("Pib per capita: %.2f\n", PibPerCapita_01); */
    
    // Variaveis carta 02  
    char Estado_02 [50];
    char CodigoDaCarta_02 [50];
    char NomeDaCidade_02 [50];
    unsigned long int Populacao_02;
    float Area_02;
    float PIB_02;
    int NumeroDePontosTuristicos_02;
    float DensidadePopulacional_02;
    float PibPerCapita_02;
    float DesindadeMenorPopulacao_02;
    float SuperPoder_02;

    printf("Solicitação de informacaões da Carta 02\n");
    printf("---------------------------------------\n");
    // coloquei esse printf apenas para deixar o codigo visivelmente mais atraente apos rodado

    printf("Digite o nome do Estado:"); // Estado representado por letra de A-Z
    scanf("%s", Estado_02);

    printf("Digite o codigo da carta:"); // codigo da carta (Estado + numero de 01 a 99)
    scanf("%s", CodigoDaCarta_02);

    printf("Digite o nome da Cidade:");  // Nome da cidade referencia
    scanf("%s", NomeDaCidade_02);

    printf("Digite numero de habitantes:"); // Quantidade de habitantes da cidade
    scanf("%lu", &Populacao_02);

    printf("Digite o numero da Area:");  // Extensao do territorio da cidade
    scanf("%f", &Area_02);

    printf("Digite valor do PIB:"); // Produto interno bruto
    scanf("%f", &PIB_02);

    printf("Digite quantidade de pontos turisticos:"); // Quantidade de pontos turisticos da cidade
    scanf("%d", &NumeroDePontosTuristicos_02);

    // Cauculo de Densidade populacional
    DensidadePopulacional_02 = (float) Populacao_02 / Area_02;
    // Calculo de Pib per capita
    PibPerCapita_02 = (float) PIB_02 / Populacao_02;

    // Calculo DensidadeMenorPopulação
    DesindadeMenorPopulacao_02 = 1/DensidadePopulacional_02;
    // Calculo Super poder
    SuperPoder_02 = Populacao_02 + Area_02 + PIB_02 + NumeroDePontosTuristicos_02 + PibPerCapita_02 + DesindadeMenorPopulacao_02;


    printf("----------Carta 02---------\n");
    printf("Estado: %s \n", Estado_02);
    printf("Codigo da carta: %s \n", CodigoDaCarta_02);
    printf("Nome da Cidade: %s \n", NomeDaCidade_02);
    printf("População: %lu \n", Populacao_02);
    printf("Area: %.2f \n", Area_02);
    printf("PIB: %.2f \n", PIB_02);
    printf("Pontos turisticos: %d \n", NumeroDePontosTuristicos_02);
    printf("Densidade populacional: %.2f\n",DensidadePopulacional_02); // Divisão população / area
    printf("Pib per capita: %.2f\n", PibPerCapita_02); // Divisão PIB / população
    printf("Menor densidade populacional: %f \n", DesindadeMenorPopulacao_02);
    printf("Super Poder: %.2f \n", SuperPoder_02);
    printf("-----------------------------------------------\n");
    // coloquei esse printf apenas para deixar o codigo visivelmente mais atraente apos rodado

  /* Codigo com dados sem usar o scanf  

    char Estado_02 [50] = "B";
    char CodigoDaCarta_02 [50] = "B02";
    char NomeDaCidade_02 [50] = "Salvador";
    int Populacao_02 = 2417678;
    float Area_02 = 693.8;
    float PIB_02 = 62954488.00;
    int NumeroDePontosTuristicos_02 = 17;
    float DensidadePopulacional_02;
    float PibPerCapita_02;

    printf("----------Informacaoes Carta 02----------\n");
    printf("Estado: %s \n", Estado_02);
    printf("Codigo da carta: %s \n", CodigoDaCarta_02);
    printf("Nome da Cidade: %s \n", NomeDaCidade_02);
    printf("População: %d \n", Populacao_02);
    printf("Area: %.2f \n", Area_02);
    printf("PIB: %.2f \n", PIB_02);
    printf("Pontos turisticos: %d \n", NumeroDePontosTuristicos_02);
    printf("Densidade populacional: %.2f\n",DensidadePopulacional_02); // Divisão população / area
    printf("Pib per capita: %.2f\n", PibPerCapita_02); // Divisão PIB / população*/
     
    int Opcao, Atributo1, Atributo2, ResultadoPopulacao,ResultadoTurista;
    float ResultadoArea,ResultadoPIB,ResultadoDensidade,ResultadoPercapita, ResultadoSuperPoder;
        
    printf("Game Super trunfo\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras Jogo\n");
    printf("3. Sair Jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d",&Opcao);
    printf("----------------------------------------------------------------------------------\n");

    switch (Opcao){
    case 1:
      printf("Escolher atributos para duelo\n");
      printf("1. População \n");
      printf("2. Area \n");
      printf("3. PIB \n");
      printf("4. Pontos turisticos \n");
      printf("5. Densidade populacional \n");
      printf("5. Pib per capita \n");
      printf("6. Super Poder \n");
      printf("----------------------------------------------------------------------------------\n");
      printf("Escolha o 1° atributo: ");
      scanf("%d", &Atributo1);
      printf("Escolha o 2° atributo: ");
      scanf("%d", &Atributo2);

      printf("-------------------------------Atributo 01---------------------------------------\n");
      switch (Atributo1){
        case 1:
          printf("População carta 1: %d\n",Populacao_01);
          printf("População carta 2: %d\n",Populacao_02);
          ResultadoPopulacao = (Populacao_01 > Populacao_02) ? 1: 0;
          if (ResultadoPopulacao == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}
          break;
        case 2:
          printf("Area carta 1: %.2f\n",Area_01);
          printf("Area carta 2: %.2f\n",Area_02);
          ResultadoArea = (Area_01 > Area_02) ? 1: 0;
          if (ResultadoArea == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                
          break;
        case 3:
          printf("PIB carta 1: %.2f\n",PIB_01);
          printf("PIB carta 2: %.2f\n",PIB_02);
          ResultadoPIB = (PIB_01 > PIB_02) ? 1: 0;
          if (ResultadoPIB == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 4:
          printf("Pontos turisticos carta 1: %d\n",NumeroDePontosTuristicos_01);
          printf("Pontos turisticos carta 2: %d\n",NumeroDePontosTuristicos_02);
          ResultadoTurista = (NumeroDePontosTuristicos_01 > NumeroDePontosTuristicos_02) ? 1: 0;
          if (ResultadoTurista == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 5:
          printf("Menor densisade populacional carta 1: %f\n",DesindadeMenorPopulacao_01);
          printf("Menor densidade populacional carta 2: %f\n",DesindadeMenorPopulacao_02);
          ResultadoDensidade = (DesindadeMenorPopulacao_01 < DesindadeMenorPopulacao_02) ? 1: 0;
          if (ResultadoDensidade == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 6:
          printf("Super Poder carta 1: %.2f\n", SuperPoder_01);
          printf("Super Poder carta 2: %.2f\n", SuperPoder_02);
          ResultadoPopulacao = (SuperPoder_01 > SuperPoder_02) ? 1: 0;
          if (ResultadoSuperPoder == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
      default:
        break;}

      printf("-------------------------------Atributo 02---------------------------------------\n");
      switch (Atributo2){
        case 1:
          printf("População carta 1: %d\n",Populacao_01);
          printf("População carta 2: %d\n",Populacao_02);
          ResultadoPopulacao = (Populacao_01 > Populacao_02) ? 1: 0;
          if (ResultadoPopulacao == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}
          break;
        case 2:
          printf("Area carta 1: %.2f\n",Area_01);
          printf("Area carta 2: %.2f\n",Area_02);
          ResultadoArea = (Area_01 > Area_02) ? 1: 0;
          if (ResultadoArea == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                
          break;
        case 3:
          printf("PIB carta 1: %.2f\n",PIB_01);
          printf("PIB carta 2: %.2f\n",PIB_02);
          ResultadoPIB = (PIB_01 > PIB_02) ? 1: 0;
          if (ResultadoPIB == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 4:
          printf("Pontos turisticos carta 1: %d\n",NumeroDePontosTuristicos_01);
          printf("Pontos turisticos carta 2: %d\n",NumeroDePontosTuristicos_02);
          ResultadoTurista = (NumeroDePontosTuristicos_01 > NumeroDePontosTuristicos_02) ? 1: 0;
          if (ResultadoTurista == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 5:
          printf("Menor densisade populacional carta 1: %f\n",DesindadeMenorPopulacao_01);
          printf("Menor densidade populacional carta 2: %f\n",DesindadeMenorPopulacao_02);
          ResultadoDensidade = (DesindadeMenorPopulacao_01 < DesindadeMenorPopulacao_02) ? 1: 0;
          if (ResultadoDensidade == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
        case 6:
          printf("Super Poder carta 1: %.2f\n", SuperPoder_01);
          printf("Super Poder carta 2: %.2f\n", SuperPoder_02);
          ResultadoPopulacao = (SuperPoder_01 > SuperPoder_02) ? 1: 0;
          if (ResultadoSuperPoder == 1){
            printf("Carta 1 Ganhou! \n");}
          else{
            printf("Carta 2 Ganhou! \n");}                    
          break;
      default:
          break;}
      break;
    case 2:
      printf("1° Escolha de Dois Atributos numéricos diferentes para a comparação das cartas,\n");
      printf(" através de menus interativos.\n");
      printf("----------------------------------------------------------------------------------\n");
      printf("2° Para cada atributo, a regra geral é: vence a carta com o maior valor.\n");
      printf("Com exceção da Densidade Demográfica, onde vence a carta com o menor valor.\n");
      printf("----------------------------------------------------------------------------------\n");
      printf("3° Após comparar os dois atributos individualmente, o sistema ira somar os \n");
      printf("valores dos atributos para cada carta. A carta com a maior soma vence a rodada.\n");
      printf("----------------------------------------------------------------------------------\n");
      break;
    case 3:
      printf("Jogo ençerrado \n");
    break;
      default:
        break;}
      
/*
    printf("-------------Carta Vencedora-------------------\n");
    printf("-----------------------------------------------\n");

    if (Populacao_01>Populacao_02){
      printf("População: A carta 01 venceu!\n");}
    else if (Populacao_01 == Populacao_02){
      printf("Empate!\n");}
    else{
      printf("População: A carta 02 venceu!\n");}


    if (Area_01>Area_02){
      printf("Area: A carta 01 venceu!\n");}
    else if (Area_01 == Area_02){
      printf("Empate!\n");}
    else{
      printf("Area: A carta 02 venceu!\n");}


    if (PIB_01>PIB_02){
      printf("PIB: A carta 01 venceu!\n");}
    else if (PIB_01 == PIB_02){
      printf("Empate!\n");}
    else{
      printf("PIB: A carta 02 venceu!\n");}


    if (NumeroDePontosTuristicos_01>NumeroDePontosTuristicos_02){
      printf("Pontos turisticos: A carta 01 venceu!\n");}
    else if (NumeroDePontosTuristicos_01 == NumeroDePontosTuristicos_02){
      printf("Empate!\n");}
    else{
      printf("Pontos turisticos: A carta 02 venceu!\n");}


    if (DesindadeMenorPopulacao_01<DesindadeMenorPopulacao_02){
      printf("Densidade populacional: A carta 01 venceu!\n");}
    else if (DesindadeMenorPopulacao_01 == DesindadeMenorPopulacao_02){
      printf("Empate!\n");}
    else{
      printf("Densidade populacional: A carta 02 venceu!\n");}


    if (PibPerCapita_01>PibPerCapita_02){
      printf("PIB per capita: A carta 01 venceu!\n");}
    else if (PibPerCapita_01 == PibPerCapita_02){
      printf("Empate!\n");}
    else{
      printf("PIB per capita: A carta 02 venceu!\n");}


    if (SuperPoder_01>SuperPoder_02){
      printf("Super poder: A carta 01 venceu!\n");}
    else if (SuperPoder_01 == SuperPoder_02){
      printf("Empate!\n");}
    else{
      printf("Super poder: A carta 02 venceu!\n");}


    return 0;

*/


}