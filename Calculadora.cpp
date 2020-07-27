#include <iostream>
#include <cmath>
#include <locale.h>
#include <conio.h>
#include <conio.c>
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

void menu() {
    char voltar;
	char menu;
	bool trag;
	do	{
	std::cout << "Bem vindo à calculadora!" << std::endl;
    std::cout << "selecione uma das opções abaixo:\n" << std::endl;
    std::cout << "[1]-Calculadora\n[2]-Instruções\n[3]-Créditos\n[4]-Sair" << std::endl;
    
	menu=getch();
    if (menu=='1'){
    	trag = true;
    	system ("cls");
	}
	else
	if (menu=='2'){
	
	system ("cls");
    std::cout << "Para usar a operação soma, digite +"<< std::endl;
    std::cout << "Para usar a operação subtração, digite -"<< std::endl;
    std::cout << "Para usar a operação divisão, digite /"<< std::endl;
    std::cout << "Para usar a operação multiplicação, digite *"<< std::endl;
    std::cout << "Para usar a operação de potência, digite ^\n\nAperte qualquer tecla para voltar ao Menu principal..."<< std::endl << std::endl;
    voltar=getch();
    trag= false;
    system ("cls");
}
else
if (menu== '3'){
	system ("cls");
	std::cout <<"Programa Inteiramente feito por João Carlos!\n\nAperte qualquer tecla para voltar ao Menu principal..." << std::endl;
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
	
	if (operacao != '+' && operacao != '/' && operacao != '*' && operacao != '-' && operacao != '^') {
	std::cout << "\nOperação inexistente!" << std::endl;
	guarda = false;
	}
	else {
		guarda = true;
	std::cout << "O resultado é:" << resultados << std::endl;
	}
	std::cout << "\nVocê deseja continuar calculando?\ns-Sim\nn-Não" << std::endl; 
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
	std::cout << "Você deseja voltar ao menu principal?\ns-Sim\nn-Não" << std::endl;
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
