#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //***DECLARAÇÃO DE VARIÁVEIS***



    //BLOCO DE VARIÁVEIS DA PRIMEIRA CIDADE:



    char nomeCidade1[100], codigoCidade1[100], estadoCidade1;
    //Variáveis do nome, código e estado da primeira cidade.
    int populacao1, pontosTuristicos1; 
    //Variáveis de população total e quantidade de pontos turísticos da primeira cidade. 
    float area1; 
    //Variável de área da primeira cidade. 
    float PIB1;
    //Variável de PIB da segunda cidade.



    //BLOCO DE VARIÁVEIS DA SEGUNDA CIDADE:



    char nomeCidade2[100], codigoCidade2[100], estadoCidade2; 
    //Variáveis do nome, código e estado da segunda cidade.
    int populacao2, pontosTuristicos2; 
    //Variáveis da população total e quantidade de pontos turísticos da segunda cidade. 
    float area2; 
    //Variável de área da segunda cidade. 
    float PIB2;
    //variável de PIB da segunda cidade
    
    //***CADASTRO DE CARTAS***
    


    /*os blocos abaixo, formados pelas funções "printf" e "scanf" constituem a parte funcional do preenchimento da PRIMEIRA CARTA, 
    bem como uma mensagem de boas vindas e instruções gerais. */



    printf("Bem Vindo(a) ao Desafio Super Trunfo! Preencha cada campo conforme as instruções abaixo!\n\n\n");
    //Boas vindas + instruções gerais, com 3 linhas para melhor legibilidade.
    


    printf("Primeiramente, é necessário informar um Estado!\nDica: Informe apenas uma das letras da 'A' a 'H' para o nome!\n\nEstado: ");
    //Instruções sobre o nome do Estado.
    scanf("%c", &estadoCidade1);
    //scanf que captura o caracter inserido pelo usuário e o endereça à variável char "estadoCidade1", ou seja, da primeira cidade.
    


    printf("\nLindo! Agora, vamos criar o nome da sua PRIMEIRA cidade!\nDica: use '_' para marcar quaisquer espaços. Por exemplo: João_Pessoa\n\nCidade: ");
    //Instruções de criação da primeira cidade e de como preencher seu nome.
    scanf("%s", &nomeCidade1); 
    //Uso da função scanf, para capturar o nome da cidade escolhida em formato string (%s) e endereçar este valor à variável
    


    printf("\nÓtimo! Agora, utilize letras maiúsculas de 'A' a 'H' + números de 01 a 04 para o código de %s !\nExemplo: A01, B04, C03, D01 etc\n\nCódigo: ", nomeCidade1);
    //Instruções sobre a forma de preenchimento do código da primeira cidade.
    scanf("%s", &codigoCidade1);
    //Recolhe o código da primeira cidade, informado pelo usuário e, em seguida, endereça o valor à variável "CodigoCidade1".



    printf("\nMaravilha! Agora, informe o valor da área total de %s em KM²!\nExemplos: 975, 560.29 etc.\n\nÁrea: ", nomeCidade1);
    //Instruções de preenchimento da área da primeira cidade.
    scanf("%f", &area1); 
    //Scanf responsável por formatar o valor de entrada (a área informada pelo usuário) como float e, em seguida, endereça-lo à variável area1.



    printf("\nExplêndido! Agora, por favor, insira o total de habitantes de %s! \nExemplo: se sua cidade tem 10 mil habitantes, insira 10000! NÃO USE '.' OU ','!\n\nPopulação: ", nomeCidade1);
    //Instruções de preenchimento da população da primeira cidade.
    scanf("%i", &populacao1);
    //Recolhe o valor fornecido como "população" e o endereça à variável "populacao1", ou seja, a população da primeira cidade.



    printf("\nEstupendo! Insira o valor do PIB de %s!\nexemplo: 1435000, 1850900.78 etc (não use o formato '1.000.000')\n\nPIB: ", nomeCidade1);
    // Instruções de preenchimento do PIB da primeira cidade.
    scanf("%f", &PIB1);
    //Escaneia o valor de entrada para o PIB da primeira cidade e o atribui à variável "PIB1";



    printf("\nQuase lá! Insira o número total de pontos turísticos em %s!\nExemplo: 5, 10, 20 etc\n\nNúmero de pontos turísticos: ", nomeCidade1);
    //Instruções de preenchimento do total de Pontos Turísticos da Primeira cidade.
    scanf("%i", &pontosTuristicos1);
    //Captura e atribui o valor informado pelo usuário à variável "pontosTuristicos1";




    /*Os blocos abaixo constituem o cadastro da carta da >>SEGUNDA CIDADE<<*/




    printf("Espetacular! Sua primeira carta já está pronta! Agora, é só preencher os dados da sua SEGUNDA CIDADE! Os passos são os mesmos da primeira!\n\n\n\n");
    //A printf acima exibe as informações para que o usuário preencha os campos da segunda carta.

    printf("Insira o Estado. Lembre-se, apenas de 'A' a 'H'!\n\nEstado: ");
    //Instruções para o nome do estado
    scanf("%c", &estadoCidade2);
    //Coleta e atribuição do valor inserido à variável estadoCidade2 

    printf("\nMagnífico! Agora, o nome da sua SEGUNDA cidade!\nLembre-se: use '_' caso necessite de espaços, como em 'Porto_Alegre', por exemplo!\n\nCidade:");
    //Instruções de preenchimento para a segunda cidade
    scanf("%s", &nomeCidade2);
    //Coleta e atribuição do nome da segunda cidade para a variável nomeCidade2


    printf("Legal! Agora, um digite um código para %s! Certifique-se de inserir um código diferente!\nRelembrando: Letra do Estado + 01 a 04! Exemplo: D03\n\nCódigo: ", nomeCidade2);
    //Instruções de preenchimento do código para a segunda cidade
    scanf("%s", &codigoCidade2);
    //Coleta e atribuição do valor informado à variável codigoCidade2



    printf("Insira a área de %s (em KM²). Lembre-se dos formatos aceitos: 1300|1300.87|45.78 etc.\n\nÁrea: ", nomeCidade2);
    //Instruções de preenchimento da área da segunda cidade.
    scanf("%f", &area2);
    //Coleta e atribui o valor informado da área da segunda cidade à variável area2.

    printf("Quantos habitantes %s possui?\n\nPopulação: ", nomeCidade2);
    //Prompt de preenchimento da população da segunda cidade.
    scanf("%i", &populacao2);
    //Escaneamento do valor e atribuição do mesmo à variável populacao2

    printf("Qual é o PIB de %s? Lembre-se: Não utilze formatos como: '1.352.48' ou similares. Exemplos de formato correto: 1352 ou 1352.48\n\nPIB: ", nomeCidade2);
    //Intruções de preenchimento do PIB da segunda cidade.
    scanf("%f", &PIB2);
    //Escaneamento e atribuição do valor coletado à variável PIB2


    printf("Qual o número de pontos turísticos totais em %s?\n\nNúmero de pontos turísticos: ", nomeCidade2);
    //Instruções de preenchimento do número total de pontos turísticos da segunda cidade.
    scanf("%i", &pontosTuristicos2);
    //coleta e atribui o valor informado à variável pontosTuristicos2.



    //***EXIBIÇÃO DAS INFORMAÇÕES CADASTRADAS PARA AMBAS AS CARTAS***



    //Exibição dos dados da PRIMEIRA carta:



    //Exibição dos dados da SEGUNDA carta:









    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
