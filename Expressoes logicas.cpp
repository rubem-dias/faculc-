#include <iostream>
using namespace std;
int main() {
	bool a,b;
	cout << "------Expressoes Logicas-------\n";
	cout << "Entre com o valor logico de a: \n ";
	cin  >> a;
	cout << "\nEntre com o valor logico de B: \n";
	cin  >> b;
	
	cout << "\nOperacao Logica entre os valores " <<a <<" e " <<b;
	cout << "\nNegacao a: " << (!a);
	cout << "\nNegacao b: " << (!b);
	cout << "\nConjuncao (E): " << (a && b);
	cout << "\nDisjuncao (OU): " << (a || b);
	cout << "\nlDisjuncao Exclusiva (XOR): " << (a ^ b);
	cout << "\n";
	system ("pause");
	
	
}

