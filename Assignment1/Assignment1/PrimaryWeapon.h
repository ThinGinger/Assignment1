#pragma once
#include "Weapon.h"
class PrimaryWeapon : public Weapon
{
public:
	PrimaryWeapon();
	~PrimaryWeapon();

	PrimaryWeapon::PrimaryWeapon(std::string s);
};

