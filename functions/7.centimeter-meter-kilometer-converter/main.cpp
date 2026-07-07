#include <iostream>

using namespace std;

void metersKilemetersConverts(float centimeter)
{

    const int ONE_METER_IN_CM = 100;
    const int ONE_METER_IN_KILOMETER = 100000;

    float converterMeter = centimeter / ONE_METER_IN_CM;
    float converterKiloMeter = centimeter / ONE_METER_IN_KILOMETER;

    cout << "The distance in meter is: " << converterMeter << endl;
    cout << "The distance in kilometer is: " << converterKiloMeter << endl;
}

int main()
{

    int centimeter;

    cin >> centimeter;

    metersKilemetersConverts(centimeter);
}