#include <iostream>
#include <cmath>

using namespace std;

float p = 3.14159;

void sphereVolume(float radius)
{

    float calculate = (float(4) / float(3)) * p * pow(radius, 3);

    cout << "The volume of a sphere is: " << calculate;
}

int main()
{

    float r;

    cin >> r;

    sphereVolume(r);
}