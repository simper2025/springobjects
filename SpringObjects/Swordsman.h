#pragma once
#include <string>
#include <vector>

#include <iostream>
#include "Coordinate.h"
#include "Unit.h"

using namespace std;

class Swordsman : public Unit  
{
public:
	Swordsman(string n, Coordinate loc) :Unit() {
		id = 13;// nextId++;
		name = n;
		health = 10;
		damage = 2;
		weapon = 0;
		armor = 0;
		location = loc;
	}
	Swordsman(string n, Coordinate loc,  int a, int w) : Swordsman(n, loc) {
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
	void SetArmor(int a);

	Coordinate GetLocation() {
		return location;
	}

	static void PrintPerson(Swordsman s) {
		std::cout << s.GetStatus();
	}


};



