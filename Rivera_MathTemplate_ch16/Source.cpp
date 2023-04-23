//This progarm uses a function template

#include <iostream>
#include <iomanip>
using namespace std;

/*Template definition for square function

template <typename T>

T square(T number) {
	return number * number;
}

int main() {
	int userInt; //To hold integer input
	double userDouble; //To hold double input

	cout << setprecision(2);
	cout << "Enter an integer and a floating-point value: ";
	cin >> userInt >> userDouble;

	cout << " Here are their squares : ";

	cout << square(userInt) << " and " << square(userDouble) << endl;

	return 0;
}
*/

//Template definition for square function

template <typename T>

double half(T number) {
	return number/2;
}


int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return 0;
}