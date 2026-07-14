#include <iostream>
#include <cmath>

using namespace std;



void calculateCubeVolume (float side) {

    float power = pow(side,3);

    cout << power;

}


int main()
{

    float sideLength;

    cin >> sideLength;

    calculateCubeVolume(sideLength);
   
}