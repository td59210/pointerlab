#include <iostream>

using namespace std;

int main() {

	int a;
	int b;

	cout << "Type in a number: \n";
	cin >> a;

	cout << "Type a another number: \n";
	cin >> b;

	int* ptr_a = &a;
	int* ptr_b = &b;

	int c = *ptr_a;
	int d = *ptr_b;

	cout << "*ptr_a = " << c << endl;
	cout << "*ptr_b = " << d << endl;
}