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
		area = l * l;
	}
	int GetArea() {
		//return length * length;
		return area;
	}

private:
	int length;
	//string name;
	int area;
};

int main() {

	Square s1;
	string s2;

	s1.SetLength(7);
	//s1.length = 12;

	cout << "length: " << s1.GetLength() << endl;
	cout << "area: " << s1.GetArea() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

