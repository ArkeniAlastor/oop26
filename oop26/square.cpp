#include <iostream>
#include "Square.h"

using namespace std;

void Square::ShowLenght() const
{
	cout << "Perimeter of square: " << 4 * m_value1 << endl;
}

void Square::ShowArea() const
{
	cout << "Square of square: " << m_value1 * m_value1 << endl;
}