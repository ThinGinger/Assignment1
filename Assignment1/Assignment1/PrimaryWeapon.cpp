#include "PrimaryWeapon.h"


PrimaryWeapon::PrimaryWeapon() {}
PrimaryWeapon::~PrimaryWeapon() {}

PrimaryWeapon::PrimaryWeapon(std::string s)
{
	Weapon::shootText = s;
}
