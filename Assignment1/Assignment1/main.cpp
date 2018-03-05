#include <iostream>
#include "Player.h"
#include "Weapon.h"

int main()
{
	Player p;

	Weapon w1('p');
	Weapon w2('c'), w3('c');

	p.Equip(w1);
	p.Equip(w2);


	getchar();
	return 0;
}