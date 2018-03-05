#include "SecondaryWeapon.h"

SecondaryWeapon::SecondaryWeapon() {}
SecondaryWeapon::~SecondaryWeapon() {}


SecondaryWeapon::SecondaryWeapon(std::string s)
{
	Weapon::shootText = s;
}