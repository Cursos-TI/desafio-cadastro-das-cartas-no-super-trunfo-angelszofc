#include <stdio.h>
#include <stdlib.h>
#include <cpio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /*Declaração de Variaveis em formato de Array para gravar varios valores*/
    char *cod_carta[3][3] = {};
    char *estado[2][3] = {};    
    char *nome_cidade[20][3] = {};
    int populacao[3] = {}, num_ponto_tur[3] = {};
    float aream2[3] = {}, pib[3] = {};

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*Entrada de dados da PRIMEIRA cartas*/
    printf("Digite o codigo da primeira carta:\n");
    scanf("%s", &cod_carta[0]);
    printf("Digite a Sigla do Estado: (Exemplo: MG) \n");
    scanf("%s", &estado[0]);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade[0]);
    printf("Digite o numero da população dessa cidade:\n");
    scanf("%d", &populacao[0]);
    printf("Digite o numero de pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur[0]);
    printf("Digite a area em metros quadrados dessa cidade:\n");
    scanf("%f", &aream2[0]);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib[0]);
    
    /*Imprimindo dados da PRIMEIRA carta*/
    printf("Dados da Primeira carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[0]);
    printf("Estado: %s\n",estado[0]);
    printf("Cidade: %s\n",nome_cidade[0]);
    printf("Numero da População: %d\n",populacao[0]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[0]);
    printf("Area em M2: %f\n",aream2[0]);
    printf("PIB: %f\n\n",pib[0]);
    
    /*Entrada de dados da SEGUNDA cartas*/
    printf("Digite o codigo da segunda carta:\n");
    scanf("%s", &*cod_carta[1]);
    printf("Digite a Sigla do Estado: (Exemplo: MG)\n");
    scanf("%s", &*estado[1]);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &*nome_cidade[1]);
    printf("Digite o numero da população dessa cidade:\n");
    scanf("%d", &populacao[1]);
    printf("Digite o numero de pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur[1]);
    printf("Digite a area em metros quadrados dessa cidade:\n");
    scanf("%f", &aream2[1]);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib[1]);
    
    /*Imprimindo dados da SEGUNDA carta*/
    printf("Dados da Segunda carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[1]);
    printf("Estado: %s\n",estado[1]);
    printf("Cidade: %s\n",nome_cidade[1]);
    printf("Numero da População: %d\n",populacao[1]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[1]);
    printf("Area em M2: %f\n",aream2[1]);
    printf("PIB: %f\n\n",pib[1]);
   
    /*Entrada de dados da TERCEIRA cartas*/
    printf("Digite o codigo da terceira carta:\n");
    scanf("%s", &*cod_carta[2]);
    printf("Digite a Sigla do Estado: (Exemplo: MG)\n");
    scanf("%s", &*estado[2]);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &*nome_cidade[2]);
    printf("Digite o numero da população dessa cidade:\n");
    scanf("%d", &populacao[2]);
    printf("Digite o numero de pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur[2]);
    printf("Digite a area em metros quadrados dessa cidade:\n");
    scanf("%f", &aream2[2]);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib[2]);
    
    /*Imprimindo dados da TERCEIRA carta*/
    printf("Dados da Terceira carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[2]);
    printf("Estado: %s\n",estado[2]);
    printf("Cidade: %s\n",nome_cidade[2]);
    printf("Numero da População: %d\n",populacao[2]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[2]);
    printf("Area em M2: %f\n",aream2[2]);
    printf("PIB: %f\n\n",pib[2]); 

    /*Entrada de dados da QUARTA cartas*/
    printf("Digite o codigo da Quarta carta:\n");
    scanf("%s", &*cod_carta[3]);
    printf("Digite a Sigla do Estado: (Exemplo: MG)\n");
    scanf("%s", &*estado[3]);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &*nome_cidade[3]);
    printf("Digite o numero da população dessa cidade:\n");
    scanf("%d", &populacao[3]);
    printf("Digite o numero de pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur[3]);
    printf("Digite a area em metros quadrados dessa cidade:\n");
    scanf("%f", &aream2[3]);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib[3]);
    
    /*Imprimindo dados da QUARTA carta*/
    printf("Dados da Quarta carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[3]);
    printf("Estado: %s\n",estado[3]);
    printf("Cidade: %s\n",nome_cidade[3]);
    printf("Numero da População: %d\n",populacao[3]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[3]);
    printf("Area em M2: %f\n",aream2[3]);
    printf("PIB: %f\n\n\n\n",pib[3]);

    printf("Cadastro Finalizado!\n");

    /*Imprimindo dados da PRIMEIRA carta*/
    printf("Dados da Primeira carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[0]);
    printf("Estado: %s\n",estado[0]);
    printf("Cidade: %s\n",nome_cidade[0]);
    printf("Numero da População: %d\n",populacao[0]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[0]);
    printf("Area em M2: %f\n",aream2[0]);
    printf("PIB: %f\n\n",pib[0]);    

    /*Imprimindo dados da SEGUNDA carta*/
    printf("Dados da Segunda carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[1]);
    printf("Estado: %s\n",estado[1]);
    printf("Cidade: %s\n",nome_cidade[1]);
    printf("Numero da População: %d\n",populacao[1]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[1]);
    printf("Area em M2: %f\n",aream2[1]);
    printf("PIB: %f\n\n",pib[1]);

    /*Imprimindo dados da TERCEIRA carta*/
    printf("Dados da Terceira carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[2]);
    printf("Estado: %s\n",estado[2]);
    printf("Cidade: %s\n",nome_cidade[2]);
    printf("Numero da População: %d\n",populacao[2]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[2]);
    printf("Area em M2: %f\n",aream2[2]);
    printf("PIB: %f\n\n",pib[2]);

    /*Imprimindo dados da QUARTA carta*/
    printf("Dados da Quarta carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta[3]);
    printf("Estado: %s\n",estado[3]);
    printf("Cidade: %s\n",nome_cidade[3]);
    printf("Numero da População: %d\n",populacao[3]);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[3]);
    printf("Area em M2: %f\n",aream2[3]);
    printf("PIB: %f\n\n",pib[3]);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
