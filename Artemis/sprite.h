#pragma once
#include "SDL.h"
#include "SDL_image.h"
class sprite // this component 
{
	
private:
	
	SDL_Rect* thisPos = new SDL_Rect;
	SDL_Surface* thisSurface;
	SDL_Texture* thisTexture;


protected:
	
	const char* name = "sprite"; // component name read only
public:

	const char* thisPath;

	~sprite();
	const char* getName() { return name; }
	// load sprite
	void loadSprite(SDL_Renderer* _renderer, const char* path);
	// draw sprite
	void drawSprite(SDL_Renderer* _renderer);


};

sprite::~sprite()
{
	SDL_DestroyTexture(thisTexture);
	SDL_FreeSurface(thisSurface);
}

void sprite::drawSprite(SDL_Renderer* _renderer)
{
	SDL_RenderCopy(_renderer, this->thisTexture, NULL, this->thisPos);
}

void sprite::loadSprite(SDL_Renderer* _renderer, const char* path)
{
	

	thisSurface = IMG_Load(path);
	
	if (thisSurface == NULL)
		std::cout << "Something went wrong. ERR #IMG_LOAD" << std::endl;
	thisPath = path;
	thisPos->x = 100;
	thisPos->y = 100;
	thisPos->w = 100;
	thisPos->h = 100;

	if (thisSurface == NULL)
		std::cout << "Something went wrong. ERR #SURFACE_INIT" << std::endl;

	thisTexture = SDL_CreateTextureFromSurface(_renderer,thisSurface);
	
	

}