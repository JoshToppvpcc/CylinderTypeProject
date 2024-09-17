#include "CircleType.h"
#include <iostream>
#include <cmath> 

CircleType::CircleType(double r, double x, double y) : radius(r), center(x, y) {}

void CircleType::setCenter(double x, double y) {
    center = {x, y};
}

void CircleType::setRadius(double r) {
    radius = r;
}

double CircleType::getRadius() const {
    return radius;
}

std::pair<double, double> CircleType::getCenter() const {
    return center;
}

double CircleType::calculateCircumference() const {
    return 2 * M_PI * radius;
}

double CircleType::calculateArea() const {
    return M_PI * std::pow(radius, 2);
}

void CircleType::printCircleProperties() const {
    std::cout << "Circle Properties:" << std::endl;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circumference: " << calculateCircumference() << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
}
