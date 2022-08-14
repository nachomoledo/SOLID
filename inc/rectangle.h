#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <cstdint>

class Rectangle : public Shape
{
    public:
        Rectangle(uint32_t width, uint32_t height);
        virtual ~Rectangle() = default;

        uint32_t getWidth() const;
        uint32_t getHeight() const;
        void draw() const override;

        private:
            uint32_t m_width;
            uint32_t m_height;
};

#endif // RECTANGLE_H