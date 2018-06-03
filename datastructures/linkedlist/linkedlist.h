template <class T> 
class SortedLinkedList {
private:
	/* Private inner Node class */
	class Node {
	private:
		T key;
		Node *next;
	public:
		Node(void);
		Node(T name);
		void print();
		void printlist();
		Node* insert(T key);
		Node* remove(T key, bool *found);
	};
	/* Fields */
	Node *head;
	int count;
public:
	SortedLinkedList<T>(void);
	void insert(T key);
	bool remove(T key);
	int size();
	void print();
};