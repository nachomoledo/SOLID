#include <iostream>
#include <vector>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

int main(int, char**) {
    int radius = 5;
    int width = 2*radius+1;
    int height = width;

    std::vector<std::vector<unsigned char>> matrix(width, std::vector<unsigned char>(height, BACKGROUND_CHAR));

    int referenceValue = radius*radius;
    int referenceValueMin = referenceValue-referenceValue*0.07;
    int referenceValueMax = referenceValue+referenceValue*0.07;

    for(int i = 0 ; i < matrix.size() ; ++i)
    {
        for(int j = 0 ; j < matrix[i].size() ; ++j)
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
}

