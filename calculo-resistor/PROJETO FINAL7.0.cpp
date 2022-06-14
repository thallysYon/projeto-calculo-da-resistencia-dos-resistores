/*******************************************************************************************************************************************
														PROGRAMAÇÃO EM C
														
SENAI - BRGANÇA PAULISTA


ALUNO:     THALLYS YON
DATA:      31/01/2022


********************************************************************************************************************************************/

/********************************************************************************************************************************************
													DESCRIÇÃO DO PROJETO
													
ESTE CODIGO FONTE SERVE PARA CALCULAR O VALOR DA RESISTÊNCIA DOS RESISTORES COM BASE NAS SUAS CORES.
********************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
	/*Função para imprimir a pergunta se é um resistor de  quatro ou cinco faixas*/
	void imprimePergunta(){
		printf("O resistor possui 4 ou 5 faixas?\nR:");
	}
	/*Função pata imprimir a tabela*/
	void imprimeTabela(){
			printf("\nCor do resistor ------ Codigo ------- Possui tolerancia\nPreto ------------------ 01 --------------- N\nMarrom ----------------- 02 --------------- S\nVermelho --------------- 03 --------------- S\nAmarelo ---------------- 04 --------------- N\nLaranja ---------------- 05 --------------- N\nVerde ------------------ 06 --------------- S\nAzul ------------------- 07 --------------- S\nVioleta ---------------- 08 --------------- S\nCinza ------------------ 09 --------------- S\nBranco ----------------- 10 --------------- N\nDourado ---------------- 11 --------------- S\nPrata ------------------ 12 --------------- S\n\n");
 }
	
	/*Funcão para retornar o valor da variavel faixaUm de acordo com a resposta do usuário*/
	int leFaixaUm(int corFaixaUm, int resUsuario){
		int r;
			switch(corFaixaUm){
				case 1:
				r = 0;
				break;
				case 2: 
				r = 1;
				break;
				case 3: 
				r = 2;
				break;
				case 4: 
				r = 3;
				break;
				case 5: 
				r = 4;
				break;
				case 6: 
				r = 5;
				break;
				case 7: 
				r = 6;
				break;
				case 8: 
				r = 7;
				break;
				case 9: 
				r = 8;
				break;
				case 10: 
				r = 9;
				break;
				default : printf("Digite um numero correto \nR:");
			}
		if(resUsuario == 4){			//<----- a função recebe como parametro se o usuario quer um resistor de 4 ou 5 faixas, esse if retorna a sua decisão
			return r*10;
		}else{
			return r*100;
		}
	}
	/*Funcão para retornar o valor da variavel faixaDois de acordo com a resposta do usuário*/
	int leFaixaDois(int corFaixaDois, int resUsuario){
		int r;
			switch(corFaixaDois){
				case 1:
					r = 0;
					break;
				case 2: 
					r = 1;
					break;
				case 3: 
					r = 2;
					break;
				case 4: 
					r = 3;
					break;
				case 5: 
					r = 4;
					break;
				case 6: 
					r = 5;
					break;
				case 7: 
					r = 6;
					break;
				case 8: 
					r = 7;
					break;
				case 9: 
					r = 8;
					break;
				case 10: 
					r = 9;
					break;
				default : 
					printf("Digite um numero correto\nR:");
				
		}
		if(resUsuario == 4){			//<----- a função recebe como parametro se o usuario quer um resistor de 4 ou 5 faixas, esse if retorna a sua decisão
			return r;
		}else{
			return r*10;
		}
	}
	/*Funcão para retornar o valor da variavel faixaTres de acordo com a resposta do usuário*/
	int leFaixaTres(int corFaixaTres){
		int r;
		switch(corFaixaTres){
			case 1:
				r = 0;
				break;
			case 2: 
				r = 1;
				break;
			case 3: 
				r = 2;
				break;
			case 4: 
				r = 3;
				break;
			case 5: 
				r = 4;
				break;
			case 6: 
				r = 5;
				break;
			case 7: 
				r = 6;
				break;
			case 8: 
				r = 7;
				break;
			case 9: 
				r = 8;
				break;
			case 10: 
				r = 9;
				break;
			default:
				printf("Digite um numero correto\nR:"); 
		}
		return r;
	}
	/*Função para elevar 10 ao numero escolhido pelo usuario*/
	void funcMultiplicador(int multi, int r){
		char m;
		switch(multi){
			case 1:
				break;
			case 2: 
				printf("0");
				break;
			case 3:
				printf("00");
				break;
			case 4: 
				printf("000");
				break;
			case 5:
				printf("0000");
				break;
			case 6: 
				printf("00000");
				break;
			case 7:
				printf("000000");
				break;
			case 8:
				printf("0000000");
				break;
			case 9:
				if(r == 4){
					printf("000000000");
				}
				break;
			case 11:
				printf("0.");
				break;
			case 12:
				printf("0.0");
				break;
			default: 
				printf("O valor inserido é incorreto.");
				break;
		}
	}
	/*Função para retornar o valor da tolerância com base na escolha do usuário*/
	int funcTolerancia(int toleranc){
		int t;
		switch(toleranc){

			case 2: 
				t = 1;
				break;
			case 3: 
				t = 2;
				break;
			case 6: 
				break;
			case 7: 
				break;
			case 8: 
				break;
			case 9: 
				break;
			case 11: 
				t = 5;
				break;
			case 12: 
				t = 10;
				break;
			default :
				printf("Digite um numero correto \nR:");
		}
		return t;
	}
