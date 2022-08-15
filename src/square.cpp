#include "square.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

Square::Square(uint32_t side, std::unique_ptr<DrawSquareStrategy> drawStrategy)
    : m_side(side), m_drawStrategy(std::move(drawStrategy))
{

}

uint32_t Square::getSide() const
{
    return m_side;
}

void Square::draw() const
{
    m_drawStrategy.get()->draw(*this);
}