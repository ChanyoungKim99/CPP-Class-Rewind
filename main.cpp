#include <iostream>
#include "Class.h"

int main()
{
	Enemy e1("e1", 10, 2);
	Enemy e2("e2", 10, 2);
	Player p1("p1", 15, 3);
	Player p2("p2", 15, 3);

	Enemy::Attack1(e1, p1);
	Enemy::Attack1(p1, e1);
	Enemy::Attack1(e1, e2);
	p1.DisplayHealth();

	e1.Attack2(e1, p1);
	e1.Attack2(p1, e1);
	e1.Attack2(e1, e2);

}