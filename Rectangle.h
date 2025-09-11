#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Parallelogram.h"

//Прямоугольник.
class Rectangle : public Parallelogram {
public:
    Rectangle(double a, double b);
};

#endif