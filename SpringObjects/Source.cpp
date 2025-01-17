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
		delete(arr);
	}
}

void PrintBoard(int board[][8]) {

}

int main() {

	int* arr2 = new int[5];
	arr2[0] = 22;

	cout << "arr2: " << arr2 << endl;
	cout << "*arr2: " << *arr2 << endl;
	cout << "&arr2: " << &arr2 << endl;

	delete(arr2);

	cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
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