#include<iostream>

int main () {
	int qtdAlunos = 0;
	
	std::cout << "Informe a quantidade de alunos para o sistema: \n";
	std::cin  >> qtdAlunos;
	
	std::string vetorNomes[qtdAlunos];
	float vetorNotas1[qtdAlunos];
	float vetorNotas2[qtdAlunos];
	
	for (int i = 0; i < qtdAlunos; i++){
		std::cout << "Informe o nome do " << i + 1 << " aluno: \n";
		std::cin  >> vetorNomes[i];
		std::cout << "Informe a nota do " << vetorNomes[i] << " referente ao primeiro bimestre: \n";
		std::cin >> vetorNotas1[i];
		std::cout << "Informe a nota do " << vetorNomes[i] << " referente ao segundo bimestre: \n";
		std::cin >> vetorNotas2[i];		
		
	}			
	for (int i = 0; i < qtdAlunos; i++){
	float media = (vetorNotas1 [i] + vetorNotas2[i]) / 2;
	
	if (media >= 6){
		std::cout << "Aluno: " << vetorNomes[i] << " teve media: " << media << " e esta APROVADO!" << "\n";
	}
	else {
	
		std::cout << "Aluno: " << vetorNomes[i] << " teve media: " << media << " e esta REPROVADO!" << "\n";
}
}
}
