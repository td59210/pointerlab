#include <iostream>

using namespace std;


int derefrencing() {

	//assignment and deferrencing 
	int a;
	int b;

	cout << "Type in a number: \n";
	cin >> a;

	cout << "Type a another number: \n";
	cin >> b;

	int* ptr_a = &a;
	int* ptr_b = &b;


	cout << "*ptr_a = " << *ptr_a << endl; //*ptr_a derefrences pointer to get value stored
	cout << "*ptr_b = " << *ptr_b << endl;

	return 0;

}

int maximum() {

	//max in an array

	const int ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 3, 14, 76, 11, 26 };
	int* max_ptr = arr;
	
	for ()
	

}

int main() {

	derefrencing();

	maximum();
	
}