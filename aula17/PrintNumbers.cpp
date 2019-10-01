// marco.mangan@pucrs.br
// 2019-10/01

#include <iostream>

using namespace std;


void print(int n) {
	for (int i = 1 ; i <= n ; i++) {
		cout << i << endl;
	}
}

void print1(int i, int n) {
	if (i > n)
		return;
	cout << i << endl;
	print1(i + 1, n);
}

void print1(int n) {
	print1(1, n);
}

void print2(int n) {
	if (n <= 0)
		return;
	print2(n - 1);
	cout << n << endl;
	//print2(n - 1);
}


int main() {
	cout << "Print numbers!" << endl;

	cout << "iterative, using for" << endl;
	print(5);
	cout << "recursive, using helper and counter" << endl;
	print1(5);
	cout << "recursive, no helper" << endl;
	print2(5);

	return 0;
}
