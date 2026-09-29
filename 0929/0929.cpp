#include <iostream>
#include "PoolHandle.h"
#include "ObjectPool.h"

class Enemy
{
public:
	void Attack()
	{
		std::cout << "Enemy attacks!" << std::endl;
	}
};

int main()
{
	ObjectPool<Enemy> pool(2);

	auto e1 = pool.Acquire();
	e1->Attack();

	auto e2 = pool.Acquire();
	e2->Attack();
}