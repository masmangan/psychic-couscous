#include <iostream>

using namespace std;
#define DEBUG 1 

class Stack {

private:
	#define MAX 8
	int top = 0;
	int data[MAX]; // 1..7
	void dump();

public:
	int empty();
	int full();
	int pop();
	void push(int x);
};
// Stack begin
int Stack::empty() {
	if (top == 0)
		return 1;
	else return 0;
}

int Stack::full() {
	if (top == MAX - 1)
		return 1;
	else return 0;
}

void Stack::push(int x) {
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

int Stack::pop() {
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

void Stack::dump() {
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
	cout << "Pilha com classes" << endl;
	Stack s1, s2;

	s1.push(20);
	s1.push(10);


	s2.push(s1.pop());
	s2.push(s1.pop());

	return 0;
}
















