#ifndef DRAW_RECTANGLE_STRATEGY_H
#define DRAW_RECTANGLE_STRATEGY_H

class Rectangle;

class DrawRectangleStrategy
{
public:
    virtual ~DrawRectangleStrategy() = default;

    virtual void draw(const Rectangle& rectangle) const = 0;
};

#endif // DRAW_RECTANGLE_STRATEGY_H