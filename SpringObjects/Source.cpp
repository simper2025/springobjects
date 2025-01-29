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
	string GetName() { return name; }
	void SetName(string n) { name = n; }
	int GetHealth() const { return health; }
	int GetBaseDamage() const { return damage; }
	int GetDamage() const {
		return damage + weapon;
	}
	int GetWeaponDamage() { return weapon; }
	void SetWeapon(const int w) { weapon = w; }
	void takeDamage(int d) {
		if (armor >= d * 2)
		{
			//takes no damage on weak attack

		}
		else {
			int tempdamage = armor < d ? d - armor : 1;

			health = health - tempdamage;
		}
	}
	int GetArmor() {
		return armor;
	}
	void SetArmor(int a) {
		armor = a;
	}
private:
	string name;
	int health;
	int damage;
	int weapon;
	int armor;

};

int main() {
	Swordsman bob("Bob");
	Swordsman robert("Robert");

	cout << bob.GetName() << " health: " << bob.GetHealth() << endl;
	bob.SetArmor(1);

	bob.takeDamage(robert.GetDamage());

	cout << bob.GetName() << " health: " << bob.GetHealth() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

