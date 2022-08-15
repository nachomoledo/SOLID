#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "drawCircleStrategy.h"
#include <cstdint>
#include <memory>

class Circle : public Shape
{
    public:
        explicit Circle(uint32_t radius, std::unique_ptr<DrawCircleStrategy> drawStrategy);
        virtual ~Circle() = default;
        
        uint32_t getRadius() const;
        void draw() const override;

    private:
        uint32_t m_radius;
        std::unique_ptr<DrawCircleStrategy> m_drawStrategy;
};

#endif // CIRCLE_H