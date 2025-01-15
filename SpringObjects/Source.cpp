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

int main() {
	int num1 = 12;
	int num2 = 31;


	int* ptr = nullptr;

	ptr = new int;
	*ptr = 89;

	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "&ptr: " << &ptr << endl;

	delete(ptr);

	MemoryLeak();

	//int num3 = AddsTwoNumber(&num1, &num2);
	//cout << num3;
}

int AddsTwoNumber(int *a, int* b) {
	cout << "a: " << a << endl;
	cout << "*a: " << *a << endl;
	cout << "&a: " << &a << endl;
	return *a + *b;
}


int foo(int num1) {
	return num1 + 1;
}