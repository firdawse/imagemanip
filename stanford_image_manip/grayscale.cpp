#include "grayscale.h"

Grayscale::Grayscale(string filename):Image()
{
    readFromFile(filename);
    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {

        HSLAPixel &P = getPixel(x, y);

        P.s =0;
     }
}
