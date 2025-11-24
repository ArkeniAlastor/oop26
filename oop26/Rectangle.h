#pragma once

#include "Figure.h"

class Rectangle :
    public Figure
{
public:
	void ShowLenght() const;
    void ShowArea() const;
};