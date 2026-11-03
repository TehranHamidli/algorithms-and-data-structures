#include <iostream>

using namespace std;

int main (){

int n , m;

cin >> n >> m;


int matrix[n][m];


for (int rows = 0; rows < n; ++rows){
    for(int col = 0 ; col < m; ++col){
      cin >> matrix[rows][col];
    }
}

int result[m];

 for(int col = 0 ; col < m; ++col){
     
    int minValue = matrix[0][col];
    int maxValue = matrix[0][col];
   
      for (int rows = 0; rows < n; ++rows){
         
        if(minValue > matrix[rows][col]){

            minValue = matrix[rows][col];
        }
       if (matrix[rows][col] > maxValue) {
            maxValue = matrix[rows][col];
        }

      }

     result[col] = maxValue - minValue;
    }


    for (int col = 0; col < m; ++col) {
        cout << result[col] << " ";
    }
    cout << endl;

}