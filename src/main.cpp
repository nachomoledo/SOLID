#include "circle.h"
#include "square.h"
#include "rectangle.h"

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
    shapes.push_back(std::make_unique<Circle>(5));
    shapes.push_back(std::make_unique<Square>(9));
    shapes.push_back(std::make_unique<Rectangle>(7, 12));

    draw(shapes);
}

