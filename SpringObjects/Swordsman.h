#pragma once
#include <string>
#include <vector>

using namespace std;

class Swordsman {
public:
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
	string GetStatus();
	
	void SetName(string n) { name = n; }
	int GetHealth() const { return health; }
	int GetBaseDamage() const { return damage; }
	int GetDamage() const;
	int GetWeaponDamage() { return weapon; }
	void SetWeapon(const int w) { weapon = w; }
	
	void TakeDamage(int d);
	void TakeDamage(Swordsman attacker);
	
	int GetArmor() { return armor; }
	void SetArmor(int a) { armor = a; }
private:
	string name;
	int health;
	int damage;
	int weapon;
	int armor;

};


