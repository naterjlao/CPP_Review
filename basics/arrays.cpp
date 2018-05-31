#include <iostream>
using namespace std;

#include <iomanip>

int main() {
	//Make an array
	int list[] = {7,4,6,3,5,1,2,9,8};
	//Note, a size can be explicitly placed

	//Getting size
	int size = sizeof(list)/sizeof(list[0]);
	cout << "size of array: " << size << endl;

	//Print elements fancy method with 'setw'
	cout << "Element" << std::setw(13) << "Value" <<endl;
	for (int i = 0; i < size; i++)
		cout << setw(7) << i << setw(13) << list[i] << endl;

	return 0;
}