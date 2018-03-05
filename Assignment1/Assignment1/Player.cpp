#include "Player.h"
#include <iostream>



Player::Player()
{
}


Player::~Player()
{
}

void Player::Equip(Weapon w)
{

}

void Player::ShootPrimary(Weapon w)
{
	weaponPrimary.Shoot();
}

void Player::ShootSecondary(Weapon w)
{
	weaponSecondary.Shoot();
}