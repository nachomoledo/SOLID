#include "square.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

Square::Square(uint32_t side)
    : m_side(side)
{

}

uint32_t Square::getSide() const
{
    return m_side;
}

void Square::draw() const
{
    int width = m_side;
    int height = width;
    std::vector<std::vector<unsigned char>> matrix(height, std::vector<unsigned char>(width, BACKGROUND_CHAR));


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