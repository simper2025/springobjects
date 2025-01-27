#include <iostream>
#include <string>
#include <fstream>

using namespace std;



class Square {
public:
	int GetLength() {
		return length;
	}
	void SetLength(int l) {
		length = l;
	}
	int GetArea() {
		return length * length;
	}

private:
	string name;
	int length;
	//int area;
};

int main() {

	Square s1;

	s1.SetLength(7);
	cout << "length: " << s1.GetLength() << endl;
	cout << "area: " << s1.GetArea() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

