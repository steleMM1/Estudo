// Sintaxe ''printf'' - printf (''%formato1 %formato2'', texto1, texto2,...)
// ''\n'' adiciona uma nova linha ao final do programa e move o cursor para a nova linha
// É possível substituir o '\n' por ''espaço'' para que os dados sejam apresentados na mesma linha com espaço entre os dados

    /*
    %d: Imprime um inteiro no formato decimal
    %i: Equivalente ao %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica
    %c: Imprime um único caractere
    %s: Imprime uma 'palavra'
    */

/*
    int idade = 23;
    float altura = 1.77;
    double peso = 97.5;
    char letra = 'G';
    char nome[20] = "Gustavo";

    // ("texto  formato", variável)
    printf("Nome: %s\n", nome);
    printf("altura: %f\n", altura);
    printf("Peso: %f\n", peso);
    printf("Idade: %i\n", idade);
    printf("Primeira letra do nome: %c\n", letra);

*/



#include <stdio.h>
#include <string.h>


int main(){

    int idade;
    int matricula;
    float altura;
    float peso;
    char letra;
    char nome [20];
    char repeat;


    do {

    printf("Insira seu nome:  \n");
    fgets(nome,20, stdin);              //''fgets'' lê todos os caracteres dentro dos 20 declarados enquanto ''scanf'' apenas lê os caracteres até o primeiro espaço
    nome[strcspn(nome, "\n")] = 0;      //remove o ''\n'' que é inserido automáticamente no final do dado adquirido na função ''fgets'' 
    printf("Insira sua idade: \n");
    scanf("%i", &idade);
    printf("Insira sua altura: \n");
    scanf("%f", &altura);
    printf("Insira seu peso: \n");
    scanf("%f", &peso);
    printf("Insira sua matrícula: \n");
    scanf("%i", &matricula);
    printf("Insira a primeira letra do seu nome: \n");
    scanf(" %c", &letra);

    printf("\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %i anos\n", idade);
    printf("altura: %.2f metros\n", altura);
    printf("Peso: %.2f kg\n", peso);
    printf("Matrícula: %i\n", matricula);
    printf("Seu nome inicia com a letra: %c\n", letra);

    printf("\n");

    printf("Deseja repetir o questionário? (s/n):");
    scanf(" %c", &repeat);
    getchar();  //Limpa o buffer da tecla ''enter'' após o scanf, assim impedindo que a próxima instrução passe direto sem a entrada de algum dado


    printf("\n");
    printf("\n");
    printf("\n");

    } while (repeat == 's' || repeat == 'S');

    return 0;

}