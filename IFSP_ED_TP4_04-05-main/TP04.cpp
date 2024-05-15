#include <iostream>
#include <locale.h>
#include <string>

using namespace std;


class Funcionario {
	private:
		int prontuario;
		double salario;
		string nome;
		
	public:
		void setProntuario(int prontuario) {
			this->prontuario = prontuario;
		}
		void setNome(string nome) {
			this->nome = nome;
		}
		void setSalario(double salario) {
			this->salario = salario;
		}
		
		int getProntuario() {
			return this->prontuario;
		}
		
		double getSalario() {
			return this->salario;
		}
		
		string getNome() {
			return this->nome;
		}
		
		Funcionario* Init() {
			return NULL;
		}
		
		Funcionario() {
			this->prontuario = 0;
			this->nome = "";
			this->salario = 0;
		}
		

		
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int flag = -1;
	int prontFlag = 0;
	int counter = 0;
	Funcionario arrayF[100];
	
	
	
	string nometemp;
	double salariotemp;
	int prontuariotemp;
	
	
	do {
		cout << "0. Sair" << endl << "1. Incluir" << endl << "2. Excluir" << endl <<
		"3. Pesquisar" << endl << "4. Listar" << endl << endl;
		
		cin >> flag;
		cout << endl;

		
		switch(flag) {
			case 0:
				flag = 0;
				break;
			case 1:
				cout << "Qual o nome do funcionario?" << endl << endl;
				cin >> nometemp;
				arrayF[counter].setNome(nometemp);
				
				do {
					prontFlag = 0;
					cout << "Qual o prontuario do funcionario?" << endl << endl;
					cin >> prontuariotemp;
					
					
					
					for (int i = 0; i < 100; i++) {
							if (prontuariotemp == arrayF[i].getProntuario()) {
								cout << "Esse prontuario ja esta em uso, utilize outro." << endl;
								prontFlag = 0;
								break;
							}
							else {
								prontFlag = 1;
							}
						
					}
					
					arrayF[counter].setProntuario(prontuariotemp);
				}
				while(prontFlag == 0);
				
				cout << "Qual o salario do funcionario?" << endl << endl;
				cin >> salariotemp;
				arrayF[counter].setSalario(salariotemp);
				
				break;
				
			case 2:
				int procPront;
				
				
				cout << "Digite o numero do prontuario que deseja excluir." << endl;
				cin >> procPront;
				
				for (int cont = 0; cont < 100; cont++) {
					
					if (procPront == arrayF[cont].getProntuario() && procPront != 0) {
						arrayF[cont].setProntuario(0);
						arrayF[cont].setNome("");
						arrayF[cont].setSalario(0);
						cout << "Prontuario " << procPront << " apagado!" << endl;
						break;
					}
					else if (cont == 99)
					{
						cout << "Prontuario nao encontrado!" << endl;
					}
				}
				
				break;
					
			case 3:
				int pesq;
				cout << "Digite o prontuario do funcionario a ser pesquisado: " << endl;
				cin >> pesq;
				
				for (int cont = 0; cont < 100; cont++) {
					
					if (pesq == arrayF[cont].getProntuario() && pesq != 0) {
						cout << arrayF[cont].getNome() << endl;
						cout << arrayF[cont].getProntuario() << endl;
						cout << arrayF[cont].getSalario() << endl;
						break;
					}
					else if (cont == 99)
					{
						cout << "Prontuario Invalido!" << endl;
					}
				}
				break;	
			
			case 4:
				int teste = 0;
				double somas=0;
				for (int cont = 0; cont < 100; cont++) {
					
					if (arrayF[cont].getProntuario() != 0) {
						cout << arrayF[cont].getNome() << endl;
						cout << arrayF[cont].getProntuario() << endl;
						cout << arrayF[cont].getSalario() << endl << endl;
						somas = arrayF[cont].getSalario() + somas;
					}
					else if (arrayF[cont].getProntuario() == 0)
					{
						teste = teste + 1;
					}
				}
				
				if (teste > 99){
					cout << "Nao temos funcionario na lista!"<<endl;
				}
				
				cout << "Total do salario: " << somas << endl;
				break;
		}
		counter++;
	}
	while(flag != 0);
	
	

}
