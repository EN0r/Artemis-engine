#pragma once
#include <iostream>
#include "SDL.h"
#include "graphics.h"


class game
{

public:

	void Update(SDL_Renderer* _renderer, SDL_GLContext _context);
	void Start(SDL_Renderer* _renderer);
	void Render(SDL_Renderer* _renderer);


};

