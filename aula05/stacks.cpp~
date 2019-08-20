//
// marco.mangan@pucrs.br
// 2019-08-20
// Para compilar:
// $ make stacks

#include <iostream>

using namespace std;

// Stack begin
#define MAX 8
int top = 0;
int data[MAX]; // 1..7

int empty() {
	if (top == 0)
		return 1;
	else return 0;
}

int full() {
	if (top == MAX)
		return 1;
	else return 0;
}


void push(int x) {
	top = top + 1;
	data[top] = x;
}

int pop() {
	if (empty()) {
		// error
		cerr << "Pilha vazia!" << endl;
		return -1;
	} else {
		top = top - 1;
		return data[top + 1];
	}
}
// Stack end

int main() {
	cout << "Pilhas segundo Cormen et al.";
	cout << endl;

	cout << "A pilha está vazia: " << empty() << "." << endl;
	cout << "Inserindo o valor 15." << endl;

	push(15);
	cout << "A pilha está vazia: " << empty() << "." << endl;
	cout << "Inserindo o valor 6." << endl;

	push(6);
	cout << "A pilha está vazia: " << empty() << "." << endl;


	return 0;
}
