#include "KeyboardSupport.h"

CKeyboardSupport::CKeyboardSupport(CSDLSetup* passedCSDLSetup, CSprite* passedCharacter){

	quit = false;
	pressed = false;
	moveUp = false;
	moveDown = false;
	moveLeft = false;
	moveRight = false;

	character = passedCharacter;
	cSDLSetup = passedCSDLSetup;

}

void CKeyboardSupport::checkKeyboard(){

	if (cSDLSetup->getEvent()->type == SDL_KEYDOWN){

		if (!pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_ESCAPE){

			quit = true;

		}

		if (!pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_w) {

			moveUp = true;

		}

		if (!pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_s) {

			moveDown = true;

		}

		if (!pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_a) {

			moveLeft = true;

		}

		if (!pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_d) {

			moveRight = true;

		}

		pressed = true;

	}

	if (cSDLSetup->getEvent()->type == SDL_KEYUP){

		if (pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_w) {

			moveUp = false;

		}

		if (pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_s) {

			moveDown = false;

		}

		if (pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_a) {

			moveLeft = false;

		}

		if (pressed && cSDLSetup->getEvent()->key.keysym.sym == SDLK_d) {

			moveRight = false;

		}

		pressed = false;

	}

	if (moveUp){

		std::cout << "UP";
		character->setY(-2);

	}

	else if (moveDown) {

		std::cout << "DOWN";
		character->setY(2);

	}

	else if (moveLeft) {

		std::cout << "LEFT";
		character->setX(-2);

	}

	else if (moveRight) {

		std::cout << "RIGHT";
		character->setX(2);

	}


}

bool CKeyboardSupport::getQuit(){

	return quit;

}

CKeyboardSupport::~CKeyboardSupport(){

	delete cSDLSetup;
	delete character;
}