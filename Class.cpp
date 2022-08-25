#include "Class.h"

Enemy::Enemy(std::string name, int maxHP, int attack)
	: mName{ name }, mMaxHP{ maxHP }, mHP{ maxHP }, mAttack{ attack }
{
	std::cout << mName << " " << mMaxHP << " " << mAttack << std::endl;
}

void Enemy::DisplayHealth()
{
	std::cout << mName << " : " << mHP << std::endl;
}

Player::Player(std::string name, int maxHP, int attack)
	: mName{ name }, mMaxHP{ maxHP }, mHP{ maxHP }, mAttack{ attack }
{
	std::cout << mName << " " << mMaxHP << " " << mAttack << std::endl;
}

void Player::DisplayHealth()
{
	std::cout << mName << " : " << mHP << std::endl;
}

void Enemy::Attack2(Enemy& e, Player& p)
{
	std::cout << e.mName << "이(가) " << p.mName << "을(를) 공격했다!" << std::endl;
	p.mHP = p.mHP - e.mAttack;
}
