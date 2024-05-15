#include <iostream>
#include <locale.h>
using namespace std;
#define MAX 5

struct Armazena
{
	int qtd;
	int elementos[MAX];
	
};

Armazena* init() {
	Armazena *n = new Armazena();
	n->qtd = 0;
	return n;
}

Armazena* guardaValor(Armazena *n) {
	int valor = -1;
	
	cout << "--valor--" << endl;
	while(valor == -1 || valor <= n->elementos[n->qtd-1])
	{	
		cout << "  ";
		cin >> valor;
		cout << "-------" << endl;
		
		if(valor == -1 || valor <= n->elementos[n->qtd-1]) {
			cout << "Valor inválido! Lembre que o próximo deve ser sempre maior!" << endl;
		}
		else
		{
			n->elementos[n->qtd] = valor;
			++n->qtd;
			break;
		}
		
		
	}
}

/////////////////////////////////////////////////////////////////////////


struct ArmazenaImpar {
	int elementosImpares[MAX];	
	int qtd;
};

ArmazenaImpar* initImpar() {
	ArmazenaImpar *imp = new ArmazenaImpar;
	imp->qtd = 0;
	return imp;
}


ArmazenaImpar* guardaImpar(Armazena *x, ArmazenaImpar *imp) {
	for (int i = 0; i < MAX; i++) {
		if (x->elementos[i] % 2 != 0) {
			imp->elementosImpares[imp->qtd] = x->elementos[i];
			imp->qtd++;
		}
	}
}

ArmazenaImpar* mostraImpar(ArmazenaImpar *imp) {
	cout << "----------------------------" << endl;
	cout << "| Numeros Impares Empilhados |" << endl;
	cout << "----------------------------" << endl;
	for (int i = imp->qtd-1; i >= 0; i--) {
		cout << imp->elementosImpares[i] << endl;
	}
}

int popImpar(ArmazenaImpar *imp) {
	int v;
	if (imp->qtd != 0) {
		v = imp->elementosImpares[imp->qtd-1];
		imp->qtd--;
	}
	else {
		v = -1;
	}
	return v;
}

/////////////////////////////////////////////////////////////////////////////

struct ArmazenaPar {
	int elementosPares[MAX];	
	int qtd;
};

ArmazenaPar* initPar() {
	ArmazenaPar *par = new ArmazenaPar;
	par->qtd = 0;
	return par;
}


ArmazenaPar* guardaPar(Armazena *x, ArmazenaPar *par) {
	for (int i = 0; i < MAX; i++) {
		if (x->elementos[i] % 2 == 0) {
			par->elementosPares[par->qtd] = x->elementos[i];
			par->qtd++;
		}
	}
}

ArmazenaPar* mostraPar(ArmazenaPar *par) {
	cout << "----------------------------" << endl;
	cout << "| Numeros Pares Empilhados |" << endl;
	cout << "----------------------------" << endl;
	for (int i = par->qtd-1; i >= 0; i--) {
		cout << par->elementosPares[i] << endl;
	}
}


int popPar(ArmazenaPar *par) {
	int v;
	if (par->qtd != 0) {
		v = par->elementosPares[par->qtd-1];
		par->qtd--;
	}
	else {
		v = -1;
	}
	return v;
}

//////////////////////////////////////////////////////////////////////////

int main(int argc, char** argv)
{
	Armazena *teste = new Armazena();
	teste = init();
	
	cout<<"---------------------" << endl;
	cout<<"| Escreva 30 numeros |"<< endl;
	cout<<"---------------------" << endl;	
	
	for (int i = 0; i < MAX; i++) {
		guardaValor(teste);
	}
	cout << endl;
	
	
	ArmazenaImpar *testeImpar = new ArmazenaImpar;
	testeImpar = initImpar();
	guardaImpar(teste, testeImpar);
	mostraImpar(testeImpar);	
	cout << endl;
	ArmazenaPar *testePar = new ArmazenaPar;
	testePar = initPar();
	guardaPar(teste, testePar);
	mostraPar(testePar);
	
	cout << endl;
	cout << "-------------------------------" << endl;
	cout << "|Se Desempilharmos os Impares:|" << endl;
	cout << "-------------------------------" << endl;	
	cout << " " << endl;
	for (int i = MAX; i >= 0; i--) {
		cout << popImpar(testeImpar) << " desempilhado!" << endl;
	}
	
	cout << endl;
	
	cout << "-----------------------------" << endl;
	cout << "|Se Desempilharmos os Pares:|" << endl;
	cout << "-----------------------------" << endl;
	for (int i = MAX; i >= 0; i--) {
			cout << popPar(testePar) << " desempilhado!" << endl;
	}



	
	return 0;
}