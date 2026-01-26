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


	cout << "*ptr_a = " << *ptr_a << endl;
	cout << "*ptr_b = " << *ptr_b << endl;
}