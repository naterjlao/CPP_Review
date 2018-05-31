#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

typedef struct {
	int vin;
	const char *make;
	const char *model;
	const char *owner;
} Car;

typedef struct node {
	Car car;
	struct node *next;
} Node;

int main() {
	// Car structure
	Car volvo;

	volvo.vin = 123;
	volvo.make = "Volvo";
	volvo.model = "T1000";
	volvo.owner = "Nate";

	cout << "Vin: " << volvo.vin << endl;
	cout << "Make: " << volvo.make << endl;
	cout << "Model: " << volvo.model << endl;
	cout << "Owner: " << volvo.owner << endl;

	//Linked List Struct Implementation
	Node *head = (Node*) malloc(sizeof(Node));
	head->car = volvo;
	head->next = (Node*) malloc(sizeof(Node));
	head->next->car.vin = 456;

	cout << head->car.vin << " " << head->next->car.vin << endl;

	return 0;
}