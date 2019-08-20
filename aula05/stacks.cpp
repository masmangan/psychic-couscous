//
// marco.mangan@pucrs.br
// 2019-08-20

#include <iostream>
#include "stacks.hpp"

using namespace std;

#define DEBUG 0 
void dump();

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

