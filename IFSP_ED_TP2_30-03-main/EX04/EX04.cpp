#include <iostream>
#include <locale.h>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string x;
	bool flag = false;
	int copyI;
	fstream arq("nomes.txt");
	bool nome = false;
	
	
	
if (arq.is_open()) {
		while (! arq.eof()) {
			getline(arq, x);
			flag = false;
			nome = false;
			for(int i = x.size() - 1; flag != true; i--) {
				if (x[i] == ' ') {
					copyI = i;
					for (; i < x.size(); i++) {
						cout << (char)toupper(x[i]);
					}
					
					cout << ", ";
					
					for (int j = 0; flag != true; j++) {
						if (j == copyI) {
							flag = true;
							break;
						}
						
						if (nome == false) {
							cout << x[j];
						}
						if (x[j] == ' ') {
							nome = true;
							cout << x[j + 1] << ". ";
						}
						if (x[j] == '\n') {
							cout << endl;
						}
						
					}
					cout << endl;
				}
			}
		}
		arq.close();
	}
	else {
		cout << "Erro ao abrir o arquivo";
	} 

	return 0;
}