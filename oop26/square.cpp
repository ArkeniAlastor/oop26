#include <iostream>

#include "Square.h"

using namespace std;

void Square::ShowArea() const
{
	cout << "Square of square: " << m_value1 * m_value1 << endl;
}

