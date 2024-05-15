#include <iostream>
#include <locale.h>
#include <algorithm>
using namespace std;


#define MAX 30

struct Pilha {
	int qtde;
	float elementos[MAX];
};

Pilha* init() {
	Pilha *p = new Pilha();
	p->qtde = 0;
	return p;
}

int push(Pilha *p, float v) {
	int podeEmpilhar = (p->qtde < MAX);
	if (podeEmpilhar) {
		p->elementos[p->qtde++] = v;
	}
	return podeEmpilhar;
}

int main(int argc, char** argv){
	
	int cont = 0;
	int i;
	int n=1;
	float v;
	
	for (i=0; i<30; i++){
		
		cout<<"---------------------" << endl;
		cout<<"| Escreva 30 números |"<< endl;
		cout<<"---------------------" << endl;
		
		cout <<n + "º valor: "<< endl;
		cin >> v;
		n++;
	
		if (i-1 > i){
			cout << "O próximo valor deve ser sempre maior que o anterior. Escreva novamente: " << endl;
			cin >> v;
		}
		
	
	}
	
	
}