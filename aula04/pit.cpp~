/*
 * marco.mangan@pucrs.br
 * 2019-08-16
 *
 * Escreva um programa em C++ que calcula a fórmula de
 * Pitágoras.
 *
 * Calcule o valor da hipotenusa de um triângulo retângulo
 * recebendo como entrada o valor das dimensões dos
 * dois catetos.
 *
 * Exemplo:
 * Cálculo da hipotenusa. (c) 2019.
 *  Informe cateto 1: 3.0
 *  Informe cateto 2: 4.0
 *  Aguarde... calculando.
 *  Cálculo concluído!
 *  O valor da hipotenusa é 5.0.
 *  *** Final da execução. ***
 */
#include <iostream>
#include <iomanip>
#include <locale>
#include "triangle.hpp"

using namespace std;
 
int main() {
	setlocale(LC_ALL, "Portuguese");
	cout << "Insira o valor dos catetos: ";
	float a, b, c;

	cin >> a;
	cin >> b;

	cout << "Aguarde, calculando..." << endl;

	c = hip(a, b);

	cout << "A hipotenusa é:" << setprecision(2) << c << endl;

	return 0;
}

