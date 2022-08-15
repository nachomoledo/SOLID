#include "rectangle.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

Rectangle::Rectangle(uint32_t width, uint32_t height, std::unique_ptr<DrawRectangleStrategy> drawStrategy)
    : m_width(width), m_height(height), m_drawStrategy(std::move(drawStrategy))
{

}

uint32_t Rectangle::getWidth() const
{
    return m_width;
}

uint32_t Rectangle::getHeight() const
{
    return m_height;
}

void Rectangle::draw() const
{
    m_drawStrategy.get()->draw(*this);
}