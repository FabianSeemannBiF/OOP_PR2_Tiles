//
// Created by Fabian on 6/14/26.
//
#include "../includes/Floor.h"
#include "../includes/RedTile.h"
#include "../includes/BlueTile.h"
#include "../includes/GreenTile.h"

Floor::Floor() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (rand() % 2 == 0) {
                this->grid[i][j] = new BlueTile();
            } else {
                this->grid[i][j] = new GreenTile();
            }
        }
    }
}

Floor::~Floor() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            delete this->grid[i][j];
        }
    }
}

void Floor::print() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            this->grid[i][j]->display();
        }
        std::cout << std::endl;
    }
    std::cout << "==========" << std::endl;
}

void Floor::mark(const int x, const int y) {
    if (x < 0 || x >= 3 || y < 0 || y >= 3) {
        throw std::invalid_argument("Floor::mark: invalid coordinates");
    }

    this->grid[x][y]->mark();
}

void Floor::replace(const int x, const int y) {
    if (x < 0 || x >= 3 || y < 0 || y >= 3) {
        throw std::invalid_argument("Floor::replace: invalid coordinates");
    }

    if (grid[x][y]->getColor() == 'G') {
        delete this->grid[x][y];
        this->grid[x][y] = new BlueTile();
    } else if (grid[x][y]->getColor() == 'B' && grid[x][y]->isMarked()) {
        delete this->grid[x][y];
        this->grid[x][y] = new RedTile();
    }
}

bool Floor::isRed() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->grid[i][j]->getColor() != 'R') {
                return false;
            }
        }
    }
    return true;
}
