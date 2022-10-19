#include <stdio.h>

//EXERCICIO 1
/*Escreva um programa  lê matricula e as notas de no máximo 100
alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota
enquanto o usuário desejar. Após o armazenamento permita ao usuário
consultar a nota de um aluno digitando sua matricula, o programa deve permitir
no máximo 10 consultas para um mesmo ciclo de execução do programa*/
/*int main(){
    int matricula[100],i,notas[100];
    for ( i = 0; i < 100; i++)
    {
      
    }
    


}*/

//Exercico 2
/*
int main(){
    int v[10],v1[10],v2[10],i,calc,par[10],impar[10];

    for ( i = 0; i < 10; i++)
    {
        printf("M forneca o numero %d :",i);
        scanf("%d",&v[i]);

        calc = v[i] %2;
        if (calc ==0)
        {
            v1[i]=v[i];
            par[i] = 1;
        }else if (calc > 0)
        {
           v2[i]=v[i];
            impar[i]=1;
        }  
    }

    for ( i = 0; i < 10; i++)
    {
      if (impar[i]==1)
      {
       printf("Numero impar e %d na posicao %d\n",v2[i],i);
      }  
    }
    for ( i = 0; i < 10; i++)
    {
        if (par[i]==1 )
      {
        printf("Numero par e %d na posicao %d\n",v1[i],i);
      }
    }
}
*/

//Exercicio 3
/*para ler 10 números DIFERENTES a serem
armazenados em um vetor. Os dados deverão ser armazenados no vetor na
ordem que forem sendo lidos, sendo que caso o usuário digite um número que
já foi digitado anteriormente, o programa deverá pedir para ele digitar outro
número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir
na tela o vetor final que foi digitado*/
/*
int main (){
    int num[10],i,a,j;

    for ( i = 0; i < 10; i++)
    {
       printf("Me forneca o numero %d :",i);
       scanf("%d",&num[i]);
       a=num[i];

       for ( j = 0; j < 10; j++)
        {
            if (a ==num[j])
            {
                printf("Me forneca outro numero pfv pois o num %d ja existe :",num[j]);
                scanf("%d",&num[j]);
                
            }
            
        }
    
    }

}*/

//EXERCICIO 4
/*Crie um programa em C que leia os elementos de uma matriz inteira 4 x 6 e
imprima todos os elementos, exceto os elementos da diagonal principal.*/
/*
int main(){
    int num[6][6],i,j;
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
           printf("Me forneça o numero a ser armazenado em [%d] [%d] :", i,j);
           scanf("%d",&num[i][j]);
        }
        
    }
     for ( i = 1; i < 6; i++)
    {
        for (  j= 0; j < 6; j++)
        {
            printf("%d\n",num[i][j]);
        }
        
    }
}*/

//Exercicio5
/* Desenvolva um programa em C que leia duas matrizes 4 x 4 e escreva uma
terceira com os maiores valores de cada posição das matrizes lidas*/
/*
int main(){

int A[4][4], B[4][4], C[4][4];



for(int i = 0; i < 4; i++)
{

 for(int j = 0; j < 4; j++)
 {

  printf("A(%i,%i) =", i, j);

  scanf("%i", &A[i][j]);

 }

}



for(int i = 0; i < 4; i++)
{

 for(int j = 0; j < 4; j++)
 {

  printf("B(%i,%i) =", i, j);
  scanf("%i", &B[i][j]);

 }

}



for(int i = 0; i < 4; i++)
{

 for(int j = 0; j < 4; j++)
 {

  if(A[i][j] >= B[i][j])
  {

   C[i][j] = A[i][j];

  }

  else
  {

   C[i][j] = B[i][j];

  }

 }

}

for(int i = 0; i < 4; i++)
{

 for(int j = 0; j < 4; j++)
 {

  printf("C(%i,%i) = %i\n", i, j, C[i][j]);

 }

}

return 0;
}
*/