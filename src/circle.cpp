#include "circle.h"

Circle::Circle(uint32_t radius, std::unique_ptr<DrawCircleStrategy> drawStrategy)
    : m_radius(radius), m_drawStrategy(std::move(drawStrategy))
{

}

uint32_t Circle::getRadius() const
{
    return m_radius;
}

void Circle::draw() const
{
    m_drawStrategy.get()->draw(*this);
}