#include <iostream>
#include <string>
#include <fstream>
#include <vector>

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


class Swordsman {
public:
	//Unit(){}
	Swordsman(string n) {
		name = n;
		health = 10;
		damage = 2;
		weapon = 0;
		armor = 0;
	}
	Swordsman(string n, int a, int w) : Swordsman(n) {
		weapon = w;
		armor = a;
	}
	string GetName() { return name; }
	string GetStatus() {
		return name + " has " + to_string(health) + " health ";
	}
	void SetName(string n) { name = n; }
	int GetHealth() const { return health; }
	int GetBaseDamage() const { return damage; }
	int GetDamage() const {
		return damage + weapon;
	}
	int GetWeaponDamage() { return weapon; }
	void SetWeapon(const int w) { weapon = w; }
	void TakeDamage(int d) {
		if (armor >= d * 2)
		{
			//takes no damage on weak attack

		}
		else {
			int tempdamage = armor < d ? d - armor : 1;

			health = health - tempdamage;
		}
	}
	int GetArmor() { return armor; }
	void SetArmor(int a) { armor = a; }
private:
	string name;
	int health;
	int damage;
	int weapon;
	int armor;

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

int main() {
	Swordsman bob("Bob");
	Swordsman robert("Robert");
	Board board;

	board.AddSwordsman(bob);
	board.AddSwordsman(robert);


	cout << board.GetMan("Bob").GetStatus() << endl;
	cout << board.GetMan("Robert").GetStatus() << endl;
	board.GetMan("Bob").SetArmor(1);

	board.GetMan("Bob").TakeDamage(board.GetMan("Robert").GetDamage());

	cout << board.GetMan("Bob").GetStatus() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

