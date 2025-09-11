#pragma once

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

//Параллелограмм.
class Parallelogram : public Quadrilateral {
protected:
    Parallelogram(double a, double b, double A, double B, const std::string& name);

public:
    Parallelogram(double a, double b, double A, double B);
};

#endif