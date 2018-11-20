#include <iostream>
using namespace std;
int main () {
	// n no inicio é para pular linha, no final é pra pular linha abaixo, como se quiesse por algo a seguir na linha abaixo /

	float valor1, valor2;
	cout << " Informe um valor: \n";
	cin  >> valor1;
	cout << " Informe outro valor: \n";
	cin  >> valor2;
	
	
    cout << "\n Soma: " << valor1 + valor2;
    cout << "\n Subtracao: " << valor1 - valor2;
    cout << "\n Multiplicacao: " << valor1 * valor2;
    cout << "\n Divisao: "<< valor1 / valor2;
    cout << "\n";
    
	system("pause");
}
