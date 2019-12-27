#pragma once
#include "SDL.h"
#include <iostream>
#include <vector>
#include "game.h"
#include "sprite.h"
#include "ECS.h"
#include "windows.h"
#include "spriteSheets.h"

pool* _entPool = new pool;

entity* _ent = new entity;
_system* _sys = new _system; // the god itself.. he controls all entities that will be or ever be.
sprite* _sprite = new sprite;
SDL_Rect* pos = new SDL_Rect;


class layers
{
	

public:

	void mapLayer(SDL_Renderer* _renderer);
	void textLayer(SDL_Renderer* _renderer);
	void drawLayer(SDL_Renderer* _renderer);
	void uiLayer(SDL_Renderer* _renderer);
	void spriteLayer(SDL_Renderer* _renderer);
	void start(SDL_Renderer* _renderer);
};

void layers::start(SDL_Renderer* _renderer)
{ 

	// first texture
	_sys->addComponent<sprite>(_ent,_sprite);
	_sprite = _sys->getComponent<sprite>(_ent, _sprite);
	_sprite->loadSprite(_renderer, "Assets/Sprites/firstTexture.jpg");

	pos->x = 500;
	pos->y = 500;
	pos->w = 500;
	pos->h = 500;

	// tilemap test
	
	// make new entity of spriteSheet

	
	

	// make add a component to the entity of type spriteSheet

	//_sys->addComponent<spriteSheet>(_spriteEntity, _sheet);
	//_sheet = _sys->getComponent<spriteSheet>(_spriteEntity, _sheet);
	//_sheet->initSpriteSheet("Assets/Sprites/tileset.png");
	//_sheet->createCells();
	// get the component and store it as _spriteSheet
	
}

void layers::mapLayer(SDL_Renderer* _renderer)
{

}

void layers::spriteLayer(SDL_Renderer* _renderer)
{	
	_ent->setName("testEntity");
	
	
//	_sheet->renderCell(_renderer,1,200,200);
	_sprite->drawSprite(_renderer);

}

void layers::textLayer(SDL_Renderer* _renderer)
{
	
}

void layers::drawLayer(SDL_Renderer* _renderer)
{

}

void layers::uiLayer(SDL_Renderer* _renderer)
{
	
}