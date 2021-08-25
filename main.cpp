#include<iostream>

using namespace std;

void calcular (){
	int valor;
	cout << "\nDigite um numero inteiro: " <<endl;
	cin >> valor;

	if (valor > 10) {
		cout << "\nValor é maior que 10! "<<endl;
	}
	else {
		cout << "\nValor é menor ou igual a 10!" <<endl;
	}
}



int main (){
	cout << "\nFunção basica para ver se um numero é maior que 10." << endl;
	calcular();

return 0;
}
