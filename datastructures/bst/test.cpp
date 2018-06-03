#include "../imports.h"
using namespace std;

template <class T>
bool equal(T a, T b) {
	return a == b;
}

int main() {
	cout << equal(1,2) << endl;
	cout << equal('a','b') << endl;
	cout << equal("Jake", "JAke") << endl;
	cout << equal("f","f") << endl;

	return 0;
}