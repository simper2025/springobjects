#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Swordsman.h"

using namespace std;


int factorial(int a) {
	if (a == 1)
		return 1;
	return a * factorial(a - 1);
}


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
private:
	int dimensions;
	vector<Swordsman*> men;

	int GetUnitIndex(string name) {
		int retval = -1;
		for (int i = 0; i < men.size(); i++)
		{
			if (men[i]->GetName() == name) {
				retval = i;
				break;
			}
		}
		return retval;
	}

public:
	Board() {
		dimensions = 10;
	}
	Swordsman* GetMan(string name) {
		int index = GetUnitIndex(name);
		Swordsman* s1 = men[index];
		return s1;
	}
	Swordsman* GetMan(Coordinate loc) {
		Swordsman* s1 = nullptr;
		for (int i = 0; i < men.size(); i++) {
			Coordinate l = men[i]->GetLocation();
			if (l.X == loc.X && l.Y == loc.Y) {
				s1 = men[i];
			}
		}
		return s1;
	}
	void AddSwordsman(Swordsman* unit) {
		Swordsman* s1 = GetMan(unit->GetLocation());
		if (s1 == nullptr) {
			men.push_back(unit);
		}
	}
	void Attack(string attacker, string defender) {
		int attackerIndex = GetUnitIndex(attacker);
		int defenderIndex = GetUnitIndex(defender);
		men[defenderIndex]->TakeDamage(*men[attackerIndex]);
	}
	int UnitCount() {
		return men.size();
	}
};


int Sum(int, int);

int main() {

	cout << factorial(5) << endl;


	int a = Sum(4, 5);

	Swordsman* bob = new Swordsman("Bob", {2,2});
	Swordsman* robert = new Swordsman("Robert", {2,3});
	Board board;

	board.AddSwordsman(bob);
	board.AddSwordsman(robert);

	cout << "Board should have 2 units: " << board.UnitCount() << endl;

	Swordsman* roberto = new Swordsman("Roberto", { 2,2 });

	board.AddSwordsman(roberto);

	cout << "Board should have still 2 units: " << board.UnitCount() << endl;

	cout << board.GetMan("Bob")->GetStatus() << endl;
	cout << board.GetMan("Robert")->GetStatus() << endl;
	board.GetMan("Bob")->SetArmor(1);
	board.GetMan("Robert")->SetArmor(-5);

	board.Attack("Robert", "Bob");
	board.Attack("Bob", "Robert");

	cout << board.GetMan("Bob")->GetStatus() << endl;
	cout << board.GetMan("Robert")->GetStatus() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

int Sum(int a, int b) { return a + b; }
