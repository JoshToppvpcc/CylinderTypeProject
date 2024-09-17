#include "CylinderType.h"
#include "CircleType.h"
#include <iostream>
#include <cmath> 

CylinderType::CylinderType(double r, double h, double x, double y) : CircleType(r, x, y), height(h) {}

void CylinderType::setHeight(double h) {
    height = h;
}

double CylinderType::getHeight() const {
    return height;
}

double CylinderType::calculateVolume() const {
    return calculateArea() * height;
}

double CylinderType::calculateSurfaceArea() const {
    return 2 * calculateArea() + calculateCircumference() * height;
}

void CylinderType::printCylinderProperties() const {
    printCircleProperties();
    std::cout << "Cylinder Properties:" << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Surface Area: " << calculateSurfaceArea() << std::endl;
    std::cout << "Volume: " << calculateVolume() << std::endl;
}
