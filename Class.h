#pragma once
#include <iostream>
class Enemy
{
public:
	std::string mName;
	int mMaxHP;
	int mHP;
	int mAttack;

	Enemy(std::string name, int maxHP, int attack);
	~Enemy()
	{
	}
	void DisplayHealth();

	static void Attack1(Enemy& e, Player& p)
	{
		std::cout << e.mName << "��(��) " << p.mName << "��(��) �����ߴ�!" << std::endl;
		p.mHP = p.mHP - e.mAttack;
	};

	void Attack2(Enemy& e, Player& p);
};

class Player
{
public:
	std::string mName;
	int mMaxHP;
	int mHP;
	int mAttack;

	Player(std::string name, int maxHP, int attack);
	~Player()
	{
	}
	void DisplayHealth();
};


