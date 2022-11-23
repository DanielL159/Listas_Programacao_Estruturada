/*
Exercicio 5
//exercicio 6
*/
#include <stdio.h>
#include <math.h>

//EXERCICIO 1
/*Escreva um programa  lê matricula e as notas de no máximo 100
alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota
enquanto o usuário desejar. Após o armazenamento permita ao usuário
consultar a nota de um aluno digitando sua matricula, o programa deve permitir
no máximo 10 consultas para um mesmo ciclo de execução do programa*/
/*
int main(){
    int matricula[4],i,notas[4],continua,count=0,pesquisa;
    
    
    for ( i = 0; i < 4; i++)
    {
        printf("Qual a matricula do aluno %d:",i+1);
        scanf("%d",&matricula[i]);

        printf("Qual a nota do aluno %d:",i+1);
         scanf("%d",&notas[i]);


        printf("Deseja inserir um usuario (1 ou 0): ");
        fflush(stdin);
        scanf("%d", &continua);
        count ++;
                
        if(continua == 0){
            printf("Pessoas cadastradas atualmente %d\n\n", count);
            break;
        }
    }

    for ( i = 0; i < 10; i++)
    {
        printf("Deseja consultar alguma nota (1 ou 0):");
        scanf("%d",&continua);

        if (continua == 1)
        {
            printf("Me forneca a matricula:");
            scanf("%d",&pesquisa);
            for ( i = 0; i < 4; i++)
            {
                if (pesquisa == matricula[i])
                {
                    printf("Matricula %d\nNota%d \n\n",matricula[i],notas[i]);
                    break;
                }
            }
        }
        else if( continua == 0)
        {
            break;
        }
    }

}
*/

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

//Exercicio 5
/* Desenvolva um programa em C que leia duas matrizes 4 x 4 e escreva uma
terceira com os maiores valores de cada posição das matrizes lidas*/

int main(){
    int i ,j;
    int A[4][4], B[4][4], C[4][4];



    for( i = 0; i < 4; i++)
    {

        for( j = 0; j < 4; j++)//adiciona valor
        {

            printf("A(%i,%i) =", i, j);
            scanf("%d", &A[i][j]);

        }

    }



    for( i = 0; i < 4; i++)
    {

        for( j = 0; j < 4; j++)
        {

            printf("B(%i,%i) =", i, j);
            scanf("%i", &B[i][j]);

        }

    }



    for( i = 0; i < 4; i++)
    {

        for( j = 0; j < 4; j++)
        {

            if(A[i][j] > B[i][j])
            {

                C[i][j] = A[i][j];

            }

            else if (B[i][j]> A[i][j])
            {

                C[i][j] = B[i][j];

            }

        }

    }

    for( i = 0; i < 4; i++)
    {

        for( j = 0; j < 4; j++)
        {

         printf("C(%d,%d) = %d\n", i, j, C[i][j]);

        }

    }

    return 0;
}

//exercicio 6




//exercicio 7 
/*
int main (){
 int matris[3][3],col1=0,col2=0,col3=0,i,j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf ("ME forneça o valor da matrix na posicao %d %d",i,j);
            scanf("%d",&matris[i][j]);
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",matris[i][j]);
        
        }
        printf("\n");
    }




    for ( i = 0; i < 3; i++)
    {
        
        col1 = col1 + matris[i][i];
        printf("%d",col1);
       
    }

    for ( i = 0; i < 2; i++)
    {
         col2 = col2+ matris[i][i+1]; 
    }

    for ( i = 0; i < 2; i++)
    { 
       col3 = col3 + matris[i+1][i];
    }

    printf("O Valor da diagonal princilao e=%d\nO valor da diagonal superior e=%d\nE o valor da diagonal inferior e=%d ",col1,col2,col3);
    
}*/

// Exercicio 8
/*
int main (){
    int matrix[10][10],i,j ;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (i<j)
            {

             matrix[i][j] = 2*i + 7*j -2;  

            }
            else if (i==j)
            {

            matrix[i][j]= pow(3*i,2) - 1;

            }
            else if (i>j)
            {

               matrix[i][j]= pow(4*i,3) + pow(5*j,2) +1;

            } 
        }
            
    }
     for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%d\t",matrix[i][j]);
        
        }
        printf("\n");
    }
      

}*/

//Exercicio 9

/*Faça um programa em C que leia uma matriz 10 x 3 com as notas de 10
alunos em 3 disciplinas. Em seguida, calcule e escreva o número de alunos
cuja pior nota foi na disciplina 1, o número de alunos cuja pior nota foi na
disciplina 2, e o número de alunos cuja a pior nota foi na disciplina 3. Em caso
de empate das piores notas de um aluno, o critério de desempate é arbitrário,
mas o aluno deve ser contabilizado apenas uma vez*/
/*
int main(){
    int matrix[10][3],pior = 100,piorNota[3],aluno[3],materia[3],i,j;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Me forneça a nota %d do aluno %d (%d,%d):",j,i,i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    


    for ( j = 0; j < 3; j++)
    {
        pior = 100;
        for ( i = 0; i < 10; i++)
        {
            if (matrix[i][j]< pior)
            {
                pior = matrix[i][j];
                piorNota[j]=matrix[i][j];
                aluno[j]=i;
                materia[j]=j;
            }
        }
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        printf("Pior aluno na materia  %d foi %d com %d\n",i,aluno[i],piorNota[i]);
    }
    


}*/