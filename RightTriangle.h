#pragma once

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

//Прямой треугльник. 90.
class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
};

#endif