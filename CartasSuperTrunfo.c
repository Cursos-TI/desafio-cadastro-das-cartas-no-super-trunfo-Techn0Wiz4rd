#include <stdio.h>


// Desafio Super Trunfo - Países (Nível inciante) - Tema 3

//Função para comparar 2 atributos. O parâmetro "compTipo" assinala o tipo de comparação.
int comparador(float atributoCaUm, float atributoCaDois, int compTipo) {

        //conversão dos atributos, caso sejam do tipo Int e não float.
        if (compTipo == 0 || compTipo == 2) 
            {
                atributoCaUm = (int) atributoCaUm;
                atributoCaDois = (int) atributoCaDois;
            }
        //variável que armazenará o resultado a ser retornado
        int resultado;
        //Verificando se está sendo calculada a densidade populacional, representada pelo compTipo = 1
        if (compTipo == 1) 
            {
                if (atributoCaUm < atributoCaDois) 
                    {
                        //atribui vitória a carta 1
                        resultado = 1;
                    } 
                else if (atributoCaUm > atributoCaDois) 
                    {
                        //atribui vitória a carta 2
                        resultado = 2;
                    } 
                else 
                    {
                        //indica um empate entre as cartas 1 e 2
                        resultado = 0;
                    }
            } 
        //Verificando e calculando atributos numérios (exceto densidade populacional).
        else
            {
                if (atributoCaUm < atributoCaDois) 
                    {
                        //vitória da segunda carta
                        resultado = 2;
                    }
                else if (atributoCaUm > atributoCaDois) 
                    {
                        //vitória da primeira carta
                        resultado = 1;
                    } 
                else 
                    {
                        //empate entre as duas cartas
                        resultado = 0;
                    }
        };

        if (compTipo == 0 || compTipo == 2) 
            {
                //Conversão do resultado para Int pois os valores de compTip iguais a 0 e 2 são do tipo Int e não float.
                resultado = (int) resultado;
                //Retornando o resultado para a variável que chamou a função.
                return resultado;
            } 
        else 
            {   
                //Apenas restorna o resultado para a variável que chamou a função, sem sonversões.
                return resultado;
            }

        
    };


int exibirComparacao(char cartaUm[1000], char cartaDois[1000], float atributoCartaUm, float atributoCartaDois, int tipoAtributo, char atributoNome[1000]) {
    //Variável que chama  a função de comparação de 2 atributos e, depois, armazena o resultado. 1 = Carta 1 vence, 2 = Carta 2 vence e 0 = Empate
    int resultadoComparacao = comparador(atributoCartaUm, atributoCartaDois, tipoAtributo);
    //char atributoNome;
    float exibirAtributoUm = atributoCartaUm;
    float exibirAtributoDois = atributoCartaDois;
    
    //Determinar o nome e tipo de atributo sendo exibido!
    /* if (tipoAtributo == 0) 
        {
            atributoNome = "População";
            exibirAtributoUm = (int) atributoCartaUm;
            exibirAtributoDois = (int) atributoCartaDois;
        } 
    else if (tipoAtributo == 1) 
        {
            atributoNome = "Densidade demgráfica";
        } 
    else if (tipoAtributo == 2) 
        {
        atributoNome = "Número de pontos turísticos";
        exibirAtributoUm = (int) atributoCartaUm;
        exibirAtributoDois = (int) atributoCartaDois;
        } 
    else if (tipoAtributo == 3)
        {
            atributoNome = "PIB";
        }    
    else if (tipoAtributo == 4)
        {
            atributoNome = "Área";
        } */

    //Exibição da comparação de um atributo específico
    printf("Comparando as duas cidades:\n\n");
    printf("\natributo sendo comparado: %s\n\n\n", atributoNome);
    if (tipoAtributo == 0 || tipoAtributo == 2)
        {
            printf("%s: %d\tVS\t%s: %d", cartaUm, (int) atributoCartaUm, cartaDois, (int) atributoCartaDois);
        } 
    else 
        {
            printf("%s: %.2f\tVS\t%s: %.2f", cartaUm, atributoCartaUm, cartaDois, atributoCartaDois);
        }
    
    //Determinação do resultado conforme o valor retornado pela função comparador, armazenada na variavel resultadoComparacao.
    if (resultadoComparacao == 1) {
        printf("\n\nA carta 1 (%s) venceu!\n", cartaUm);
    } else if (resultadoComparacao == 2) {
        printf("\n\nA carta 2 (%s) venceu!\n", cartaDois);
    } else {
        printf("\n\nAs cidades %s e %s estão empatadas!\n", cartaUm, cartaDois);
    }
};    

