//
// marco.mangan@pucrs.br
// 2019-08-20
// Para compilar:
// $ make p1

#include <iostream>
#include "stacks.hpp"

using namespace std;

int main() {
	cout << "Pilhas segundo Cormen et al.";
	cout << endl;

	push(15);
	push(6);

	int v1 = pop(); // 6
	int v2 = pop(); // 15

	cout << v1 << " " << v2 << endl;

	return 0;
}
