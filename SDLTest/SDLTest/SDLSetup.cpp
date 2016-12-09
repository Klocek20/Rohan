#include "SDLSetup.h"

CSDLSetup::CSDLSetup(){

	SDL_Init(SDL_INIT_VIDEO);
	srand(time(NULL));

	window = NULL;
	window = SDL_CreateWindow("SDL Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1600, 900, SDL_WINDOW_RESIZABLE);

	if (window == NULL) {

		std::cout << "Window couldn't be created." << std::endl;
		SDL_QUIT;

	}

	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_SetRenderDrawColor(renderer, randomColor(), randomColor(), randomColor(), 255);

	mainEvent = new SDL_Event();

	running = true;
	oldTime = 0;
	changeColorTime = 1000;

}

int CSDLSetup::randomColor(){

	return rand() % 255 + 0;

}

void CSDLSetup::begin(){

	SDL_PollEvent(getEvent());
	SDL_RenderClear(renderer);

}

SDL_Event* CSDLSetup::getEvent() {

	return mainEvent;

}

SDL_Renderer* CSDLSetup::getRenderer() {

	return renderer;

}

void CSDLSetup::end() {

	SDL_RenderPresent(renderer);

}


CSDLSetup::~CSDLSetup(){

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

}
