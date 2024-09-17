#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include "CircleType.h"

class CylinderType : public CircleType {
private:
    double height;

public:
    CylinderType(double r = 0, double h = 0, double x = 0, double y = 0);

    void setHeight(double h);
    double getHeight() const;

    double calculateVolume() const;
    double calculateSurfaceArea() const;

    void printCylinderProperties() const;
};

#endif // CYLINDERTYPE_H
