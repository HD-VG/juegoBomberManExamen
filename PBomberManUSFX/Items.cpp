#include "Items.h"



Items::Items(Texture* _textura, Tile* _tileActual)
{
	tileActual = _tileActual;
	tileSiguiente = nullptr;

	if (tileActual != nullptr) {
		tileActual->setItems(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 3;
		posicionY = 3;
	}

	velocidad = 0;
	movil = false;
	enMovimiento = false;
	//direccionActual = MOVE_DIRECTION_NONE;
	//direccionSiguiente = MOVE_DIRECTION_NONE;
}

void Items::setTileActual(Tile* _tileNuevo)
{
	if (tileActual != nullptr) {
		tileActual->setItems(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setItems(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
}

