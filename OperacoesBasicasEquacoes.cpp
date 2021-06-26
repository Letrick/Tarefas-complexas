#include<iostream>

float soma (float n1, float n2){
	return n1 + n2;
	
}

float subtracao (float n1, float n2){
	return n1 - n2;
		
}

float divisao (float n1, float n2){
	return n1 / n2;
	
}

float multiplicacao (float n1, float n2){
	return n1 * n2;
	
}

int main () {
	float numero1 = 0;
	float numero2 = 0;

	std::cout<< "Digite o primeiro numero: \n";
	std::cin >> numero1;
	std::cout<< "Digite o segundo numero: \n";
	std::cin >> numero2;
	
	std::cout << "Soma: " << soma(numero1,numero2) << "\n";
	std::cout << "Subtracao: " << subtracao(numero1,numero2) << "\n";
	std::cout << "Divisao: " << divisao(numero1,numero2) << "\n";
	std::cout << "Multiplicacao: " << multiplicacao(numero1,numero2) << "\n";

	
	return 0
	
	
	
	
	
	
}
