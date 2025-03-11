#include "Unit.h"

Unit::Unit() {
	id = 12;
	name = "Billy";
	health = 5;
	damage = 1;
	weapon = 0;
	armor = 0;
	location = { 1,2 };
}

int Unit::nextId = 1;
