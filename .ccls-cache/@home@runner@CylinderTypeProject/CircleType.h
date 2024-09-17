#ifndef CIRCLETYPES_H
#define CIRCLETYPES_H

#include <utility> 

class CircleType {
protected:
    double radius;
    std::pair<double, double> center;

public:
    CircleType(double r = 0, double x = 0, double y = 0);

    void setCenter(double x, double y);
    void setRadius(double r);

    double getRadius() const;
    std::pair<double, double> getCenter() const;

    double calculateCircumference() const;
    double calculateArea() const;

    void printCircleProperties() const;
};

#endif // CIRCLETYPES_H