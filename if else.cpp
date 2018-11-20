#include <iostream>
using namespace std;
int main() {
	int resultado;
	cout << "Digite um numero: ";
	cin  >> resultado;
	
	if (resultado % 2 == 0)
	cout << "Esse eh um numero par";
	
	else 
	cout << "Esse eh um numero impar";
	cout << "\n";
	system("pause");
}
