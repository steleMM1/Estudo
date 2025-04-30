#include <stdio.h>
#include <string.h>


int main(){

    char repeat;

    


    do {


//////////////////////// CARTA 1 ////////////////////////////


int quantidade_de_pontos_turísticos1;
float população1;
float pib1;
float area1;
char codigo1 [5];
char nome_da_cidade1 [20];
char estado1 [5];


printf("DADOS DA CARTA 1  \n");

    printf("Insira o nome da cidade:  \n");
    fgets(nome_da_cidade1,20, stdin);              //''fgets'' lê todos os caracteres dentro dos 20 declarados enquanto ''scanf'' apenas lê os caracteres até o primeiro espaço
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;      //remove o ''\n'' que é inserido automáticamente no final do dado adquirido na função ''fgets'' 

    printf("Insira o estado do local: \n");
    fgets(estado1, 5, stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%i", &quantidade_de_pontos_turísticos1);

    printf("Insira a população: \n");
    scanf("%f", &população1);
    
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    printf("Insira a área do local: \n");
    scang("%f", &area1);

    printf("Insira o código da cidade: \n");
    fgets(codigo1, 5, stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
   

    printf("\n");

    
    printf("Carta 1 \n");

    printf("Nome: %s\n", nome_da_cidade1);
    printf("Estado: %s\n", estado1);
    printf("Quantidade de pontos turísticos: %i\n", quantidade_de_pontos_turísticos1);
    printf("População: %.2f pessoas\n", população1);
    printf("PIB: %.4f \n", pib1);
    printf("Área: m²\n", area1);
    printf("Código da cidade: %c\n", codigo1);

    printf("\n");

    //////////////////////// CARTA 2 ////////////////////////////


int quantidade_de_pontos_turísticos2;
float população2;
float pib2;
float area2;
char codigo2 [5];
char nome_da_cidade2 [20];
char estado2 [5];

      
printf("DADOS DA CARTA 2  \n");

    printf("Insira o nome da cidade:  \n");
    fgets(nome_da_cidade2,20, stdin);              //''fgets'' lê todos os caracteres dentro dos 20 declarados enquanto ''scanf'' apenas lê os caracteres até o primeiro espaço
    nome_da_cidade2[strcspn(nome_da_cidade1, "\n")] = 0;      //remove o ''\n'' que é inserido automáticamente no final do dado adquirido na função ''fgets'' 

    printf("Insira o estado do local: \n");
    fgets(estado2, 5, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%i", &quantidade_de_pontos_turísticos2);

    printf("Insira a população: \n");
    scanf("%f", &população2);
    
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira a área do local: \n");
    scang("%f", &area2);

    printf("Insira o código da cidade: \n");
    fgets(codigo2, 5, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
   

    printf("\n");


    printf("Carta 2 \n");

    printf("Nome: %s\n", nome_da_cidade2);
    printf("Estado: %s\n", estado2);
    printf("Quantidade de pontos turísticos: %i\n", quantidade_de_pontos_turísticos2);
    printf("População: %.2f pessoas\n", população2);
    printf("PIB: %.4f \n", pib2);
    printf("Área: m²\n", area2);
    printf("Código da cidade: %c\n", codigo2);

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
