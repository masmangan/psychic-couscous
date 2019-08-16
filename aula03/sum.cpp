/*
 * marco.mangan@pucrs.br
 * 2019-08-13
 * Para compilar e executar:
 * $ g++ calculus.cpp sum.cpp -o sum
 * $ ./sum
 * Para depurar:
 * $ g++ -ggdb calculus.cpp sum.cpp -o sum
 * $ gdb sum
 * $ break main
 * $ run
 * $ n
 * $ print n
 * $ print n2
 * $ continue
 * $ quit
 * No Google:
 * man g++
 * man gdb
 *
 */
#include <iostream>
	
using namespace std;

#include "calculus.hpp"

int main() {
	int n, n2;

	cout << "Cálculo do dobro" << endl;

	cout << "Informe um valor inteiro: ";
	cin >> n; 	// ler um valor inteiro

	n2 = dobro(n);	// calcular o dobro do valor

	cout << "O valor informado foi " << n 
		<< " e o valor calculado é " << n2 
		<< "."
		<< endl; // apresentar o valor 
				// lido e o valor calculado
	return 0;
}
