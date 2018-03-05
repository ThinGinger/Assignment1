#pragma once
#include "Weapon.h"
class Player
{
public:
	Player();
	~Player();

	Weapon weaponPrimary;
	Weapon weaponSecondary;

	void Equip(Weapon w);
	void ShootPrimary(Weapon w);
	void ShootSecondary(Weapon w);


};

