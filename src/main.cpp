#include <iostream>
#include <vector>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

int main(int, char**) {
    // CIRCLE
    int radius = 5;
    int width = 2*radius+1;
    int height = width;

    std::vector<std::vector<unsigned char>> matrix(height, std::vector<unsigned char>(width, BACKGROUND_CHAR));

    int referenceValue = radius*radius;
    int referenceValueMin = referenceValue-referenceValue*0.07;
    int referenceValueMax = referenceValue+referenceValue*0.07;

    for(int i = 0 ; i < matrix.size() ; i++)
    {
        for(int j = 0 ; j < matrix[i].size() ; j++)
        {
            int aux = (i-radius)*(i-radius)+(j-radius)*(j-radius);
            if ((aux >= referenceValueMin) && (aux <= referenceValueMax))
            {
                matrix[i][j] = POINT_CHAR;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // SQUARE
    int width2 = 9;
    int height2 = width2;
    std::vector<std::vector<unsigned char>> matrix2(height2, std::vector<unsigned char>(width2, BACKGROUND_CHAR));


    for(int i = 0 ; i < matrix2.size() ; i++)
    {
        for(int j = 0 ; j < matrix2[i].size() ; j++)
        {
            if ((0 == i) || ((matrix2.size()-1) == i) || (j == 0) || ((matrix2[i].size()-1) == j))
            {
                matrix2[i][j] = POINT_CHAR;
            }
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << "\n";
    }

    // RECTANGLE
    int width3 = 7;
    int height3 = 11;
    std::vector<std::vector<unsigned char>> matrix3(height3, std::vector<unsigned char>(width3, BACKGROUND_CHAR));

    for(int i = 0 ; i < matrix3.size() ; i++)
    {
        for(int j = 0 ; j < matrix3[i].size() ; j++)
        {
            if ((0 == i) || ((matrix3.size()-1) == i) || (j == 0) || ((matrix3[i].size()-1) == j))
            {
                matrix3[i][j] = POINT_CHAR;
            }
            std::cout << matrix3[i][j] << " ";
        }
        std::cout << "\n";
    }
}

