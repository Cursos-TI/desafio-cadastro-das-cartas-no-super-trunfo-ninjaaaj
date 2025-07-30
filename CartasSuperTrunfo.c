#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

 char nome [20]; 
 int populaçao , numerodepontosturisticos , codigo;                          
 float áreakm ,PIB; 
 
  char nome2 [20] = "Florianopolis";
  int  populaçao2 =230 ,numerodepontos2 = 4 , cidadevencedora;
  float áreakm2 =300 , PIB2 =40;

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
   scanf ("%f" , &áreakm);
   printf ("A área por km2 da cidade 1 é: %f\n" , áreakm);

   printf ("Qual o PIB da cidade 1?: \n");
   scanf ("%f" , &PIB);
   printf ("O PIB da cidade 1 é: %f\n" , PIB);

   printf ("Qual nome da cidade2? : \n");
   scanf ("%s" ,nome);
   printf ("O nome da cidade 2 é: %s\n" , nome2);

   printf ("Qual a populaçao da cidade 2?: \n");
   scanf ("%d" , &populaçao2);
   printf ("A populaçao da cidade 2 é: %d\n" , populaçao);

   printf ("Qual o numero de pontos turisticos da cidade2?: \n");
   scanf ("%d" , &numerodepontos2);
   printf ("O numero de pontos turisticos da cidade 2 é: %d\n" , numerodepontos2);

   printf ("Qual a área por km2 da cidade 2? : \n");
   scanf ("%f" , &áreakm2);
   printf ("A área por km2 é: %f\n" , áreakm2);

   printf ("Qual o PIB da cidade 2?: \n");
   scanf ("%f" , &PIB2);
   printf ("O PIB da cidade 2 é: %f\n" , PIB2);

   printf ("Qual cidade venceu?: \n");
    scanf ("%d" , &cidadevencedora);
    printf ("A cidade vencedora foi a numero: %d\n" , cidadevencedora );


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
