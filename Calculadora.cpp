#include <iostream>
#include <cmath>
#include <locale.h>
#include <conio.h>
#include <conio.c>
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

void menu() {
    char voltar;
	char menu;
	bool trag;
	do	{
	std::cout << "Bem vindo � calculadora!" << std::endl;
    std::cout << "selecione uma das op��es abaixo:\n" << std::endl;
    std::cout << "[1]-Calculadora\n[2]-Instru��es\n[3]-Cr�ditos\n[4]-Sair" << std::endl;
    
	menu=getch();
    if (menu=='1'){
    	trag = true;
    	system ("cls");
	}
	else
	if (menu=='2'){
	
	system ("cls");
    std::cout << "Para usar a opera��o soma, digite +"<< std::endl;
    std::cout << "Para usar a opera��o subtra��o, digite -"<< std::endl;
    std::cout << "Para usar a opera��o divis�o, digite /"<< std::endl;
    std::cout << "Para usar a opera��o multiplica��o, digite *"<< std::endl;
    std::cout << "Para usar a opera��o de pot�ncia, digite ^\n\nAperte qualquer tecla para voltar ao Menu principal..."<< std::endl << std::endl;
    voltar=getch();
    trag= false;
    system ("cls");
}
else
if (menu== '3'){
	system ("cls");
	std::cout <<"Programa Inteiramente feito por Jo�o Carlos!\n\nAperte qualquer tecla para voltar ao Menu principal..." << std::endl;
	voltar=getch();
	trag= false;
	system ("cls");
}
else 
if (menu== '4')	{
	exit(0);
}

else {
	system ("cls");
	trag= false;
	system ("cls");
	
}
}while (trag==false);
}
////////////////////////////////////


///////////mais void///////////////
void calculadora () {
	bool guarda;
	char operacao;
	double numA, numB;
	double resultados;
	char f;
	bool flag = true;
	
	do{
	
	
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
	
	if (operacao != '+' && operacao != '/' && operacao != '*' && operacao != '-' && operacao != '^') {
	std::cout << "\nOpera��o inexistente!" << std::endl;
	guarda = false;
	}
	else {
		guarda = true;
	std::cout << "O resultado �:" << resultados << std::endl;
	}
	std::cout << "\nVoc� deseja continuar calculando?\ns-Sim\nn-N�o" << std::endl; 
	f=getch();
	if (f=='s'){
	flag = true;
	system ("cls");
	}
	else {
		flag = false;
	}

}while (flag);


}
////////////////////////////////////
///////////////////////////////////


int main(int argc, char **argv) {
	char m;
	bool crag;
	
    setlocale(LC_ALL, "Portuguese");
    textcolor (WHITE);
    textbackground(BLUE);

do {
system ("cls");
	menu();

	calculadora();
	system("cls");
	std::cout << "Voc� deseja voltar ao menu principal?\ns-Sim\nn-N�o" << std::endl;
	m=getch();
	switch (m) {
		case 's':
			crag=true;
			break;
		default:
			crag=false;
	}
}while(crag);
	return 0;
}
