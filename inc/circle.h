#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cstdint>

class Circle : public Shape
{
    public:
        explicit Circle(uint32_t radius);
        virtual ~Circle() = default;
        
        uint32_t getRadius() const;
        void draw() const override;

    private:
        uint32_t m_radius;
};

#endif // CIRCLE_H