#include "Swordsman.h"


int Swordsman::nextId = 1;

string Swordsman::GetStatus()
{
	return //id + " " + 
		name + "(Swordsman #" + to_string(id) + ") has " + to_string(health) + " health ";
}

int Swordsman::GetDamage() const
{
	return damage + weapon;
}

void  Swordsman::TakeDamage(int d) {
	if (armor >= d * 2)
	{
		//takes no damage on weak attack

	}
	else {
		int tempdamage = armor < d ? d - armor : 1;

		health = health - tempdamage;
	}
}

void Swordsman::TakeDamage(Swordsman attacker) {
	int damage = attacker.GetDamage();
	TakeDamage(damage);
}

void Swordsman::SetArmor(int a) {
	if (a >= 0 && a < 15) {
		armor = a;
	}
}
