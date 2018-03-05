#pragma once
#include "Weapon.h"
class SecondaryWeapon : public Weapon
{
public:
	SecondaryWeapon();
	~SecondaryWeapon();

	SecondaryWeapon::SecondaryWeapon(std::string s);
};

