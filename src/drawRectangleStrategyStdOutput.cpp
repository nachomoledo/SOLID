#include "drawRectangleStrategyStdOutput.h"
#include "rectangle.h"
#include <vector>
#include <iostream>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

void DrawRectangleStrategyStdOutput::draw(const Rectangle& rectangle) const
{
    int width = rectangle.getWidth();
    int height = rectangle.getHeight();
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