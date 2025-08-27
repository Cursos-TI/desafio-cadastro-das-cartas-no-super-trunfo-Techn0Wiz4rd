#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Aventureiro)



int main() {

    //***DECLARAÇÃO DE VARIÁVEIS***



    //BLOCO DE VARIÁVEIS DA PRIMEIRA CIDADE:

    //Variáveis do nome, código e estado da primeira cidade.
    char nomeCidade1[1000], codigoCidade1[1000], estadoCidade1;
    //Variáveis de população total e quantidade de pontos turísticos da primeira cidade. 
    int populacao1, pontosTuristicos1; 
    //Variáveis de área e PIB da primeira cidade.
    float area1, PIB1; 
    
    



    //BLOCO DE VARIÁVEIS DA SEGUNDA CIDADE:

    //Variáveis do nome, código e estado da segunda cidade.
    char nomeCidade2[1000], codigoCidade2[1000], estadoCidade2; 
    //Variáveis da população total e quantidade de pontos turísticos da segunda cidade. 
    int populacao2, pontosTuristicos2; 
    //Variáveis de área e PIB da segunda cidade
    float area2, PIB2; 

    
    
    
    


    
    //***CADASTRO DE CARTAS***
    


    /*os blocos abaixo, formados pelas funções "printf" e "scanf" constituem a parte funcional do preenchimento da PRIMEIRA CARTA, 
    bem como uma mensagem de boas vindas e instruções gerais. */



    //Boas vindas + instruções gerais, com 3 linhas para melhor legibilidade.
    printf("Bem Vindo(a) ao Super Trunfo! Preencha cada campo conforme as instruções abaixo!\n\n\n");
    
    


    //Instruções sobre o nome do Estado.
    printf("Primeiramente, é necessário informar um Estado!\nInstruções: Informe apenas uma única letra, de 'A' a 'H', para o nome!\n\nEstado: ");
    //scanf que captura o caracter inserido pelo usuário e o endereça à variável char "estadoCidade1", ou seja, da primeira cidade.
    scanf(" %c", &estadoCidade1);
    
    

    //Instruções de criação da primeira cidade e de como preencher seu nome.
    printf("\nLindo! Agora, vamos criar o nome da sua PRIMEIRA cidade!\nInstruções: use '_' para marcar quaisquer espaços. Por exemplo: João_Pessoa\n\nCidade: ");
    //Uso da função scanf, para capturar o nome da cidade escolhida em formato string (%s) e endereçar este valor à variável.
    scanf("%s", nomeCidade1); 
    
    

    //Instruções sobre a forma de preenchimento do código da primeira cidade, exibindo o nome selecionado na etapa anterior, para melhor entendimento e imersão do usuário.
    printf("\nÓtimo! Agora, utilize letras maiúsculas de 'A' a 'H' + números de 01 a 04 para o código de %s!\nExemplos: A01, B04, C03, D01 etc\n\nCódigo: ", nomeCidade1);
    //Recolhe o código da primeira cidade, informado pelo usuário e, em seguida, endereça o valor à variável "CodigoCidade1".
    scanf("%s", codigoCidade1);
    


    //Instruções de preenchimento da área da primeira cidade, novamente exibindo o nome registrado, para melhor experiência do usuário.
    printf("\nMaravilha! Agora, informe o valor da área total de %s em KM²!\nExemplos: 975, 560.29 etc.\n\nÁrea: ", nomeCidade1);
    //Scanf responsável por formatar o valor de entrada (a área informada pelo usuário) como float e, em seguida, endereça-lo à variável area1.
    scanf("%f", &area1); 

    

    //Instruções de preenchimento da população da primeira cidade, novamente exibindo seu nome.
    printf("\nExplêndido! Agora, insira o total de habitantes de %s! \nExemplo: Se sua cidade tem 10 mil habitantes, insira 10000! NÃO USE '.' OU ','!\n\nPopulação: ", nomeCidade1);
    //Recolhe o valor fornecido como "população" e o endereça à variável "populacao1", ou seja, a população da primeira cidade.
    scanf("%d", &populacao1);
    



    // Instruções de preenchimento do PIB da primeira cidade.
    printf("\nEstupendo! Insira o valor do PIB (em bilhões de Reais) de %s!\nexemplo: 700, 185.78 etc (não use o formato '1.000.000' e similares)\n\nPIB: ", nomeCidade1);
    //Escaneia o valor de entrada para o PIB da primeira cidade e o atribui à variável "PIB1".
    scanf("%f", &PIB1);
    



    //Instruções de preenchimento do total de Pontos turísticos da primeira cidade.
    printf("\nQuase lá! Insira o número total de pontos turísticos em %s!\nExemplo: 5, 10, 20 etc\n\nNúmero de pontos turísticos: ", nomeCidade1);
    //Captura e atribui o valor informado pelo usuário à variável "pontosTuristicos1".
    scanf("%d", &pontosTuristicos1);
    



    /*Os blocos abaixo constituem o cadastro da carta da >>SEGUNDA CIDADE<<*/



    //Espaçamento entre as linhas.
    printf("\n\n");
    //A printf abaixo exibe as informações para que o usuário preencha os campos da segunda carta.
    printf("Espetacular! Sua primeira carta já está pronta! Agora, é só preencher os dados da sua SEGUNDA CIDADE! Os passos são os mesmos da primeira!\n\n");
    

    //Instruções para o nome do estado
    printf("Insira o Estado. Lembre-se, apenas de 'A' a 'H'!\n\nEstado: ");
    //Coleta e atribuição do valor inserido à variável estadoCidade2.
    scanf(" %c", &estadoCidade2);
    

    //Instruções de preenchimento para a segunda cidade.
    printf("\nMagnífico! Agora, o nome da sua SEGUNDA cidade!\nLembre-se: use '_' caso necessite de espaços, como em 'Porto_Alegre', por exemplo!\n\nCidade: ");
    //Coleta e atribuição do nome da segunda cidade para a variável nomeCidade2.
    scanf("  %s", nomeCidade2);
    


    //Instruções de preenchimento do código para a segunda cidade
    printf("\nLegal! Agora, digite um código para %s! Certifique-se de inserir um código diferente!\nRelembrando: Letra do Estado + 01 a 04! Exemplo: D03\n\nCódigo: ", nomeCidade2);
    //Coleta e atribuição do valor informado à variável codigoCidade2
    scanf("  %s", codigoCidade2);
    



    //Instruções de preenchimento da área da segunda cidade.
    printf("\nInsira a área de %s (em KM²). Lembre-se dos formatos aceitos: 1300|1300.87|45.78 etc.\n\nÁrea: ", nomeCidade2);
    //Coleta e atribui o valor informado da área da segunda cidade à variável area2.
    scanf(" %f", &area2);
    
    

    //Prompt de preenchimento da população da segunda cidade.
    printf("\nQuantos habitantes %s possui?\n\nPopulação: ", nomeCidade2);
    //Escaneamento do valor e atribuição do mesmo à variável populacao2
    scanf(" %d", &populacao2);
    


    //Intruções de preenchimento do PIB da segunda cidade.
    printf("\nQual é o PIB (em bilhões de Reais) de %s? Lembre-se: Não utilze formatos como: '1.352.48' ou similares. Exemplos de formato correto: 352 ou 352.48\n\nPIB: ", nomeCidade2);
    //Escaneamento e atribuição do valor coletado à variável PIB2
    scanf(" %f", &PIB2);
    


    //Instruções de preenchimento do número total de pontos turísticos da segunda cidade.
    printf("Qual o número de pontos turísticos totais em %s?\n\nNúmero de pontos turísticos: ", nomeCidade2);
    //coleta e atribui o valor informado à variável pontosTuristicos2.
    scanf(" %d", &pontosTuristicos2);


    //DENSIDADE POPULACIONAL E PIB PER CAPITA DAS DUAS CARTAS

    //Variável de densidade populacional da primeira cidade
    float DenPopulacional1 = (float) populacao1 / area1;
    //Variável de PIB per capita da primeira cidade
    float PIBPerCapita1 = (PIB1 * 1000000000) / (float) populacao1;

    //Variável de densidade populacional da segunda cidade
    float DenPopulacional2 = (float) populacao2 / area2;
    //Variável de PIB per capita da segunda cidade
    float PIBPerCapita2 = (PIB2 * 1000000000) / ((float) populacao2);
    


    //***EXIBIÇÃO DAS INFORMAÇÕES CADASTRADAS PARA AMBAS AS CARTAS***
    printf("\n\nSUCESSO! Você cadastrou as suas cartas! Confira abaixo como ficaram a sua primeira e segunda carta, respectivamente:");
    


    //Exibição dos dados da PRIMEIRA carta:
    //Cabeçalho da fase de exibição de informações da primeira cidade.
    printf("\n\nDADOS DE SUA PRIMEIRA CIDADE:");
   


    //Exibição das informações da primeira cidade.
    printf("\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de Reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f habitantes/KM²\nPIB per capita: R$ %.2f", estadoCidade1, codigoCidade1, nomeCidade1, populacao1, area1, PIB1, pontosTuristicos1, DenPopulacional1, PIBPerCapita1);
    


    //Exibição dos dados da SEGUNDA carta:
    //Quebra-linhas.
    printf("\n\n");
    //Cabeçalho da fase de exibição das informações da segunda cidade.
    printf("DADOS DA SUA SEGUNDA CIDADE:\n\n");


    //Exibição das informações da segunda cidade.
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de Reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f habitantes/KM²\nPIB per capita: R$ %.2f\n", estadoCidade2, codigoCidade2, nomeCidade2, populacao2, area2, PIB2, pontosTuristicos2, DenPopulacional2, PIBPerCapita2);


    return 0;
}
