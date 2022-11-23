#include <stdio.h>
#include <string.h>
#include<stdlib.h>


   

//Exercicio 1) 
/*Leia o nome completo de 2 pessoas e apresente o primeiro nome somente em letras maiúsculas e na linha
seguinte, com uma tabulação, o segundo nome em letras minúsculas, """solicitando outros nomes caso o
usuário deseje. Somente devem ser usadas funções do padrão ANSI da linguagem""" C(DUVIDA NO FINAL )*/ 
/*
int main(){
    int i = 0,opcao=0;
    char nome[2][50],nome2[2][50];
   do {
    printf("Me forneca o nome 1:");
    fflush(stdin);
    fgets(nome[0],50,stdin);

    printf("Me forneca o nome 2:");
    fflush(stdin);
    fgets(nome[1],50,stdin);
   while (nome[0][i] !='\0')
   {
      nome2[0][i] =toupper(nome[0][i]);
      i++;
   }

    for (int i =0;nome[1][i] !='\0' ;i++){

       nome2[1][i]=tolower(nome[1][i]);
    }
   
  
  printf("Nome maisculo :%s\n",nome2[0]);
  printf("Minusculo:%s",nome2[1]);

  printf("Deseja refazer o processo");
  scanf("%d",&opcao);

   }while (opcao == 0);
   
}*/


//Exercicio 2(NAO entendi )


//Exercicio 3
/* Faça um programa que solicite o primeiro e o último nome de 5 pessoas. Assim que a pessoa informar os
dois nomes, apresente em tela o tamanho de cada um deles e se for possível concatene-os em uma única
variável fazendo o uso da função de concatenação de strings.*/
/*
int main (){
   char firstname[5][60],lastname[5][30];
   int i,tamanho1,tamanho2;

   for (i=0;i<5;i++){
      printf("Me forneça seu primero nome:");
      fflush(stdin);
      gets(firstname[i]);

      printf("Me forneça seu ultimo nome:");
      fflush(stdin);
      gets(lastname[i]);

      tamanho1 = strlen(firstname[i]);
      tamanho2 =strlen(lastname[i]);

      printf("O primeiro nome %s tem %d de tamanho\n",firstname[i],tamanho1-1);
      printf("O ultimo nome %s tem %d de tamanho\n",lastname[i],tamanho2-1);

      printf("Nome concatenado :%s\n", strcat(firstname[i],lastname[i]));
      

   }

}*/



// Exercicio 4(melhorar)
/*Elabore um programa que faça o armazenamento de um texto. Em uma janela limpa o texto deverá ser
apresentada com todas as palavras tendo a sua primeira letra em maiúscula e o restante das letras em
minúsculo. Após a apresentação de todo o texto centralize a linha na horizontal e escreva que este texto
possui tantas palavras*/

/*
int main (){
   char texto [150];
   int contado,a;

   printf("Me forneca o texto");
   fflush(stdin);
   fgets(texto,150,stdin);

   contado= strlen(texto);
   a=isspace(texto);
   contado=contado ;

   texto[0] =toupper(texto[0]);
   for ( int i = 1; texto[i] != '\0'; i++)
   {
     texto[i] =tolower(texto[i]);
   
   }
   
   
   
   printf("O texto foi :%s\n",texto);
   printf("O texto possui %i de letras",contado);

}
*/

