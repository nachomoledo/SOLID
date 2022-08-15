#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "drawRectangleStrategy.h"
#include <cstdint>
#include <memory>

class Rectangle : public Shape
{
    public:
        Rectangle(uint32_t width, uint32_t height, std::unique_ptr<DrawRectangleStrategy> drawStrategy);
        virtual ~Rectangle() = default;

        uint32_t getWidth() const;
        uint32_t getHeight() const;
        void draw() const override;

        private:
            uint32_t m_width;
            uint32_t m_height;
            std::unique_ptr<DrawRectangleStrategy> m_drawStrategy;
};

#endif // RECTANGLE_H