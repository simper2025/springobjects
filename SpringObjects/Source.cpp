#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Swordsman.h"

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



class Board {
public:
	Swordsman GetMan(string name) {
		Swordsman s1("not found");
		for (int i = 0; i < men.size(); i++)
		{
			if (men[i].GetName() == name) {
				s1 = men[i];
			}
		}
		return s1;
	}
	void AddSwordsman(Swordsman unit) {
		men.push_back(unit);
	}
private:
	int dimensions;
	vector<Swordsman> men;
};

int Sum(int, int);

int main() {

	int a = Sum(4, 5);

	Swordsman bob("Bob");
	Swordsman robert("Robert");
	Board board;

	board.AddSwordsman(bob);
	board.AddSwordsman(robert);


	cout << board.GetMan("Bob").GetStatus() << endl;
	cout << board.GetMan("Robert").GetStatus() << endl;
	board.GetMan("Bob").SetArmor(1);

	board.GetMan("Robert").TakeDamage(board.GetMan("Bob").GetDamage());
	board.GetMan("Bob").TakeDamage(board.GetMan("Robert"));

	cout << board.GetMan("Bob").GetStatus() << endl;
	cout << board.GetMan("Robert").GetStatus() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

int Sum(int a, int b) { return a + b; }
