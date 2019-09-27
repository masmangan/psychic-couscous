// marco.mangan@pucrs.br
// 2019-09-27

class Node {
public:
	int key;
	Node* left;
	Node* right;
	Node(int k) {
		key = k;
		left = nullptr;
		right = nullptr;
	}
};

class BinarySearchTree {
private:	
	Node* root;

	Node* insert(Node* n, int k) {
		if (n == nullptr) {
			Node* no = new Node(k);
			return no;
		}
		if (k < n->key) {
			n->left = insert(n->left, k);
		} else if (k > n->key) {
			n->right = insert(n->right, k);
		} else {
			// duplicate key; do nothing
		}
		return n;
	}
public:
	BinarySearchTree() {
		root = nullptr;
	}
	void insert(int k) {
		root = insert(root, k);
	}
	bool empty() {
		return root == nullptr;
	}

	void dump() {
		// TODO: display all keys
	}

	bool contains(int k) {
		// TODO: check if tree contains key
	}

/*	
	TODO: implement other methods
	remove() {
	}
	height() {
	}
*/
};



