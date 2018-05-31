#include <iostream>
using namespace std;

int main() {

	//Pointers
	int value = 10;
	int *pointer; // Pointer variable

	pointer = &value; //Point pointer to value's address

	cout << "Pointer Value (address): " << pointer << endl;
	cout << "Value: " << *pointer << endl;

	//References
	double target = 3.14159;
	double &ref = target;

	cout << "Reference Value: " << ref << endl;
	cout << "Value: " << target << endl;
	cout << "Change Reference" << endl;
	ref = 1.618;
	cout << "Reference Value: " << ref << endl;
	cout << "Value: " << target << endl;

	return 0;
}