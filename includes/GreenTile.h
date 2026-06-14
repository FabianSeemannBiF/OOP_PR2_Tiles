//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR2_TILES_GREENTILE_H
#define OOP_PR2_TILES_GREENTILE_H
#include "Tile.h"

class GreenTile : public Tile {
public:
    //Constructor and Deconstructor
    GreenTile();
    ~GreenTile() override = default;

    //Functions
    void mark() override;
    char getColor() override;
private:
};

#endif //OOP_PR2_TILES_GREENTILE_H
