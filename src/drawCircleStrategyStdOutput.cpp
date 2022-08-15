#include "drawCircleStrategyStdOutput.h"
#include "circle.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

void DrawCircleStrategyStdOutput::draw(const Circle& circle) const
{
    int width = 2*circle.getRadius()+1;
    int height = width;
    std::vector<std::vector<unsigned char>> matrix(height, std::vector<unsigned char>(width, BACKGROUND_CHAR));

    int referenceValue = circle.getRadius()*circle.getRadius();
    int referenceValueMin = referenceValue-referenceValue*0.07;
    int referenceValueMax = referenceValue+referenceValue*0.07;

    for(int i = 0 ; i < matrix.size() ; i++)
    {
        for(int j = 0 ; j < matrix[i].size() ; j++)
        {
            int aux = (i-circle.getRadius())*(i-circle.getRadius())+(j-circle.getRadius())*(j-circle.getRadius());
            if ((aux >= referenceValueMin) && (aux <= referenceValueMax))
            {
                matrix[i][j] = POINT_CHAR;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}