#pragma once
#include <iostream>
#include "GameActor.h"

using namespace std;

class Items : public GameActor {
public:
	//Constructor
	Items(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo);
};
