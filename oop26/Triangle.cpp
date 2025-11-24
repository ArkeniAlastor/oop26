#include "Triangle.h"
#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowLenght() const
{
    cout << "Perimeter of triangle: " << 3 * m_value1 << endl;
}

void Triangle::ShowArea() const
{
    cout << "Square of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}