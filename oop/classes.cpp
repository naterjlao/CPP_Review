#include <iostream>
using namespace std;

class Dog {
public:
	const char *name;
	const char *breed;
	int age;

	void print_info() {
		cout << name << ", ";
		cout << breed << ", ";
		cout << age << endl;
	};
};

int main() {
	Dog brit;

	brit.name = "Britney";
	brit.breed = "Yorkie";
	brit.age = 10;
	brit.print_info();
	
	return 0;
}