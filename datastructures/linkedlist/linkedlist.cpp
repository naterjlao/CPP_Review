#include "../imports.h"
#include "linkedlist.h"
using namespace std;

/***** THESE ARE IMPORTANT: ***********/
/* Instantiates the templates for an int and string Lists */
template class SortedLinkedList<int>;
template class SortedLinkedList<string>;

/*** LinkedList Functions Definitions ***/
template <class T>
SortedLinkedList<T>::SortedLinkedList(void) {
	head = NULL;
	count = 0;
}
template <class T>
void SortedLinkedList<T>::insert(T key) {
	if (head == NULL) {
		head = new Node(key);
		count++;
	} else {
		head = head->insert(key);
		count++;
	}
}
template <class T>
bool SortedLinkedList<T>::remove(T key) {
	if (head == NULL) {
		return false;
	} else {
		bool flag;
		head = head->remove(key, &flag);
		if (flag)
			count--;
		return flag;
	}
}
template <class T>
int SortedLinkedList<T>::size() {
	return count;
}
template <class T>
void SortedLinkedList<T>::print() {
	if (head == NULL) {
		cout << "List Empty" << endl;
	} else {
		head->printlist();
	}
}

/*** Node Functions Definitions ***/

/* Default Constructor */
template <class T>
SortedLinkedList<T>::Node::Node(void) {
	next = NULL;
}
/* Makes a new Node with the input string parameter */
template <class T>
SortedLinkedList<T>::Node::Node(T key) {
	this->key = key;
	next = NULL;
}
/* Prints the current Node string and a newline */
template <class T>
void SortedLinkedList<T>::Node::print() {
	cout << key << endl;
}
/* Recursively prints all the strings in the list */
template <class T>
void SortedLinkedList<T>::Node::printlist() {
	cout << key;
	if (next != NULL) {
		cout << ", ";
		next->printlist();
	} else {
		cout << endl;
	}
}
/* Creates a new Node for the parameter string and inserts it
into the list */
template <class T>
typename SortedLinkedList<T>::Node* SortedLinkedList<T>::Node::insert(T key) {
	if (key < this->key) {
		Node *newNode = new Node(key);
		newNode->next = this;
		return newNode;
	} else {
		if (next != NULL)
			next = next->insert(key);
		else
			next = new Node(key);
		return this;
	}
}
/* Removes the first instance of the specified string Node in
the list. A pointer to a bool is passed and will be set to
true if the Node is succesfully deleted. */
template <class T>
typename SortedLinkedList<T>::Node* SortedLinkedList<T>::Node::remove(T key, bool *found) {
	if (this->key == key) {
		if (found != NULL)
			*found = true;
		return next;
	} else {
		if (next != NULL)
			next = next->remove(key, found);
		return this;
	}
}