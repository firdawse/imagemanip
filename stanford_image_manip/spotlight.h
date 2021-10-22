#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include "image.h"

class spotlight : public Image
{
public:
    using Image::Image;
    spotlight(string filename,int x,int y);
};

#endif // SPOTLIGHT_H
