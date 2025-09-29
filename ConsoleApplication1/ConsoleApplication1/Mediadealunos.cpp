// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Seja Bem-vindo ao Sistema de Media de Alunos \n" << endl;
	float nota1, nota2, nota3, nota4, media;
	string situacao;

	cout << "Digite a primeira nota: ";
	cin >> nota1;

	cout << "Digite a segunda nota: ";
	cin >> nota2;

	cout << "Digite a terceira nota: ";
	cin >> nota3;

	cout << "Digite a quarta nota: ";
	cin >> nota4;

	media = (nota1 + nota2 + nota3 + nota4) / 4;

	if (media >= 6)
	{
		situacao = "Aprovado";
	} 
	else
	{
		 situacao = "Reprovado";	
	}

	cout << "A media final do aluno foi: " << media
		 << " e ele ficou: " << situacao << endl;
	
	
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
