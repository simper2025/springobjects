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

class Unit {
public:
	//Unit(){}
	Unit(string n) {
		name = n;
		health = 10;
		damage = 2;
	}
	string GetName() {
		return name;
	}
	int getHealth() {
		return health;
	}
	int GetDamage() {
		return damage;
	}
	void takeDamage(int d){
		health = health - d;
	}

private:
	string name;
	int health;
	int damage;


};

int main() {
	Unit u1("Bob");
	Unit u2("Robert");

	cout << u1.GetName() << " health: " << u1.getHealth() << endl;

	u1.takeDamage(u2.GetDamage());

	cout << u1.GetName() << " health: " << u1.getHealth() << endl;

	//cout << "arr2: " << arr2 << endl;
	//cout << "*arr2: " << *arr2 << endl;
	//cout << "&arr2: " << &arr2 << endl;


}

