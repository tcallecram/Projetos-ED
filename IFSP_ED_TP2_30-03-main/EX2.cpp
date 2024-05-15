#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
#include <string>
using namespace std;

/*Declarando variaveis*/
string palindromo, palindromo1;

int main (int argc, char** argv){
	
	cout << "Digite um provavel palindromo: " << endl;
	getline(cin, palindromo);
				
	palindromo.erase(remove(palindromo.begin(), palindromo.end(), ' '), palindromo.end()); 
	palindromo1 = palindromo;
			 
	reverse(palindromo1.begin(), palindromo1.end());
	
	if (palindromo.compare(palindromo1) == 0) 	{
		cout << "E  um palindromo!" << endl;
	}
	else 	{
		cout << "Nao e um palindromo..." << endl;
	}
}
