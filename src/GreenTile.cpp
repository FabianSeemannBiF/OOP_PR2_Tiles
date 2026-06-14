//
// Created by Fabian on 6/14/26.
//
#include "../includes/GreenTile.h"

GreenTile::GreenTile() {
    this->marked = true;
}

void GreenTile::mark() {
    this->marked = true;
}

char GreenTile::getColor() {
    return 'G';
}
