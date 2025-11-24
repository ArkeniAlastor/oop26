#pragma once

#include "Figure.h"

class Circle :
    public Figure
{
public:
	void ShowLenght() const;
    void ShowArea() const;
};