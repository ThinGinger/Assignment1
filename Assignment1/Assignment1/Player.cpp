#include "Player.h"
#include <iostream>



Player::Player()
{

}


Player::~Player()
{
}

void Player::Equip(PrimaryWeapon w)
{
	weaponPrimary = w;
	std::cout << "Primary Weapon Equipped";
}

void Player::Equip(SecondaryWeapon w)
{
	weaponSecondary = w;
	std::cout << "Secondary Weapon Equipped";
}

void Player::ShootPrimary()
{
	weaponPrimary.Shoot();
}

void Player::ShootSecondary()
{
	weaponSecondary.Shoot();
}