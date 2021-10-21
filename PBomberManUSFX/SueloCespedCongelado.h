#pragma once
#include <iostream>
#include "GameActor.h"

using namespace std;

class SueloCespedCongelado : public GameActor {
public:
	//Constructor
	SueloCespedCongelado(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo);
};
