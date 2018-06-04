#include "../imports.h"
#include "bst.h"
using namespace std;

template class BST<int>;
template class BST<float>;
template class BST<string>;

/* Binary Search Tree Implementation */

template <class T>
BST<T>::BST(void) {
	this->root = NULL;
}

template <class T>
bool BST<T>::search(T key) {
	return this->root == NULL ? false : this->root->search(key);
}

template <class T>
void BST<T>::insert(T key) {
	if (this->root == NULL)
		this->root = new Node(key);
	else
		this->root = this->root->insert(key);
}

template <class T>
bool BST<T>::remove(T key) {
	if (this->root != NULL) {
		bool status;
		this->root = this->root->remove(key,&status);
		return status;
	} else
		return false;

}

template <class T>
int BST<T>::size() {
	return this->root == NULL ? 0 : this->root->size();
}

/* Prints an inorder traversal of the tree */
template <class T>
void BST<T>::print() {
	if (this->root == NULL)
		cout << "Empty Tree";
	else {
		this->root->print();
	}
	cout << endl;
}

/* BST Node Implementation */

template <class T>
BST<T>::Node::Node(T key) {
	this->key = key;
	this->left = NULL;
	this->right = NULL;
}

template <class T>
bool BST<T>::Node::search(T key) {
	if (key == this->key) {
		return true;
	} else if (key < this->key && this->left != NULL) {
		return this->left->search(key);
	} else if (this->right != NULL) {
		return this->right->search(key);
	} else {
		return false;
	}
}

template <class T>
typename BST<T>::Node* BST<T>::Node::insert(T key) {
	if (key < this->key) {
		if (left == NULL)
			this->left = new Node(key);
		else
			this->left = this->left->insert(key);
	} else {
		if (right == NULL)
			this->right = new Node(key);
		else
			this->right = this->right->insert(key);
	}

	return this;
}

template <class T>
typename BST<T>::Node* BST<T>::Node::remove(T key, bool *flag) {
	if (key < this->key) {
		if (this->left != NULL)
			this->left = this->left->remove(key,flag);
		else
			return NULL;
	} else if (key > this->key) {
		if (this->right != NULL)
			this->right = this->right->remove(key,flag);
		else
			return NULL;
	} else { // Equals case
		if (flag != NULL)
			*flag = true;
		if (this->right != NULL) {
			T replacement;
			this->right = this->right->deleteLeftmost(&replacement);
			this->key = replacement;
			return this;
		} else
			return this->left;
	}
}

template <class T>
typename BST<T>::Node* BST<T>::Node::deleteLeftmost(T *value) {
	if (this->left == NULL) {
		*value = this->key;
		return this->right;
	} else {
		this->left = this->left->deleteLeftmost(value);
	}
}

template <class T>
int BST<T>::Node::size() {
	return 1 + 
		(this->left == NULL ? 0 : this->left->size()) +
		(this->right == NULL ? 0 : this->right->size()); 
}

template <class T>
void BST<T>::Node::print() {
	if (this->left != NULL) {
		this->left->print();
		cout << ", ";
	}

	cout << this->key;

	if (this->right != NULL) {
		cout << ", ";
		this->right->print();
	}
}
