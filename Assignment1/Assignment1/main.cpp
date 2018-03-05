#include <iostream>
#include "Player.h"
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"

int main()
{
	Player p;

	PrimaryWeapon w1("Bang Bang");
	SecondaryWeapon w2("Clap ur ass"), w3("DUGGA DUGGA");

	p.Equip(w1);
	p.Equip(w2);

	p.ShootPrimary();
	p.ShootSecondary();

	p.Equip(w3);

	p.ShootSecondary();


	getchar();
	return 0;
}