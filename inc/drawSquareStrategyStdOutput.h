#ifndef DRAW_SQUARE_STRATEGY_STD_OUTPUT_H
#define DRAW_SQUARE_STRATEGY_STD_OUTPUT_H

#include "drawSquareStrategy.h"

class DrawSquareStrategyStdOutput : public DrawSquareStrategy
{
    public:
        virtual ~DrawSquareStrategyStdOutput() = default;

        void draw(const Square& square) const override;
};

#endif // DRAW_SQUARE_STRATEGY_STD_OUTPUT_H