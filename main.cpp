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
	int size = 0;

		while (*num_ptr != '\0') {

			size++;
			num_ptr++;
	}
		
		return size;
}

int reverse() {
	//print reverse of string

	char string[] = "bottle";
	char* rev_ptr = string;

	while (*rev_ptr != '\0') { //moves pointer to null 

		rev_ptr++;
	}
	
	rev_ptr--; //move to last character

	while (rev_ptr >= string) { //comapares to start of array

		cout << "\n" << *rev_ptr;

		rev_ptr--; //pointer moves backwards
	}
	
	cout << "\n";
	return 0;
}

int midpoint() {

	vector<int> vec = { 1, 12, 5, 80, 23, 67, 7 };
	int* start_ptr = &vec[0];
	int* end_ptr = &vec[vec.size() - 1]; 

	while (start_ptr < end_ptr) { //as long as start is less then end, keep moving
		start_ptr++;
		end_ptr--;
	}
	return *start_ptr;

}


int main() {

	derefrencing();

	maximum();
	cout << "\nMax value is " << maximum() << endl;

	length();
	cout << "\nLength of string is " << length() << endl;

	reverse();

	midpoint();
	cout << "\nThe midpoint is: " << midpoint() << endl;
	
}