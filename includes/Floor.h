//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR2_TILES_FLOOR_H
#define OOP_PR2_TILES_FLOOR_H
#include "Tile.h"

class Floor {
public:
    //Constructor and Deconstructor
    Floor();
    ~Floor();

    //Functions
    void print() const;
    void mark(int x, int y);
    void replace(int x, int y);
    bool isRed() const;

private:
    Tile* grid[3][3];
    const int size = 3;
};

#endif //OOP_PR2_TILES_FLOOR_H
