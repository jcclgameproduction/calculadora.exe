#include <iostream>
#include <cmath>
#include <locale.h>
#include <stdlib.h>

//feito por Jo�o Carlos! 
//Programa utilizado: Dev C++
//1� m�dulo desenvolvimento de sistemas Turma A

/////////////doubles//////////////////
double soma(double a, double b) {
	return a+b;
}
double mult(double a, double b) {
	return a*b;
}
double div(double a, double b) {
	return a/b;
}
double sub(double a, double b) {
	return a-b;
}
double pot(double a, double b){
	return pow(a,b);
}
///////////////////////////////////////

/////////////void/////////////////////
void ajuda() {
	char ajuda;
	std::cin >> ajuda;
    switch (ajuda) {
	case 'h':
		system ("cls");
    std::cout << "Para usar a opera��o soma, digite +"<< std::endl;
    std::cout << "Para usar a opera��o subtra��o, digite -"<< std::endl;
    std::cout << "Para usar a opera��o divis�o, digite /"<< std::endl;
    std::cout << "Para usar a opera��o multiplica��o, digite *"<< std::endl;
    std::cout << "Para usar a opera��o de pot�ncia, digite ^"<< std::endl << std::endl;
}
if (ajuda!= 'h'){
	system ("cls");
}
}
////////////////////////////////////


///////////mais void///////////////
void calculadora () {
	char operacao;
	double numA, numB;
	double resultados;
	int f;
	bool flag = true;
	
	while (flag) {
	
	
	std::cout << "Digite um N�mero:";
	std::cin >> numA;
	std::cout << "Digite a opera��o:";
	std::cin >> operacao;
	std::cout << "Digite outro N�mero:";
	std::cin >> numB;
	
		switch (operacao) {
		case '+':
		    resultados = soma(numA, numB);
		    break;
		case '/':
		    resultados = div(numA, numB);
		    break;
		case '*':
		    resultados = mult(numA, numB);
		    break;
		case '-':
		    resultados = sub(numA, numB);
		    break;
		case '^':
		    resultados = pot(numA, numB);
		    break;
		default:
			break;
		      
	}
	
	std::cout << "O resultado �:" << resultados << std::endl;
	
	std::cout << "\nVoc� deseja continuar calculando?\n1-Sim\n2-N�o;" << std::endl;
	std::cin >> f;
	switch (f) {
		case 1:
			flag = true;
			break;
		case 2:
			flag = false;
			break;
		default:
			break;
	}
	if (f == 1){
		system ("cls");
	}
}


}
////////////////////////////////////
///////////////////////////////////


int main(int argc, char **argv) {
	
    setlocale(LC_ALL, "Portuguese");

    std::cout << "Para ver o guia de usu�rio da calculadora, digite (h) e d� enter, se n�o digite qualquer coisa e d� enter " << std::endl;
    
	ajuda();

	calculadora();
	
	return 0;
}
