#ifndef DRAW_CIRCLE_STRATEGY_H
#define DRAW_CIRCLE_STRATEGY_H

class Circle;

class DrawCircleStrategy
{
public:
    virtual ~DrawCircleStrategy() = default;

    virtual void draw(const Circle& circle) const = 0;
};

#endif // DRAW_CIRCLE_STRATEGY_H