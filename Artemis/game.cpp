#include "game.h"
#include "input.h"
#include "guiMain.h"

graphics* _graphics = new graphics;

inputState* _inputState = new inputState;

SDL_Color color3;

int xPos = 0;
int yPos = 0;
bool checkBoxClicked;

/*
	returns color. Instead of constantly creating new color in update i decided
	that i will make a SetColor function instead of having 500 objects of color
	to prevent a memory leak
*/

SDL_Color SetColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a) 
{
	color3 = { r , g , b , a };
	return color3;
}



void game::Update(SDL_Renderer* _renderer, SDL_GLContext _context)
{
	
	SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);
	SDL_RenderClear(_renderer);
	
	SDL_Rect* rSize = new SDL_Rect;
	rSize->x = 400;
	rSize->y = 400;
	rSize->w = 100;
	rSize->h = 100;

	artemisFrame* newFrame = new artemisFrame(_graphics, _renderer, rSize);

	if (checkBoxClicked = newFrame->addElement(_renderer, "checkBox", newFrame, SetColor(10, 10, 255, 255), SetColor(10, 10, 20, 255)))
	{
		std::cout << "clicked" << std::endl;
	}

	_inputState->getMousePosition(xPos,yPos);
	_graphics->drawRect(_renderer,xPos,yPos,10,10,255,0,0,255);



	_graphics->drawText(_renderer, "Hello world!", 100, 100, 100, 100, SetColor(10, 10, 255, 255));




	std::cout << xPos << std::endl;

	delete rSize;
	delete newFrame;

}

void game::Start(SDL_Renderer* _renderer)
{



}