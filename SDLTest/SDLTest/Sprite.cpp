#include "Sprite.h"

CSprite::CSprite(SDL_Renderer* passedRenderer, std::string passedPath, int passedX, int passedY, int w, int h){

	x = passedX;
	y = passedY;
	rect.x = x;
	rect.y = y;
	rect.h = h;
	rect.w = w;

	path = passedPath;
	renderer = passedRenderer;
	image = IMG_LoadTexture(renderer, path.c_str());

}

void CSprite::draw(){

	SDL_RenderCopy(renderer, image, NULL, &rect);

}

void CSprite::setX(int value){

	x += value;
	rect.x = int(x);

}

void CSprite::setY(int value) {

	y += value;
	rect.y = int(y);

}

CSprite::~CSprite(){

	delete renderer;
	delete image;

}
