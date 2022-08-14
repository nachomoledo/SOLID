#include "rectangle.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

Rectangle::Rectangle(uint32_t width, uint32_t height)
    : m_width(width), m_height(height)
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
    int m_width = 7;
    int m_height = 11;
    std::vector<std::vector<unsigned char>> matrix(m_height, std::vector<unsigned char>(m_width, BACKGROUND_CHAR));

    for(int i = 0 ; i < matrix.size() ; i++)
    {
        for(int j = 0 ; j < matrix[i].size() ; j++)
        {
            if ((0 == i) || ((matrix.size()-1) == i) || (j == 0) || ((matrix[i].size()-1) == j))
            {
                matrix[i][j] = POINT_CHAR;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}