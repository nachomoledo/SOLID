#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include "drawSquareStrategy.h"
#include <cstdint>
#include <memory>

class Square : public Shape
{
    public:
        Square(uint32_t side, std::unique_ptr<DrawSquareStrategy> drawStrategy);
        virtual ~Square() = default;

        uint32_t getSide() const;
        void draw() const override;

        private:
            uint32_t m_side;
            std::unique_ptr<DrawSquareStrategy> m_drawStrategy;
};

#endif // SQUARE_H