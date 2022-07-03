#include <stdio.h>

main(){

	//declarando variaveis
	int idade; //inteiro
	
	//declarando e inicializando variaveis
	//int idade = 0;
	
	//função para escrever algo no console.
	printf("Qual a sua idade? ");//ponto e virgula finaliza um comando.
	
	//receber dados
	scanf("%d", &idade);//& é o endereçador, aonde sera armazenado o valor.
	
	//saida de dados.
	printf("Sua idade e: %d anos", idade);	

}
