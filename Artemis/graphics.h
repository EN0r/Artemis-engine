#pragma once

#include "window.h"
#include "SDL_ttf.h"

class graphics
{
private:

	


public:



	void drawRect(SDL_Renderer* _renderer ,float x, float y, float w, float h, int r, int g, int b, int a);
	void fillRect(SDL_Renderer* _renderer, SDL_Rect* pos, SDL_Color color);

	void drawText(SDL_Renderer* _renderer, const char* Text, float x, float y, float w, float h, SDL_Color color);


	void renderSprite(SDL_Surface* image);

};

