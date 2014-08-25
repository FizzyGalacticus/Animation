#ifndef SPRITE_H
#define SPRITE_H

#include <QImage>
#include <QString>

class Sprite
{
    //Q_OBJECT

public:
    Sprite(const QString & filename,const int & width, const int & height, const int & numberOfFrames);

private:
    Sprite();

    QImage * _mainImage;
    QImage * _currentSprite;
    const int _numberOfFrames;
};

#endif // SPRITE_H
