#pragma once
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"
class Player
{
public:
	Player();
	~Player();

	PrimaryWeapon weaponPrimary;
	SecondaryWeapon weaponSecondary;

	void Equip(PrimaryWeapon w);
	void Equip(SecondaryWeapon w);

	void ShootPrimary();
	void ShootSecondary();


};

