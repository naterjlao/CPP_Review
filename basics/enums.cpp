#include <iostream>
using namespace std;

int main() {
	enum stoplight {red, yellow, green} s;
	
	s = red;
	cout << s << endl;
	s = yellow;
	cout << s << endl;
	s = green;
	cout << s << endl;

	return 0;
}