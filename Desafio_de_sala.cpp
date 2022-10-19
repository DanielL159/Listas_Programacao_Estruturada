#include <stdio.h>

/*int main (){
	//char a[50]//[quantidade de letras]
	
	//char nome[5][5][50]//[linha=i][coluna=j][Limite de caracteres ]
	int mamae[4][6];//[linha=i][coluna=j][Limite de caracteres ]
	int i ,j;
	
	for (i=0;i<4;i++){
		for(j =0;j<6;j++){//quando se tem um for dentro de outro for , primeiro
		                  //se completa todo o interno depois se vai pro exeterno
			printf("Qual o numero desejado (linha)[%d] (coluna)[%d]:",i,j);
			scanf("%d",&mamae[i][j]);
		}
	}
	
	for (i=0;i<4;i++){
		for(j =0;j<6;j++){
			printf("O numero guardado em[%d][%d] e : %d",i,j,mamae[i][j]);
 }
}*/

int main (){
	//char a[50]//[quantidade de letras]
	
	char nome[2][50];//[linha=i][coluna=j][Limite de caracteres ]
	float salario[2][2];//[linha=i][coluna=j][Limite de caracteres ]
	int i ,j;
	
	for (i=0;i<2;i++){
			printf("Qual o nome do funcionario  [%d]:",i);
			scanf("%s",&nome[i]);
	}
	
	for (i=0;i<2;i++){
		for(j =0;j<2;j++){
			printf("Qual o Salario desejado do funcionario %s:",nome[i]);
			scanf("%f",&salario[i][j]);
		}
	}
	
	for (i=0;i<2;i++){
			printf("%s\t",nome[i]);
	}
		printf("\n");
		
	for (j=0;j<2;j++){
		for(i =0;i<2;i++){
		printf("%.2f\t",salario[i][j]);
	
	}
		printf("\n");
}

	
}







