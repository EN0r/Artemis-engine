#include "Window.h"
#include "graphics.h"
#include "game.h"

/*

	PERSONAL NOTE TO SELF:
		MAKE SURE TO CREATE WINDOW BEFORE GETTING RENDERER OBJECT!!!
		IF I DO RENDERER WONT EXIST IN CURRENT CONTEXT!
		ALSO, MAKE SURE TO INITIALIZE SDL AND TTF
*/
bool quit = false;

int main(int argc, char* argv[])
{

	// grab window instance

	window* _window = new window;

	// grab graphics instance

	graphics* _graphics = new graphics;

	// sdl based variables




	// Main sdl stuffs

	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();

	//SDL_Window* window = SDL_CreateWindow("Hi", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	//SDL_Renderer* _renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_Color color = { 90,100,255 }; // Bad practice of intialising this in the so called: workspace but it'll be quick :)
	

	SDL_Event windowEvent;
	SDL_Window* window = _window->createWindow("xd",800,600);
	SDL_Renderer* _renderer = SDL_CreateRenderer(window, -1, 0);


	while (true)
	{

		if (SDL_PollEvent(&windowEvent))
		{

			if (SDL_QUIT == windowEvent.type)
			{

				quit = true;

				break;

			}

		}



		_graphics->drawText(_renderer, "Hello world!", 0, 0, 10, 10, color);
		SDL_RenderPresent(_renderer);
	}
	

	
	SDL_DestroyWindow(window);
	SDL_Quit();
	TTF_Quit();
	return 0;

}