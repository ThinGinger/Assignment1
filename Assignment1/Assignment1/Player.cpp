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
}

void Player::Equip(SecondaryWeapon w)
{
	weaponSecondary = w;
}

void Player::ShootPrimary()
{
	weaponPrimary.Shoot();
}

void Player::ShootSecondary()
{
	weaponSecondary.Shoot();
}