#include <iostream>
using namespace std;

class Math {
public:
	void print_type(int a) {
		cout << a << " is an int" << endl;
	}

	void print_type(double a) {
		cout << a << " is a float" << endl;
	}
};

class Matrix2x2 {
public:
	double matrix[2][2];

	//Overload plus operator
	Matrix2x2 operator+ (Matrix2x2 b) {
		Matrix2x2 c;

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				c.matrix[i][j] = matrix[i][j] + b.matrix[i][j];
			}
		}

		return c;
	}

	//Getters and Setters
	double const get(int i, int j) {
		return matrix[i][j];
	}
	double & set(int i,int j) {
		return matrix[i][j];
	}

	void print() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << matrix[i][j];
				if (j+1 < 2)
					cout << " ";
			}
			cout << endl;
		}		
	}
};

int main() {
	Math math;

	math.print_type(9);
	math.print_type(1.0001);

	Matrix2x2 m1, m2, m3;
	int a = 0, b = 4;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			m1.set(i,j) = a;
			m2.set(i,j) = b;
			a++;
			b++;
		}
	}

	m3 = m1 + m2;

	m1.print();
	m2.print();
	m3.print();

	return 0;
}