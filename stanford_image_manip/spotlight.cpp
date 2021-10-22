#include "spotlight.h"
#include <math.h>

spotlight::spotlight(string filename ,int X,int Y):Image()
{

    int d=0;
    readFromFile(filename);
    for (unsigned x = 0; x < width(); x++) {
            for (unsigned y = 0; y < height(); y++) {
            HSLAPixel & P = getPixel(x, y);

            d=sqrt((x-X)*(x-X)+(y-Y)*(y-Y));
            if(d>160)
                          {  P.l = 0.2*P.l;}
            else

              {  P.l=(1-((0.5*d)/100))*P.l;}

            }
        }
}
