#include "Space.h"



CSpace::CSpace(CSDLSetup* passedCSDLSetup){

	cSDLSetup = passedCSDLSetup;

}

void CSpace::run() {

	SDL_SetRenderDrawColor(cSDLSetup->getRenderer(), 118, 96, 138, 255);

	/*~~~~Wild Things with color randomize~~~~*/

	//newTime = SDL_GetTicks();

	//if (newTime - oldTime > changeColorTime){

	//SDL_SetRenderDrawColor(renderer, randomColor(), randomColor(), randomColor(), 255);
	//oldTime = newTime;

	//}

	/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

}

CSpace::~CSpace(){

	delete cSDLSetup;

}
