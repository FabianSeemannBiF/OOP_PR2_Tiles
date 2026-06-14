//
// Created by Fabian on 6/14/26.
//
#include "../includes/RedTile.h"

RedTile::RedTile() {
    this->marked = false;
}

void RedTile::mark() {
    this->marked = false;
}

char RedTile::getColor() {
    return 'R';
}

