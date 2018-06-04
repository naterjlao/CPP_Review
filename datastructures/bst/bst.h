template <class T>
class BST {
private:
	class Node {
	public:
		T key;
		Node *left, *right;
		Node(T key);
		bool search(T key);
		Node* insert(T key);
		Node* remove(T key, bool *flag);
		Node* deleteLeftmost(T *value);
		int size();
		void print();
	};
	Node *root;
public:
	BST(void);
	bool search(T key);
	void insert(T key);
	bool remove(T key);
	int size();
	void print();
};