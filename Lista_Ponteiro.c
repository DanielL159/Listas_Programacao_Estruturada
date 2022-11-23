/*LISTA DE EXERCÍCIOS – PONTEIROS

4) Crie um programa que contenha uma matriz de float com três linhas e três colunas. Imprima
o endereço de cada posição dessa matriz.*****
5) Crie um programa que contenha um vetor de inteiros com cinco elementos. Utilizando
apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o dobro de cada valor
lido.
6) Crie um programa que contenha um vetor com cinco elementos inteiros. Leia esse vetor do
teclado e imprima o endereço das posições contendo valores pares.
7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das
strings.
8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor.
A função deverá preencher os elementos de vetor com esse valor. Não utilize índices para
percorrer o vetor, apenas aritmética de ponteiros.
9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para
percorrer o vetor, apenas aritmética de ponteiro*/

#include <stdio.h>
//Exerciocio 1

//*c e igual ao valor que esta na variavel que o ponteiro esta guardando o endereco de memoria 
//c endereco de memoria armazenado por c 
//& pega o endereco de memoria 
/*
int main (){
    int a=0 ,b=0;
    int *c,*d;

    c =&a;
    d =&b;
    if (c > d)
    {
       printf("O endereco de memoria de c e maior que o de d");
    }else if (d>c){
        printf("O endereco de memoria de d e maio que o de c");
    }
    
}*/

//Exercio 2
/*
int main (){
    int numero[2],i;
    int *a,*b;

    for ( i = 0; i < 2; i++)
    {
        printf("Numeor: ");
        scanf("%d",&numero[i]);
    }
    

    a=&numero[0];
    b=&numero[1];

    if (a > b)
    {
       printf("O endereco de memoria de A e %d e maior que o de B %d e , B armazena %d",a,b,*a);
    }else if (b>a){
        printf("O endereco de memoria de B %d e e ele e maio que o de A %d e , A armazena %d",b,a,*b);
    }

}*/

//Exercicio 3
/*
int main (){
    float a[10];
    float *b;
    int i;

    for ( i = 0; i < 10; i++)
    {
        b =&a[i];
        printf("%d\n",b);
    }
     
}*/

//Exercicio 4 ***********************************************
/*
int main(){
    float a[3][3];
    float *b[3][3];
    int i,j;

     for ( i = 0; i < 3; i++)
     {
       
            b = &a[i][j];
            printf("%.2f\n",b);
        
        
     }
     

}*/