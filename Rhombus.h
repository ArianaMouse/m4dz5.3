#pragma once

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Parallelogram.h"

//Ромб.
class Rhombus : public Parallelogram {
public:
    Rhombus(double side, double A, double B);
};

#endif