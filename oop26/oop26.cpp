#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rhombus.h"

using namespace std;

int main()
{
    Figure* figure = nullptr;

    int choice = 0;

    cout << "1. Square circle" << endl;
    cout << "2. Square rectangle" << endl;
    cout << "3. Square triangle" << endl;
	cout << "4. Square square" << endl;
	cout << "5. Square rhombus" << endl;
    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        figure = new Circle;
        figure->SetDimension(10.0);
        break;
    case 2:
        figure = new Rectangle;
        figure->SetDimension(5.5, 10.0);
        break;
    case 3:
        figure = new Triangle;
        figure->SetDimension(5.5, 10.0);
        break;
	case 4:
		figure = new Square;
		figure->SetDimension(7.0);
		break;
	case 5:
		figure = new Rhombus;
		figure->SetDimension(6.0, 8.0);
		break;
        default:
        cout << "Wrong choice!" << endl;
		return 1;
    }

	figure->ShowLenght();
    figure->ShowArea();

    return 0;
}