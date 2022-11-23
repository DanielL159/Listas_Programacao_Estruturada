/*Exercicio 5
  Exercicio 2
  Exercicio 4
*/

#include <stdio.h>
//Exercicio 1

/*
struct Pessoa
{
    char nome[50],endereco[50]; 
    int telefone;
};

int main (){
  struct Pessoa infos[3];
  int i ;

  for ( i = 0; i <3 ; i++)
  {
      
      printf("Me forneca o nome da pessoa %d",i);
      fflush(stdin);
      fgets(infos[i].nome,50,stdin);

      printf("Me forneca o endereco da pessoa %d",i);
      fflush(stdin);
      fgets(infos[i].endereco,50,stdin);


      printf("Me forneca o telefone da pessoa %d",i);
      scanf("%d",&infos[i].telefone);


  }
  for ( i = 0; i < 3; i++)
  {
    printf("Infos:\n%s\n%s\n%d",infos[i].nome,infos[i].endereco,infos[i].telefone);
  }


}*/

//Exercicio 2(Terminar nao entendi o enunciado)
/*Criar um registro chamado DadosAluno, que armazene o nome e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade
de um aluno e armazenar na variável criada; exibir na tela o nome do aluno e a idade do
aluno.*/
/*
struct DadosAluno
{
  char nome[50];
  int idade;
};

int main(){

  struct DadosAluno info ;


}*/

//Exercicio 3
/*
struct exercicio 
{
  char a[10];
  int b;

};

int main(){
  struct exercicio num3;

  printf("Me forneca a string:");
  fflush(stdin);
  fgets(num3.a,10,stdin);

  printf("Me forneca o inteiro");
  scanf("%d",&num3.b);



}*/

//execicio 4 (Terminar nao consegui fazer)
/*Defina uma estrutura em C para armazenar dados de um veículo (Marca, modelo, cor,
quantidade de portas, motorização), crie uma função para armazenar os dados de 10
veículos, outra para mostrar os dados armazenados, a função main() deve conter um
pequeno menu para chamar as funções criadas.*/ 
/*
struct dados
{
 char marca[30],modelo[50],cor[30],motorizacao[50];
 int portas;
};

int armazemDeDados(){
  struct dados carro[10];
  int i;

   for ( i = 0; i < 10; i++)
   {
    printf("Me forneca a a marca :");
    fflush(stdin);
    fgets(carro[i].marca,30,stdin);

    printf("Me forneca a a modelo :");
    fflush(stdin);
    fgets(carro[i].modelo,50,stdin);

    printf("Me forneca a a cor :");
    fflush(stdin);
    fgets(carro[i].cor,30,stdin);

    printf("Me forneca a a motorizacao :");
    fflush(stdin);
    fgets(carro[i].motorizacao,50,stdin);

    printf("Me fornecaa o numero de portas:");
    scanf("%d",&carro[i].portas);
   }
   
}

int mostraDados(){
  struct dados carro[10];
  int i;
  
  for ( i = 0; i < 10; i++)
  {
    
  printf ("O carro %d\nmarca:%s\nmodelo:%s\ncor:%s\n,motorizacao;%s\nQuantidade de portas:%d",carro[i].marca,carro[i].modelo,carro[i].cor,carro[i].motorizacao,carro[i].portas);
  }
  


}
int main(){
  armazemDeDados();
  mostraDados();
  



}*/


//exercicio 5 (NAo ententdi o enunciado)

struct dados
{
  int a,b,c;
};

int main (){
  struct dados vetor[2];
  int i,resultado[3];

  for ( i = 0; i < 2; i++)
  {
    printf("Qual o valor de A:");
    scanf("%d",vetor[i].a);

    printf("Qual o valor de B:");
    scanf("%d",vetor[i].b);

    printf("Qual o valor de C:");
    scanf("%d",vetor[i].c);
  }
  resultado[0]=vetor[0].a + vetor[1].a;
  resultado[1]=vetor[0].b + vetor[1].b;
  resultado[3]=vetor[0].c + vetor[1].c;


}





//Exercicio 6
/*
struct endereco
{
  char rua[50],bairro[50],cidade[50],estado[50];
};

struct cadastro
{
  struct endereco end;

  char nome[50],cpf[11],sexo;
  int salario,identidade,idade;
};

int main (){
  int i, maior = -1,a,busca ;
  struct cadastro cliente[5];//A

  for ( i = 0; i < 5; i++)//B
  {
    
    printf("Me forneca o Nome:");
    fflush(stdin);
    fgets(cliente[i].nome,50,stdin);

    printf("Me forneca o CPF:");
    fflush(stdin);
    fgets(cliente[i].cpf,11,stdin);

    printf("Me forneca sexo (M)asculino ou (F)eminino:");
    fflush(stdin);
    fgets(cliente[i].cpf,1,stdin);

    printf("Me forneca o Salario");
    scanf("%d",&cliente[i].salario);

    printf("Me forneca a identidade");
    scanf("%d",&cliente[i].identidade);

    printf("Me forneca a idade");
    scanf("%d",&cliente[i].idade);

    printf("Me forneca rua:");
    fflush(stdin);
    fgets(cliente[i].end.rua,50,stdin);

    printf("Me forneca a cidade:");
    fflush(stdin);
    fgets(cliente[i].end.cidade,50,stdin);

    printf("Me forneca o bairro:");
    fflush(stdin);
    fgets(cliente[i].end.bairro,50,stdin);

    printf("Me forneca o estado:");
    fflush(stdin);
    fgets(cliente[i].end.estado,50,stdin);

  }

  for ( i = 0; i < 5; i++)
  {
    if (cliente[i].idade > maior )//C
    {
      maior = cliente[i].idade;
      a = i ;
    }

    if (cliente[i].sexo == 'm' || cliente[i].sexo == 'M')//D
    {
      printf("Cliente %d e do sexo Masculino:");
    }

    if (cliente[i].salario > 1000)//D
    {
      printf("Cliente %d e do Recebe um salario Maior que 1000");
    }
    
    }
    printf("A pessoa %d tem a maior idade com %d",a,maior);

    printf ("Qual identidade esta buscando :");
    scanf("%d",&busca);

    for ( i = 0; i < 5; i++)
    {
      if (busca == cliente[i].identidade)
      {
        printf("A Pessoa %d e a que vc busca com a identidade de %d",i,cliente[i].identidade);
      }
      
    }

}
*/
