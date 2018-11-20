#include <iostream>
using namespace std;
int main() {
	
	int resultado;
	
	cout << "Infome um numero: \n";
	cin  >> resultado;
	
	if (resultado % 2 == 0)
	cout << "Este numero e par";
	
	if (resultado % 2 != 0)
	cout << "Este numero e impar";
	cout << "\n";
	system("pause");
 
}
