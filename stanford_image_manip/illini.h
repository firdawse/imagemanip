#ifndef ILLINI_H
#define ILLINI_H
#include "image.h"

class Illini : public Image
{
public:
    using Image::Image;
    Illini(string filename,double color1=11,double color2=216 );
};

#endif // ILLINI_H
