#include <iostream>
#include "Player.h"
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"

int main()
{
	Player p;

	PrimaryWeapon w1("Dugga Dugga");
	SecondaryWeapon w2("Pew Pew"), w3("Bang Bang");

	p.Equip(w1);
	p.Equip(w2);

	p.ShootPrimary();
	p.ShootSecondary();

	p.Equip(w3);

	p.ShootSecondary();


	getchar();
	return 0;
}