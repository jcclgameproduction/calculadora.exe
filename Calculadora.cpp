#include <iostream>
#include <cmath>
#include <locale.h>
#include <stdlib.h>

//feito por João Carlos! 
//Programa utilizado: Dev C++
//1ª módulo desenvolvimento de sistemas Turma A

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
    std::cout << "Para usar a operação soma, digite +"<< std::endl;
    std::cout << "Para usar a operação subtração, digite -"<< std::endl;
    std::cout << "Para usar a operação divisão, digite /"<< std::endl;
    std::cout << "Para usar a operação multiplicação, digite *"<< std::endl;
    std::cout << "Para usar a operação de potência, digite ^"<< std::endl << std::endl;
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
	
	
	std::cout << "Digite um Número:";
	std::cin >> numA;
	std::cout << "Digite a operação:";
	std::cin >> operacao;
	std::cout << "Digite outro Número:";
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
	
	std::cout << "O resultado é:" << resultados << std::endl;
	
	std::cout << "\nVocê deseja continuar calculando?\n1-Sim\n2-Não;" << std::endl;
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

    std::cout << "Para ver o guia de usuário da calculadora, digite (h) e dê enter, se não digite qualquer coisa e dê enter " << std::endl;
    
	ajuda();

	calculadora();
	
	return 0;
}
