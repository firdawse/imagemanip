#include "image.h"
#include "HSLAPixel.h"


Image::Image(string filename){
    readFromFile(filename);
}

void Image::lighten(double amount){
    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {
        //reference on the pixel
        HSLAPixel &P = getPixel(x, y);

        //modifiy the element of P
        P.l += amount;

        P.l = (P.l < 1) ? P.l : 1;

        P.l = (P.l < 0) ? 0 : P.l;
     }
}

void Image::saturate(double amount){
    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {
        //reference on the pixel
        HSLAPixel &P = getPixel(x, y);

        //modifiy the element of P
        P.s += amount;

        P.s = (P.s < 1) ? P.s : 1;

        P.s = (P.s < 0) ? 0 : P.s;
     }
}

void Image::rotateColor(double angle){

    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {
        //reference on the pixel
        HSLAPixel &P = getPixel(x, y);

        //modifiy the element of P
        P.h += angle;

        P.h = (P.h < 360) ? P.h : P.h - 360;

        P.h = (P.h < 0) ? P.h+360:P.h;
     }
}
