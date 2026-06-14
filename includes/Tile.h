#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <stdlib.h>

class Tile {
public:
    //Constructor and Deconstructor
    Tile();
    virtual ~Tile();

    //Functions
    bool isMarked(); //Return if the tile is marked for replacement
    void display(); //Prints one character for the color
    char virtual getColor() = 0;
    void virtual mark() = 0;

protected:
    bool marked; //Defines if the tile is marked to be replaced

private:
};

#endif // TILE_H
