#pragma once
#include <string>
#include "Coordinate.h"

using namespace std;

class Unit
{
protected:
	static int nextId;

	int id;

	string name;
	int health;
	int damage;
	int weapon;
	int armor;

	Coordinate location;

public:
	Unit();

};

