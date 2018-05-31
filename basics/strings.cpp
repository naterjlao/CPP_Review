#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	// c Style Strings
	char name[] = "Alex";

	cout << "name: " << name <<endl;
	cout << "length: " << strlen(name) << endl;

	// String c++ class
	string part1 = "I Think Therefore, ";
	string part2 = "I Am";

	cout << "p1: " << part1 << endl;
	cout << "p2: " << part2 << endl;
	cout << part1 + part2 << endl;
	cout << (part1 + part2).size() << endl;

	return 0;
}