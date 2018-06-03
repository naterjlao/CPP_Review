#include "../imports.h"
#include "bst.h"
using namespace std;

int main() {
	BST<int> t;

	t.insert(5);
	t.insert(9);
	t.insert(1);
	t.insert(4);

	t.print();

	cout << t.search(8) << endl;
	cout << t.search(1) << endl;
	cout << t.size() << endl;

	return 0;
}