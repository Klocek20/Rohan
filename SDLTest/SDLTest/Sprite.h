#pragma once
#include "SDLSetup.h"

class CSprite{

public:

	void draw();
	void setX(int value);
	void setY(int value);
	CSprite(SDL_Renderer* passedRenderer, std::string passedPath, int x, int y, int w, int h);
	~CSprite();

private:

	int x;
	int y;
	std::string path;
	SDL_Rect rect;
	SDL_Renderer* renderer;
	SDL_Texture* image;

};

