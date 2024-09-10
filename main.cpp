#include <iostream>


int main()
{
	bool run = true;
	short int resposta;
	double saldo = 0;

	while (run)
	{
		std::cout << "Digite a operacao que deseja fazer: \n";
		std::cout << "1 - Depositar \n";
		std::cout << "2 - Sacar \n";
		std::cout << "3 - Consultar Saldo \n";
		std::cout << "4 - Encerrar \n";
		std::cin >> resposta;

		switch (resposta)
		{
		case 1:
			double valor;
			std::cout << "Qual valor deseja sacar?: \n";
			std::cin >> valor;
			std::cout << "Operacao concluida, valor depositado: R$" << valor << "\n";
			saldo = saldo + valor;
			break;
		case 2:
			double valor_saque;
			std::cout << "Digite o valor que deseja sacar: \n";
			std::cin >> valor_saque;
			if (valor_saque > saldo)
			{
				std::cout << "Voce nao possui saldo o suficiente para sacar. \n";
				std::cout << "Saldo atual: R$" << saldo << "\n\n";
			}
			else
			{
				std::cout << "Operacao concluida, valor retirado da conta: R$" << valor_saque << "\n";
				saldo = saldo - valor_saque;
			}
			break;
		case 3:
			std::cout << "Saldo: R$" << saldo << "\n\n";
			break;
		case 4:
			std::cout << "Programa sendo encerrado...\n";
			run = false;
			break;
		}
	}

	return 0;
}