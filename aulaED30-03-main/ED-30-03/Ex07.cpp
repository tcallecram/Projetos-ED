#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
#include <string>
using namespace std;

/*nome de método não pode ser ponteiro, mas o nome da função sim, ex Data* dia_seguinte()*/
class Data
{
	   private:
	   	int dia;
		int mes;
		int ano;
		
		public:
			Data(int dia, int mes, int ano) /*construtor*/
			{
				this -> dia = dia;
				this -> mes = mes;
				this -> ano = ano;
			}			
			Data()
			{				
				this -> dia = 0;
				this -> mes = 0;
				this -> ano = 0;
			}
			void setDia(int dia)
			{
				this -> dia = dia;
			}
			
			void setMes(int mes)
			{
				this -> mes = mes;
			}
			
			void setAno(int ano)
			{
				this -> ano = ano;
			}
			int getDia ()
			{
				return this -> dia;	
			}
			
			int getMes ()
			{
				return this -> dia;	
			}
			
			int getAno ()
			{
				return this -> dia;	
			}
			
			
			
}

int main (int argc, char** argv){

	return 0;	
}