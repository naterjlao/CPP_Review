template <class T>
class BST {
private:
	class Node {
	public:
		T key;
		Node *left, *right;
		bool search(T key);
		Node* insert(T key);
		Node* remove(T key, bool *flag);
		int size();
	};
	Node *root;
public:
	bool search(T key);
	void insert(T key);
	bool remove(T key);
	int size();
	void print();
}