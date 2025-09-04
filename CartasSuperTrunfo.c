#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

 char nome [20]; 
 int populaçao , numerodepontosturisticos , codigo;                          
 float areakm ,PIB , PIBpercapita , densidadepopulacional; 
 
  char nome_2 [20];
  int  populaçao_2,numerodepontos_2;
  float areakm_2 ,PIBpercapita_2, densidadepopulacional_2, PIB_2;

   printf ("Qual nome da cidade1?: \n");
   scanf ("%s" ,nome);
   printf ("O nome da cidade 1 é: %s\n" , nome);

   printf ("Qual a populaçao da cidade 1?: \n");
   scanf ("%d" , &populaçao);
   printf ("A populaçao da cidade 1 é: %d\n" , populaçao);

   printf ("Qual o numero de pontos turisticos da cidade1? : \n");
   scanf ("%d" , &numerodepontosturisticos);
   printf ("O numero de pontos turisticos da cidade 1 é: %d\n" , numerodepontosturisticos);

   printf ("Qual a área por km2 da cidade1: \n");
   scanf ("%f" , &areakm);
   printf ("A área por km2 da cidade 1 é: %.2f\n" , areakm);

   printf ("Qual o PIB da cidade 1?: \n");
   scanf ("%f" , &PIB);
   printf ("O PIB da cidade 1 é: %.2f\n" , PIB);
  
   PIBpercapita = PIB / populaçao;
   printf ("A densidade populacional da cidade 1 é: %.2f\n" , PIBpercapita);
   
   densidadepopulacional = populaçao / areakm;
   printf ("A densidade populacional da cidade 1 é: %.2f\n" , densidadepopulacional);


   printf ("Qual nome da cidade2? : \n");
   scanf ("%s" ,nome);
   printf ("O nome da cidade 2 é: %s\n" , nome_2);

   printf ("Qual a populaçao da cidade 2?: \n");
   scanf ("%d" , &populaçao_2);
   printf ("A populaçao da cidade 2 é: %d\n" , populaçao_2);

   printf ("Qual o numero de pontos turisticos da cidade2?: \n");
   scanf ("%d" , &numerodepontos_2);
   printf ("O numero de pontos turisticos da cidade 2 é: %d\n" , numerodepontos_2);

   printf ("Qual a área por km2 da cidade 2? : \n");
   scanf ("%f" , &areakm_2);
   printf ("A área por km2 é: %.2f\n" , areakm_2);

   printf ("Qual o PIB da cidade 2?: \n");
   scanf ("%f" , &PIB_2);
   printf ("O PIB da cidade 2 é: %.2f\n" , PIB_2);

    PIBpercapita_2 = PIB / populaçao;
   printf ("A densidade populacional da cidade 1 é: %.2f\n" , PIBpercapita_2);
   
   densidadepopulacional = populaçao / areakm;
   printf ("A densidade populacional da cidade 1 é: %.2f\n" , densidadepopulacional_2);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
