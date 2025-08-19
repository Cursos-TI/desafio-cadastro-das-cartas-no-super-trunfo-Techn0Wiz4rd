#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Bloco de variáveis da primeira cidade
    char nomeCidade1[50], codigoCidade1[50], estadoCidade1; //Declaração das variáveis a cerca do nome, código e estado da primeira cidade.
    int populacao1, pontosTuristicos1; //Declaração das variáveis relativas à população total e a quantidade de pontos turísitcos da primeira cidade. 
    float area1, PIB1;
    
    //Bloco de "printf" e "scanf" que constituem a parte funcional do preenchimento da primeira carta, bem como uma mensagem de boas vindas e instruções gerais. 

    printf("Bem Vindo(a) ao Desafio Super Trunfo! Preencha cada campo conforme as instruções abaixo!\n\n\n"); //Boas vindas + instruções gerais, com 3 linhas para melhor legibilidade.
    
    printf("Primeiramente, é necessário informar um Estado!\n Dica: Informe apenas uma das letras da 'A' a 'H' para o nome!\n Estado: ");//Instruções sobre o nome do Estado.
    scanf("%c", &estadoCidade1);//scanf que captura o caracter inserido pelo usuário e o endereça à variável char "estadoCidade1", ou seja, da primeira cidade.
    
    printf("Lindo! Agora, vamos criar o nome da sua PRIMEIRA cidade!\n Dica: use '_' para marcar quaisquer espaços. Por exemplo: João_Pessoa\n Cidade: ");//Instruções de criação da primeira cidade e de como preencher seu nome.
    scanf("%s", &nomeCidade1);//Uso da função scanf, para capturar o nome da cidade escolhida em formato string (%s) e, endereçar este valor à variável
    
    printf("Ótimo! Agora, utilize letras maiúsculas de 'A' a 'H' + números de 01 a 04 para o código da cidade!\n Exemplo: A01, B04, C03, D01 etc\n\n Código: ");//Instruções sobre a forma de preenchimento do código da primeira cidade.
    scanf("%s", &codigoCidade1);//Recolhe o código da primeira cidade, informado pelo usuário e, em seguida, endereça o valor à variável "CodigoCidade1".

    printf("Maravilha! Agora, informe o valor da área total de sua cidade em KM² (quilômetros quadrados)\n Dica: Utilizar apenas números!\n Área: ");//Instruções de preenchimento da área da primeira cidade.
    scanf("%f", &area1); //Scanf responsável por formatar o valor de entrada (a área informada pelo usuário) como float e, em seguida, endereça-lo à variável area1.

    printf("Explêndido! Agora, por favor, insira o total de habitantes de sua cidade! \nExemplo: se sua cidade tem 10 mil habitantes, insira 10.000!\n\n População: ");//Instruções de preenchimento da população da primeira cidade.
    scanf("%i", &populacao1);//Recolhe o valor fornecido como "população" e o endereça à variável "populacao1", ou seja, a população da primeira cidade.

    printf("Estupendo! Agora, insira o valor do PIB (Produto Interno Bruto)!\n exemplo: Se o PIB é de 1 bilhão, deve-se inserir: 1.000.000.000\n\n PIB: ");// Instruções de preenchimento do PIB da primeira cidade.
    scanf("%f", &PIB1);//Escaneia o valor de entrada para o PIB da primeira cidade e o atribui à variável "PIB1";

    printf("Quase lá! Insira o número total de pontos turisticos da cidade!\n Exemplo: 5, 10, 20 etc\n\n Número de Pontos Turísticos: ");//Instruções de preenchimento do total de Pontos Turísticos da Primeira cidade.
    scanf("%i", &pontosTuristicos1);//Captura e atribui o valor informado pelo usuário à variável "pontosTuristicos1";








    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
