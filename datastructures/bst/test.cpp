#include "../imports.h"
#include "bst.h"
using namespace std;

int main() {
	BST<int> t;

	t.insert(5);
	t.insert(9);
	t.insert(1);
	t.insert(4);
	t.insert(0);

	t.print();

	cout << t.search(8) << endl;
	cout << t.search(1) << endl;
	cout << t.size() << endl;

	t.print();
	t.remove(5);
	t.remove(9);
	t.remove(4);
	t.remove(0);
	t.remove(1);

	t.print();

	return 0;
}