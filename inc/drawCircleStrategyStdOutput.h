#ifndef DRAW_CIRCLE_STRATEGY_STD_OUTPUT_H
#define DRAW_CIRCLE_STRATEGY_STD_OUTPUT_H

#include "drawCircleStrategy.h"

class DrawCircleStrategyStdOutput : public DrawCircleStrategy
{
    public:
        virtual ~DrawCircleStrategyStdOutput() = default;

        void draw(const Circle& circle) const override;
};

#endif // DRAW_CIRCLE_STRATEGY_STD_OUTPUT_H