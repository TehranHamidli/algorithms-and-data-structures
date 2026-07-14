#include <iostream>

using namespace std;

void calculateAreaRectangle(int length, int width)
{

    int area = length * width;

    cout << "The area of the rectangle is: " << area << endl;
}

void calculatePerimeterRectangle(int length, int width)
{

    int perimeter = 2 * (length + width);

    cout << "The perimeter of the rectangle is: " << perimeter << endl;
}

int main()
{

    int l, w;

    cin >> l >> w;

    calculateAreaRectangle(l, w);
    calculatePerimeterRectangle(l, w);
}