#include  <stdio.h>
#include <math.h>
#include<time.h>
#include <stdlib.h>

/*
//EXERCICIOS 1 e 2 
int main(){
int x;
printf("Quantos alunos a na turma :");
scanf( "%d",&x);//perguntar pq se as variaveis a baixo estiverem em cima nao roda
int nota[x],i;

printf("Quantos alunos a na turma :");
scanf( "%d",&x);

    for (i=0;i<=x-1;i++){
        printf("Qual a nota do aluno %d :",i+1);
        scanf("%d\n",&nota[i]);
    }
    
}
*/

/* nao entedi EXERCICIO 3
int main (){
    int i = 100;
    int dados[i] , calculo ;

while (i <=99)
{
  dados[i] = 1;
  calculo = dados [i] + dados[i+1];
}

}*/
/*
int main (){
char letras [30];
int i ;

   

    for (i=30 ; i>=30 ;i--){
    printf("Por favor me forneca as 30 letras: ");
    scanf("%c",&letras[30]);
    printf("%c",letras[i]);
    }
}
*/
/*//EXERCICIO 5
int main(){
    int numero[80];
    int numeroLido = 0 , i=0;
    printf("Me forneça o numero pfv :");
    scanf("%d ",&numeroLido);

    while(i <80){
     
        printf ("E me forneça os numeros a serem armazenados :");
        scanf("%d",&numero[i]);
        i++;
    }
        for(i =0;i<80;i++){
        if(numeroLido== numero[i]){
        printf("Numero %d igual ao %d",numero[i],numeroLido);
        break;
        }else{
        printf("Nao existe numero igual a %d" ,numeroLido);
        break;
        }
        i++;
}
}*/




//EXERCICIO 7
/*
int main(){
float cd[100],pc10[100],pc,pcresultado[100];
int i;

for ( i = 0; i < 100; i++){
    printf("Por favor me forneça o valor do cd :");
    scanf("%f",&cd[i]);
    pc10[i]= cd[i]+(cd[i] * 0.1);
}

printf("Quanto deseja aumentar:");
scanf("%f",&pc);
for ( i = 0; i < 100; i++){
pcresultado[i]= cd[i]+(cd[i]*(pc/100));
}
printf("Valor original\tValor com 10%%\tValor com %.2f%%\n",pc);

for ( i = 0; i < 100; i++)
{
printf("%.2f\t\t%.2f\t\t%.2f",cd[i],pc10[i],pcresultado[i]);
}
*/

//EXERCICIO 8
/*Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha
pode aparecer em mais de uma posição.*/
/*
int main(){
    int c=5,idade[c],calc=0,i;
    int mvelha=0;
    float media;

    for ( i = 0; i < c; i++)
    {
        printf("Me forneça a idade da pessoa %d ",i);
        scanf("%d",&idade[i]);
    }

    for ( i = 0; i < c; i++)
    {
        if (idade[i]>= mvelha)
        {
            mvelha=idade[i];
        }
        calc = calc + idade[i];
    }
    media= calc/c;

    printf("A media e %.2f\n",media);
  
    for ( i = 0; i < c; i++)
    {
        if (idade[i] == mvelha){
            printf("A idade da mais velha e %d na posiçao %d\n",mvelha,i);
        }
    }
    
}/*


//EXERCICO 9 
/*Uma grande empresa deseja saber quais os TRES empregados MAIS RECENTES. Fazer um algoritmo
para ler um número indeterminado de informações (máximo de 50) contendo a matrícula
funcional do empregado e o número de meses de trabalho deste empregado. Mostre os TRES
empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a
matrícula igual a zero ‘0’ encerra a leitura. Observe o exemplo abaixo*/
/*
int main(){
    int c,i;
    printf("Quantos funcionarios sao ?");
    scanf("%d",&c);

    int meses[c],matricula[c],recente[3],mvelho;

    for ( i = 0; i < c; i++)
    {
        //printf("Qual a matricula do funcianrio %d:",i);
        //scanf("%d",&matricula[i]);

         if (matricula[i] == 0)
        {
            break;
        }

        printf("E quantos meses o funcionario %d trabalha :",i);
        scanf("%d",&meses[i]);
    }

    for ( i = 0; i < c; i++)
    {
        if (meses[i] > mvelho)
        {
            mvelho=meses[i];
        }   
    }
    for ( i = 0; i < c; i++)
    {
        if (meses[i] <= mvelho)
        {
            mvelho=meses[i];
            recente[i]=meses[i];
        }
        
    }
    for ( i = 0; i < c; i++)
    {
        if ( meses[i]== recente[i])
        {
            printf("Funcionario mais recente e %d com %d meses\n",i,recente[i]);
        }
        
    }
    


}*/

