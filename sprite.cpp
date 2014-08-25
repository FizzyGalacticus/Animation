#include "sprite.h"

Sprite::Sprite(const QString & filename,const int & width, const int & height, const int & numberOfFrames) :
    _mainImage(new QImage(filename)),
    _currentSprite(new QImage(_mainImage->copy(0,0,width,height))),
    _numberOfFrames(numberOfFrames)
{

}
