#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int AddsTwoNumber(int* a, int* b);

void MemoryLeak() {
	int* arr = nullptr;
	const int size = 1000000;
	for (int i = 0; i < size; i++) {
		arr = new int[size];
		*arr = i;
		//delete(arr);
	}
}

void PrintBoard(int board[][8]) {

}

int main() {

	double num1 = 0.019;
	bool num2 = (int)num1;

	cout << num2 << endl;

	int array[5];
	int* arr2 = new int[5];

	array[0] = 1;
	arr2[0] = 2;


	array[1] = 67;
	*(array + 1) = 67;

	arr2[1] = 45;
	*(arr2 + 1) = 45;

	int board[8][8];



	cout << "array: " << array << endl;
	cout << "*array: " << *array << endl;
	cout << "&array: " << &array << endl;
	cout << "&array[0]: " << &array[0] << endl;

	cout << "arr2: " << arr2 << endl;
	cout << "*arr2: " << *arr2 << endl;
	cout << "&arr2: " << &arr2 << endl;

}

int AddsTwoNumber(int* a, int* b) {
	cout << "a: " << a << endl;
	cout << "*a: " << *a << endl;
	cout << "&a: " << &a << endl;
	return *a + *b;
}


int foo(int num1) {
	return num1 + 1;
}