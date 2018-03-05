#include "Weapon.h"
#include <iostream>

Weapon::Weapon(char t)
{
	weaponType = t;
}


Weapon::~Weapon()
{
}

void Weapon::Shoot()
{
	if (weaponType == 'p')
	{
		std::cout << "POW POW POW!";
	}
	else
	{
		std::cout << "pew pew pew";
	}
}

