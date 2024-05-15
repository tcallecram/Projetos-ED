#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
#include <string>
using namespace std;

/*classe é a receita do bolo, objeto o bolo*/

struct data /**struct seria como uma classe sem método*/
{
	int dia;
	int mes;
	int ano;
};

void cria_data(data *d, int dia, int mes, int ano)/*o data *d seria aonde ele colocaria as variaveis no "metodo contrutor" (como não tem classe não é construtor)*/
{
	d->dia/*atributo*/= dia /*variavel local*/;
	d-> mes;
	d-> ano;
}

/*passagem de parâmetro por valor (passo qual o dado)*/
void mostra_data_valor(data d)
{
		cout << "Hoje é " << d.dia << "/"
                          << d.mes << "/"
                          << d.ano << endl;                          
}

/*passagem de parâmetro por referência (passo o endereço)*/
void mostra_data_ref (data &d)/*esse &d seria o argumento*/
{
		cout << "Hoje é " << d.dia << "/"
                          << d.mes << "/"
                          << d.ano << endl;
        /*d.dia = 99; **para mostrar a diferença de valor e e referencia*/                         
}

/*passagem de parâmetro por referência (passo o ponteiro - endereço explícito)*/
void mostra_data_ref (data *d)/*esse *d seria o argumento*/
{
		cout << "Hoje é " << d->dia << "/"
                          << d->mes << "/"
                          << d->ano << endl;                       
}


int main (int argc, char** argv){

	setlocale(LC_ALL, "");
	data hoje;
	data *phoje; /*declarando um ponteiro p*nomedoponteiro*/
	hoje.dia = 30;
	hoje.mes = 3;
	hoje.ano = 2023;
	
	cria_data(&hoje, 30, 3, 2023);
                      
	mostra_data_valor(hoje); 

	return 0;	
}