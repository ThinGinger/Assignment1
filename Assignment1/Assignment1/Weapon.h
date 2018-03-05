#pragma once
class Weapon
{
public:
	Weapon(char t);
	~Weapon();

	char weaponType;

	void Shoot();
};
