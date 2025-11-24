#include <iostream>

#include "Rhombus.h"

using namespace std;

void Rhombus::ShowLenght() const
{
	cout << "Perimeter of rhombus: " << 4 * m_value1 << endl;
}

void Rhombus::ShowArea() const
{
	cout << "Square of rhombus: " << (m_value1 * m_value2) / 2 << endl;
}
