#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "SDLSetup.h"
#include "SDL.h"
#include "KeyboardSupport.h"
#include "Sprite.h"
#include "Space.h"

int main(int argc, char** argv){

	CSDLSetup* cSDLSetup = new CSDLSetup();
	CSprite* character = new CSprite(cSDLSetup->getRenderer(), "images/Must.png", 250, 250, 100, 180);
	CSpace* space = new CSpace(cSDLSetup);
	CKeyboardSupport* keyboardSupport = new CKeyboardSupport(cSDLSetup, character);

	while (!keyboardSupport->getQuit() && cSDLSetup->getEvent()->type != SDL_QUIT){

		cSDLSetup->begin();
		space->run();
		character->draw();
		keyboardSupport->checkKeyboard();
		cSDLSetup->end();

	}


	delete cSDLSetup;
	return 0;

}