#pragma once
#include "Sprite.h"

class CShip{

public:

	CShip();

	void move(int type);

	
	~CShip();

private:

	CSprite* sprite;


};

