#include "../imports.h"
#include "linkedlist.h"
#include <string>
using namespace std;

int main() {
	SortedLinkedList<string> l;

	l.insert("Andy");
	l.insert("Jeff");
	l.insert("Tommy");
	l.print();

	l.remove("Jeff");
	l.print();
	cout << l.size() << endl;
	
	SortedLinkedList<int> lint;

	lint.insert(0);
	lint.insert(1);
	lint.insert(3);
	lint.insert(5);

	lint.print();

	return 0;
}