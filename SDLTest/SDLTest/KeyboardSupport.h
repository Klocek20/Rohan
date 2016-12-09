#pragma once
#include "SDLSetup.h"
#include "Sprite.h"

class CKeyboardSupport{

public:

	bool getQuit();
	void checkKeyboard();

	CKeyboardSupport(CSDLSetup* passedCSDLSetup, CSprite* passedCharacter);
	~CKeyboardSupport();


private:

	bool moveUp;
	bool moveDown;
	bool moveLeft;
	bool moveRight;
	bool quit;
	bool pressed;
	CSDLSetup* cSDLSetup;
	CSprite* character;

};

