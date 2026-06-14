//
// Created by Fabian on 6/14/26.
//
#include "../includes/BlueTile.h"

BlueTile::BlueTile() {
    if (rand() % 2 == 0) {
        this->marked = true;
    } else {
        this->marked = false;
    }
}

void BlueTile::mark() {
    this->marked = true;
}

char BlueTile::getColor() {
    return 'B';
}
