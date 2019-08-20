//
// marco.mangan@pucrs.br
// 2019-08-20
// Para compilar:
// $ make stacks

#include <iostream>

using namespace std;

#define DEBUG 0 

// Stack begin
void dump();
int empty();
int full();
int pop();
void push(int x);

#define MAX 8
int top = 0;
int data[MAX]; // 1..7

int empty() {
	if (top == 0)
		return 1;
	else return 0;
}

int full() {
	if (top == MAX - 1)
		return 1;
	else return 0;
}

void push(int x) {
	if (full()) {
		// error
		cerr << "Pilha cheia!" << endl;
		return;
	} else {
		top = top + 1;
		data[top] = x;
		if (DEBUG)
			dump();
	}
}

int pop() {
	if (empty()) {
		// error
		cerr << "Pilha vazia!" << endl;
		return -1;
	} else {
		top = top - 1;
		if (DEBUG)
			dump();
		return data[top + 1];
	}
}

void dump() {
	cout << "top: " << top << endl;
	// mostrar conteúdo da pilha
	cout << "{ ";
	for (int i = 1 ; i <= top ; i++) {
		cout << data[i] << " ";
	}
	cout << "}";
	cout << endl;
}
// Stack end

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
