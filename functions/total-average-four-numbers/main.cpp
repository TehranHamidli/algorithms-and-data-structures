#include <iostream>


using namespace std;


float fourSum(float a, float b, float c, float d){

    float totalSum = a + b + c +d;


    cout << "The total of four numbers is : " << totalSum << endl;


    return totalSum;
}


void averageNumber(float totalSum){
    
    float average = totalSum / 4;

     cout << "The average of four numbers is : " << average;

}


int main (){


float a,b,c,d;

cin >> a >> b >> c >> d;


float sum = fourSum(a,b,c,d);

averageNumber(sum);



}