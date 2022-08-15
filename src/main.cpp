#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include "drawCircleStrategyStdOutput.h"
#include "drawSquareStrategyStdOutput.h"
#include "drawRectangleStrategyStdOutput.h"

#include <iostream>
#include <vector>
#include <memory>

#define POINT_CHAR '='
#define BACKGROUND_CHAR ' '

void draw(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto const& shape : shapes)
    {
        shape->draw();
    }
} 

int main(int, char**) {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(5, std::make_unique<DrawCircleStrategyStdOutput>()));
    shapes.push_back(std::make_unique<Square>(9, std::make_unique<DrawSquareStrategyStdOutput>()));
    shapes.push_back(std::make_unique<Rectangle>(7, 12, std::make_unique<DrawRectangleStrategyStdOutput>()));

    draw(shapes);
}

