#ifndef DRAW_RECTANGLE_STRATEGY_STD_OUTPUT_H
#define DRAW_RECTANGLE_STRATEGY_STD_OUTPUT_H

#include "drawRectangleStrategy.h"

class DrawRectangleStrategyStdOutput : public DrawRectangleStrategy
{
    public:
        virtual ~DrawRectangleStrategyStdOutput() = default;

        void draw(const Rectangle& rectangle) const override;
};

#endif // DRAW_RECTANGLE_STRATEGY_STD_OUTPUT_H