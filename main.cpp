#include <iostream>
#include <array>
#include <vector>

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

	int arr[] = {3, 14, 76, 11, 26};
	int* max_ptr = arr;
	
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) { //loops through as long as less than size of array

		if (arr[i] > *max_ptr) {

			max_ptr = &arr[i]; //sets new value as max
		}

	}

	return *max_ptr;
}

int length() {
	//calc num of characters in string

	char string[] = "computer";
	char* num_ptr = string;
	int i = 0;

		while (*num_ptr != '\0') {

			i++;

			num_ptr = &string[i];
	}
		
		return i;
}

int reverse() {
	//print reverse of string

	char string[] = "bottle";
	char* norm_ptr = string;
	int i = 0;

	while (*norm_ptr != '\0') {

		i++;

		norm_ptr = &string[i];
	}
	


}


int main() {

	derefrencing();

	maximum();
	cout << "\nMax value is " << maximum() << endl;

	length();
	cout << "Length of string is " << length() << endl;

	reverse();
	
}