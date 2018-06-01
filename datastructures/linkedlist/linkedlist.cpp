#include <iostream>
#include <string>
using namespace std;

/*Implementation of a sorted names linked list*/
class Node {
private:
	string name;
	Node *next;
public:
	Node(void) {
		next = NULL;
	};
	Node(string name) {
		this->name = name;
		next = NULL;
	}
	Node *insert(string name) {
		if (name.compare(this->name) < 0) {
			Node *newNode = new Node(name);
			newNode->set_next(this);
			return newNode;
		} else {
			next = next->insert(name);
			return this;
		}
	}
	void print() {
		cout << name << endl;
	}
	void printlist() {
		cout << name;
		if (next != NULL) {
			cout << ", ";
			next->printlist();
		} else {
			cout << endl;
		}
	}
	void set_next(Node *next) {
		this->next = next;
	}
};

int main() {
	Node *list = new Node("John");
	list = list->insert("Jake");

	list->printlist();
	
	return 0;
}