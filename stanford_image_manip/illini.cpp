#include "illini.h"
# include "HSLAPixel.h"




Illini::Illini(string filename ,double color1,double color2):Image()
{


    readFromFile(filename);
    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {
        //reference on the pixel
        HSLAPixel &P = getPixel(x, y);
        double d1=abs(P.h-color1);
         double d2=abs(P.h-color2);
        d1=(d1>360-d1)?360-d1:d1;
        d2=(d2>360-d2)?360-d2:d2;

        if(d1<d2)
            P.h=color1;
        else
            P.h=color2;
        }

}
