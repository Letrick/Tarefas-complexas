#include <iostream>
#include <cstdlib>
#include <ctime>

#define TAMANHO_VETOR 50
#define LIMITE_NUMERO_SORTEADO 100
int main () {
	
	int numeros[TAMANHO_VETOR];
	srand(time(NULL));
	
	for (int i = 0; i < TAMANHO_VETOR; i++){
	
	 numeros[i] = rand () % LIMITE_NUMERO_SORTEADO;
	 
}
	
	for (int i = 0; i < TAMANHO_VETOR; i++){
		int posicaoAnterior = 1;
		if (i>0){
			posicaoAnterior = numeros [i-i];						
		}						
		
	 std::cout << "Posicao: " << i << " Valor: " << numeros[i] << " \n";
	 std::cout << "Posicao: " << i << " Calculo: " << numeros[i] * posicaoAnterior << " \n";

	 }
return 0;

			
	
}