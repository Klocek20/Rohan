#pragma once
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "SDL.h"
#include "SDL_image.h"

class CSDLSetup{

public:

	SDL_Event* getEvent();
	SDL_Renderer* getRenderer();

	int randomColor();

	void begin();
	void end();

	CSDLSetup();
	~CSDLSetup();

private:

	bool running;
	SDL_Window* window;
	SDL_Renderer* renderer;
	int oldTime, changeColorTime, newTime;
	SDL_Event* mainEvent;

};

