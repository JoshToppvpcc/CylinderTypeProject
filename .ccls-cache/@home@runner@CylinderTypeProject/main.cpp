
#include <iostream>
#include "CylinderType.h"

int main() {
    CylinderType cylinder(5, 10, 0, 0);

    std::cout << "Initial Cylinder Properties:" << std::endl;
    cylinder.printCylinderProperties();

    std::cout << "\nUpdating properties...\n" << std::endl;
    cylinder.setRadius(7);
    cylinder.setHeight(12);
    cylinder.setCenter(1, 1);

    std::cout << "Updated Cylinder Properties:" << std::endl;
    cylinder.printCylinderProperties();

    return 0;
}
