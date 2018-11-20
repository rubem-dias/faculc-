#include <iostream>
using namespace std;
int main () {
	
	int a, b;
	
	cout << "Digite o valor A\n: ";
	cin  >>	a;
	cout << "Digite o valor B\n: ";
	cin  >> b;
	
	cout <<"\n Relacoes entre os valores "<<a <<" e " <<b <<":";
	cout <<"\n Igualdade: " << (a == b);
	cout <<"\n Diferenca: " << (a != b);
	cout <<"\n O valor 'A' maior que o valor 'B' " << (a > b);
	cout <<"\n O valor 'A' menor que o valor 'B' " << (a < b);
	cout <<"\n O valor 'A' maior ou igual ao valor 'B' " << (a >= b);
	cout <<"\n O valor 'B' menor ou igual ao valor 'B' " << (a <= b);
	cout <<"\n";
	system("pause");	
}
