#pragma once

#include "Figure.h"

class Triangle :
    public Figure
{
public:
	void ShowLenght() const;
    void ShowArea() const;
};