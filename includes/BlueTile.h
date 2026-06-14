//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR2_TILES_BLUETILE_H
#define OOP_PR2_TILES_BLUETILE_H
#include "Tile.h"

class BlueTile : public Tile {
public:
    //Constructor and Deconstructor
    BlueTile();
    ~BlueTile() override = default;

    //Functions
    void mark() override;
    char getColor() override;
private:
};

#endif //OOP_PR2_TILES_BLUETILE_H
