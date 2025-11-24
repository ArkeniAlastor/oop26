#include <iostream>

#include "Circle.h"

using namespace std;

void Circle::ShowLenght() const
{
    cout << "Lenght of circle: " << 2 * 3.14159 * m_value1 << endl;
}

void Circle::ShowArea() const
{
    cout << "Square of circle: " << 3.14159 * m_value1 * m_value2 << endl;
}