//Código principal
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


    //BLOCO DE VARIÁVEIS DE COMPARAÇÃO DE ATRIBUTOS ENTRE AS CARTAS


    //Comparador de população.
    int compPopulacao = populacao1 > populacao2;
    //Comparador de área.
    float compArea = area1 > area2;
    //Comparador de PIB.
    float compPIB = PIB1 > PIB2;
    //Comparador de pontos turísticos (número total).
    int compPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    //Comparador de densidade populacional.
    float compDenPopulacional = DenPopulacional1 < DenPopulacional2;
    //Comparador de PIB per capita.
    float compPIBPerCapita = PIBPerCapita1 > PIBPerCapita2;
    //Cálculo do Super Poder da primeira cidade.
    float superPoder1 = (float) populacao1 + area1 + PIB1 + (float) pontosTuristicos1 + PIBPerCapita1 + (1 / DenPopulacional1);
    //Cálculo do Super Poder da segunda cidade.
    float superPoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosTuristicos2 + PIBPerCapita2 + (1 / DenPopulacional2);
    //Comparador de Super Poder.
    float compSuperPoder = superPoder1 > superPoder2;

    
    int saidaDoPrograma = 0;

    
    

    do 
        {   
            int opcaoComparacao;
            printf("\n\n\n\t***MENU DE COMPARAÇÃO***\n\n\n");
            printf("Vamos comparar suas cidades: %s e %s!\nInsira abaixo o número que corresponde ao tipo de comparação que você deseja realizar!\n\n", nomeCidade1, nomeCidade2);
            printf("1. População\n");
            printf("2. Densidade demográfica\n");
            printf("3. Número de pontos turísticos\n");
            printf("4. PIB\n");
            printf("5. Área\n");
            printf("6. Sair do programa\n");
            printf("Opção: ");

            scanf("%d", &opcaoComparacao);
            
            switch (opcaoComparacao) 
                {
                    case 1:
                        char popExibir[1000] = "População";
                        exibirComparacao(nomeCidade1, nomeCidade2, populacao1, populacao2, 0, popExibir);
                    break;
                    case 2:
                        char DensDemoExibir[1000] = "Densidade demográfica";
                        exibirComparacao(nomeCidade1, nomeCidade2, DenPopulacional1, DenPopulacional2, 1, DensDemoExibir);
                    break;
                    case 3:
                        char PontosTuristicosExibir[1000] = "Pontos turísticos";
                        exibirComparacao(nomeCidade1, nomeCidade2, pontosTuristicos1, pontosTuristicos2, 2, PontosTuristicosExibir);
                    break;
                    case 4:
                        char PibExibir[1000] =  "PIB";
                        exibirComparacao(nomeCidade1, nomeCidade2, PIB1, PIB2, 3, PibExibir);
                    break;
                    case 5:
                        char AreaExibir[1000] = "Área";
                        exibirComparacao(nomeCidade1, nomeCidade2, area1, area2, 4, AreaExibir);
                    break;
                    case 6:
                        saidaDoPrograma = 1;
                    break;
                    default:
                        printf("Opção inválida!");
                    break;
                }
        } 
    
    while (saidaDoPrograma == 0);

    //printf para debug dos valores de superpoder; (linha desativada)
    //printf("\n\n\n\nSuperPoderes: o poder de %s é %f\nO poder de %s é %f\n\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
    
    //BLOCO DE IMPRESSÃO DAS INFORMAÇÕES DE COMPARAÇÃO


    

    return 0;
}
