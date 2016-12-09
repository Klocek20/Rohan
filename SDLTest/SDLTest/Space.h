#pragma once
#include "SDLSetup.h"

class CSpace{

public:

	void run();

	CSpace(CSDLSetup* passedCSDLSetup);
	~CSpace();

private:

	CSDLSetup* cSDLSetup;

};

