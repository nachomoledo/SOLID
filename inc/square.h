#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include <cstdint>

class Square : public Shape
{
    public:
        Square(uint32_t side);
        virtual ~Square() = default;

        uint32_t getSide() const;
        void draw() const override;

        private:
            uint32_t m_side;
};

#endif // SQUARE_H