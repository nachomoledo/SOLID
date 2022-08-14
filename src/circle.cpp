#include "circle.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

Circle::Circle(uint32_t radius)
    : m_radius(radius)
{

}

uint32_t Circle::getRadius() const
{
    return m_radius;
}

void Circle::draw() const
{
    int width = 2*m_radius+1;
    int height = width;
    std::vector<std::vector<unsigned char>> matrix(height, std::vector<unsigned char>(width, BACKGROUND_CHAR));

    int referenceValue = m_radius*m_radius;
    int referenceValueMin = referenceValue-referenceValue*0.07;
    int referenceValueMax = referenceValue+referenceValue*0.07;

    for(int i = 0 ; i < matrix.size() ; i++)
    {
        for(int j = 0 ; j < matrix[i].size() ; j++)
        {
            int aux = (i-m_radius)*(i-m_radius)+(j-m_radius)*(j-m_radius);
            if ((aux >= referenceValueMin) && (aux <= referenceValueMax))
            {
                matrix[i][j] = POINT_CHAR;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}