main(){
	/*Essa linha serve para printar o cabeçalho*/
	printf("********************************************************************************\n			SENAI  --  BRGAN%cA PAULISTA\n\n			PROFESSOR: WERLEY GODINHO\n			ALUNOS:    THALLYS YON E CARLOS HENRIQUE\n			DATA:      31/01/2022\n\n********************************************************************************",128);


	Sleep(5000);// essa função é responsável por congelar o programa por 5 segundos 	
	
	system("cls");
	
	/*Declaração das variáveis*/
	int faixaUm = 0, 
	faixaDois = 0, 
	faixaTres = 0, 
	multiplicador = 0,  
	resposta = 0,
	tolerancia = 0, 
	imprimeTole = 0,
	resistencia = 0;
	
	/*Estrutura para repetir caso o usuario deseje*/
	
	
	/*Chamando a função que imprime a pergunta*/
	imprimePergunta();
	
	
	/*Verificando se a resposta é diferente de 4 e de 5*/
	while((resposta != 4) && (resposta !=5)){

		scanf(" %d", &resposta);
		fflush(stdin);
		if((resposta != 4) && (resposta != 5)){
			printf("Voce precisa digitar um valor correto!\nR:");
		}
	}
	
	
	/*Chamando a função que imprimirá a tabela com os codigos dos resistores*/
	imprimeTabela();
	
	
	/*Lendo o codigo da primeira faixa*/
	printf("Digite o codigo da primeira faixa \nR:");
	
	
	while((faixaUm < 1) || (faixaUm > 10)){
		scanf("%d",&faixaUm);
		fflush(stdin);
		if((faixaUm) < 1 || (faixaUm > 10)){
			printf("Voce digitou um valor incorreto, consulte a tabela e tente novamente. \nR:");
		}
	}
	
	
	resistencia = leFaixaUm(faixaUm, resposta);
	
	
	/*Lendo o codigo da segunda faixa*/
	printf("Digite o codigo da segunda faixa: \nR:");
	while(faixaDois < 1 || faixaDois > 10){
		scanf("%d",&faixaDois);
		fflush(stdin);
		if((faixaDois < 1) || (faixaDois > 10)){
			printf("Voce digitou um valor incorreto, consulte a tabela e tente novamente. \nR:");
		}
	}
	
	
	resistencia = resistencia + leFaixaDois(faixaDois, resposta);
	
	
	/*Caso a resposta seja "5 faixas" o programa le a variavel faixaTres */
	if(resposta == 5){
		printf("Digite o valor da terceira faixa \nR:");
		while(faixaTres < 1 || faixaTres > 10){
			scanf("%d",&faixaTres);
			fflush(stdin);
			if((faixaTres < 1) || (faixaTres > 10)){
				printf("Voce digitou um valor incorreto, consulte a tabela e tente novamente. \nR:");
			}
		}
		
		resistencia = resistencia + leFaixaTres(faixaTres);
	}
	
	
	/*Aqui o programa le o multiplicador pelo qual será multiplicado a variavel resistencia*/
	printf("Digite a cor da proxima faixa: \nR:");
	
	
	while((multiplicador != 1) && (multiplicador != 2) && (multiplicador != 3) && (multiplicador != 4) && (multiplicador != 5) && (multiplicador != 6) && (multiplicador != 7) && (multiplicador != 8) && (multiplicador != 9) && (multiplicador != 11) && (multiplicador != 12)){
		scanf("%d", &multiplicador);
		fflush(stdin);
		if((multiplicador != 1) && (multiplicador != 2) && (multiplicador != 3) && (multiplicador != 4) && (multiplicador != 5) && (multiplicador != 6) && (multiplicador != 7) && (multiplicador != 8) && (multiplicador != 9) && (multiplicador != 11) && (multiplicador != 12)){
			printf("Voce digitou um valor incorreto, consulte a tabela e tente novamente. \nR:");
		}
	}
	
	
	
	
	/*Aqui o programa le a tolerancia que ele imprimirá ao usuario*/
	printf("Digite o valor da proxima faixa: \nR:");
	
	
	while((tolerancia != 2) && (tolerancia != 3) && (tolerancia != 6) && (tolerancia != 7) && (tolerancia != 8) && (tolerancia != 9) && (tolerancia != 11) && (tolerancia != 12) && (tolerancia != 13)){
		scanf("%d", &tolerancia);
		fflush(stdin);
		if((tolerancia != 2) && (tolerancia != 3) && (tolerancia != 6) && (tolerancia != 7) && (tolerancia != 8) && (tolerancia != 9) && (tolerancia != 11) && (tolerancia != 12) && (tolerancia != 13)){
		printf("Voce digitou um valor incorreto, consulte a tabela e tente novamente. \nR:");
		}
	}
	
	
	imprimeTole = funcTolerancia(tolerancia);
	
	if((multiplicador == 11) || (multiplicador == 12)){
		if(multiplicador == 11){
			printf("A resistencia eh de ");
			funcMultiplicador(multiplicador, resposta);
			printf("%d ohms,", resistencia);
		}else{
			printf("A resistencia eh de ");
			funcMultiplicador(multiplicador,resposta);
			printf("%d ohms,", resistencia);
		}
	}else{
		printf("A resistencia eh de %d",resistencia);
		funcMultiplicador(multiplicador,resposta);
		printf(" ohms,");
	}
	
	
	
	
	
	
	if((tolerancia>= 6) || (tolerancia <= 9)){
		if(tolerancia == 6){
			printf("com tolerancia de  %c 0.5 %c",241,37);
		}else if(tolerancia == 7){
			printf("com tolerancia de  %c 0.25 %c",241,37);
		}else if(tolerancia == 8){
			printf("com tolerancia de  %c 0.1 %c",241,37);
		}else if(tolerancia == 9){
			printf("com tolerancia de  %c 0.05 %c",241,37);
		}else{
			printf("com tolerancia de  %c %d %c",241,imprimeTole,37);
		}
	}
	
	Sleep(10000);
	system("cls");
	
	 printf("OBRIGADO POR USAR!\n\n\n\n\n\n\n\n\n\n");
}