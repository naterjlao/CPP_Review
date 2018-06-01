#include <iostream>
using namespace std;

/* Virtual Functions have late binding, type is figured out in
runtime */

class Shape {
public:
	// Purely virtual function
	virtual float area() = 0;
	virtual void print() {
		cout << "This is a Shape" << endl;
	}
};

class Triangle: public Shape {
protected:
	float height;
	float base;
public:
	float area();
	void set_height(float height);
	void set_base(float base);
	void print();
};

//Functions should and can be declared outside class dec
float Triangle::area() {
	return height * base / 2;
};
void Triangle::set_height(float height) {
	this->height = height;
};
void Triangle::set_base(float base) {
	this->base = base;
};
void Triangle::print() {
	cout << "Triangle of height " << height;
	cout << " and base " << base << endl;
};

class Rectangle: public Shape {
protected:
	float length;
	float width;
public:
	Rectangle(void) {};
	Rectangle(float length, float width);
	float area() {
		return length * width;
	}
	void set_length(float length) {
		this->length = length;
	}
	void set_width(float width) {
		this->width = width;
	}
	void print() {
		cout << "Rectangle of length " << length;
		cout << " and width " << width << endl;

	}
};

Rectangle::Rectangle(float length, float width) {
	this->length = length;
	this->width = width;
}

class Square: public Rectangle {
protected:
	float size;
public:
	void set_size(float size) {
		this->size = size;
		length = size;
		width = size;
	}
	void print() {
		cout << "Square of size " << size << endl;
	}
};


int main() {
	Shape * shapes[4];

	Triangle tr;
	tr.set_height(5);
	tr.set_base(10);
	Rectangle rc;
	rc.set_length(50);
	rc.set_width(20);
	Square sq;
	sq.set_size(30);

	shapes[0] = &tr;
	shapes[1] = &rc;
	shapes[2] = &sq;
	shapes[3] = new Rectangle(123,321);

	for (int i = 0; i < 4; i++) {
		shapes[i]->print();
		cout << "With an area of " << shapes[i]->area() << endl;
	}

	return 0;
}