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

int main (int argc, char** argv){

	setlocale(LC_ALL, "");
	data hoje;
	data *phoje; /*declarando um ponteiro p*nomedoponteiro*/
	hoje.dia = 30;
	hoje.mes = 3;
	hoje.ano = 2023;
	cout << "Hoje é " << (*phoje).dia << "/"
                      << (*phoje).mes << "/"
                      << (*phoje).ano << endl;
                      
	cout << "Hoje é " << phoje->dia << "/"				  
					  << phoje->mes << "/"		
                      << phoje->ano << endl;
					  return 0;	
}