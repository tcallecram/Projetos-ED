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
	
	
	
	if (arq.is_open()) {
		while (! arq.eof()) {
			getline(arq, x);
			flag = false;
			for(int i = x.size() - 1; flag != true; i--) {
				if (x[i] == ' ') {
					copyI = i;
					for (; i < x.size(); i++) {
						cout << x[i];
					}
					cout << ", ";
					for (int j = 0; j < copyI; j++) {
						cout << x[j];
					}
					cout << endl;
					flag = true;
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