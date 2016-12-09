#pragma once
#include "Building.h"
#include "Worker.h"
#include "Rock.h"
#include "SDLSetup.h"
#include <vector>

class CSpaceStation{

public:

	CSpaceStation();
	~CSpaceStation();

private:

	CSDLSetup* cSDLSetup;
	std::vector<CBuilding*> buildings;
	std::vector<CWorker*> workers;
	std::vector<CRock*> rocks;

};

