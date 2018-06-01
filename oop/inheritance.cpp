#include <iostream>
using namespace std;

class Person {
public:
	const char *name;
};

class Mortal {
public:
	int age;
};

// Can inherit from multiple classes
class Man: public Person, public Mortal {
public:
	bool facial_hair;
};

int main() {
	Man man;
	man.name = "Jeff";
	man.age = 25;
	man.facial_hair = false;

	cout << man.name << ", ";
	cout << man.age << ", ";
	cout << (man.facial_hair ? "yes" : "no") << " facial hair" << endl;

	return 0;
} 