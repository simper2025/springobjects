#include <iostream>
#include <string>
#include <fstream>

using namespace std;



class Square {
public:
	int GetArea() {
		return length * length;
		//return area;
	}
	int length;

private:
	//string name;
	//int area;
};

int main() {

	Square s1;
	string s2;

	//s1.SetLength(7);
	s1.length = 12;

	cout << "length: " << s1.length << endl;
	cout << "area: " << s1.GetArea() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

