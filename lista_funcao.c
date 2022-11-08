#include <stdio.h>
#include <math.h>

#define PI 3.1414592



//Exercicio  1
/*
int maior(){
    int a[2],i;
    for ( i = 0; i < 2; i++)
    {
         printf("Me forneca o numero %d:",i);
         scanf("%d",&a[i]);
    }
    if (a[0] > a[1])
    {
       printf("Esse e o maior numero %d",a[0]);
    }else if (a[1] > a[0])
    {
        printf("Esse e o maior numero %d",a[1]);
    }else {
        printf("Numeros iguais");
    }
    
    
    
}

int main (){
    maior();

}
*/


//Exercicio 2
/*
int imprimeMes (int mes){
    switch (mes)
    {
        case 1:
            printf("Janeiro");
            break;

        case 2:
            printf("Fevereiro");
            break;

        case 3:
            printf("marco");
            break;

        case 4:
            printf("abriu");
            break;

        case 5:
            printf("Maio");
            break;

        case 6:
            printf("Junho ");
            break;

        case 7:
            printf("Julho");
            break;

        case 8:
            printf("agosto");
            break;

        case 9:
            printf("setembro");
            break;

        case 10:
            printf("Outubro");
            break;

        case 11:
            printf("Novembro");
            break;

        case 12:
            printf("Dezembro");
            break;

        default:
            printf("Mes nao fornecido");
            break;
    }

}

int main (){
    int mes ;
    printf("Por favor me passe o mes:");
    scanf("%d",&mes);
    imprimeMes(mes);


}*/


//Exercicio 3
/*
int conversao(double f){
    double c;
c = (f - 32) * (5.0/9.0);
   printf("A temperatura em Celsius e:%.2lf",c);

}


int main(){
    double f ;

    printf("Me forneca a temperatura em Fahrenheit:");
    scanf("%lf",&f);
     conversao(f);
}
*/


//Exercicio 4
/*
int volume(float altura,float raio){

float volume;
 volume = PI * pow(raio,2)*altura;
printf("Volume e %.2f",volume);
}

int main (){
    float altura ,raio;


    printf("Me forneca a altura");
    scanf("%f",&altura);
    
    printf("Me forneca a raio");
    scanf("%f",&raio);

    volume(altura,raio);


}*/


//Exercicio 5
/*
int volume(float raio){

float volume;
 volume = 4/((3*PI)*pow(raio,3));
printf("Volume e %.2f",volume);
}

int main (){
    float raio;
    
    printf("Me forneca a raio:");
    scanf("%f",&raio);

    volume(raio);
}
*/
//Exercicio 6
int CalculaIMC (float peso,float altura){

    float imc;

    imc = peso/pow(altura,2);

    printf("Volume e %.2f",imc);
}

int main (){
    float altura,peso;

    printf("Me forneca a altura:");
    scanf("%f",&altura);

    printf("Me forneca a peso:");
    scanf("%f",&peso);

    CalculaIMC(peso,altura);
    
}

