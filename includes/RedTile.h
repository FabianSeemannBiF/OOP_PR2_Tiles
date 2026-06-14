//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR2_TILES_REDTILE_H
#define OOP_PR2_TILES_REDTILE_H
#include "Tile.h"

class RedTile : public Tile {
public:
    //Constructor and Deconstructor
    RedTile();
    ~RedTile() override = default;

    //Functions
    void mark() override;
    char getColor() override;
};

#endif //OOP_PR2_TILES_REDTILE_H
