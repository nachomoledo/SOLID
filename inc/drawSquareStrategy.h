#ifndef DRAW_SQUARE_STRATEGY_H
#define DRAW_SQUARE_STRATEGY_H

class Square;

class DrawSquareStrategy
{
public:
    virtual ~DrawSquareStrategy() = default;

    virtual void draw(const Square& circle) const = 0;
};

#endif // DRAW_SQUARE_STRATEGY_H