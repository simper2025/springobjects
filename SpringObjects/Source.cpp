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
	Swordsman * GetMan(string name) {
		int index = GetUnitIndex(name);
		//Swordsman s1 = men[index];
		return &men[index];
	}
	void AddSwordsman(Swordsman unit) {
		men.push_back(unit);
	}
	void Attack(string attacker, string defender) {
		int attackerIndex = GetUnitIndex(attacker);
		int defenderIndex = GetUnitIndex(defender);
		men[defenderIndex].TakeDamage(men[attackerIndex]);
	}
private:
	int dimensions;
	vector<Swordsman> men;

	int GetUnitIndex(string name) {
		int retval = -1;
		for (int i = 0; i < men.size(); i++)
		{
			if (men[i].GetName() == name) {
				retval = i;
				break;
			}
		}
		return retval;
	}
};


int Sum(int, int);

int main() {

	int a = Sum(4, 5);

	Swordsman bob("Bob");
	Swordsman robert("Robert");
	Board board;

	board.AddSwordsman(bob);
	board.AddSwordsman(robert);


	cout << board.GetMan("Bob")->GetStatus() << endl;
	cout << board.GetMan("Robert")->GetStatus() << endl;
	board.GetMan("Bob")->SetArmor(1);

	board.Attack("Robert", "Bob");
	board.Attack("Bob", "Robert");

	cout << board.GetMan("Bob")->GetStatus() << endl;
	cout << board.GetMan("Robert")->GetStatus() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

int Sum(int a, int b) { return a + b; }
