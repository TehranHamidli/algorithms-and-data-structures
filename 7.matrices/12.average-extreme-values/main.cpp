#include <iostream>
#include <iomanip>
using namespace std;


int main (){

int n , m;

cin >> n >> m;

double matrix[n][m];

for (int i = 0 ; i < n; ++i){
    for(int j = 0; j < m; ++j){
        cin >> matrix[i][j];
    }
}

    double minValue = matrix[0][0];
    double maxValue = matrix[0][0];

    for (int i = 0 ; i < n; ++i){

    for(int j = 0; j < m; ++j){

      if (matrix[i][j] < minValue) {
      minValue = matrix[i][j];
  }
     if (matrix[i][j] > maxValue) {
    maxValue = matrix[i][j];
    }

}

}

double average = (minValue + maxValue) / 2.0;
  cout << fixed << setprecision(2) << average;


}