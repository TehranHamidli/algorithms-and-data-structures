Consider the following C++ code snippet:

#include <iostream>

using namespace std;

int main() {
    
    int x = 5;
    
    cout << x << endl;
    cout << &x << endl;
    cout << *(&x) << endl;

    return 0;
}
Analyze the code and predict the output of the program.

Input Format

There is no input required for this challenge.

Constraints

Print the output of the program as described below.

Output Format

The output will consist of three lines:

The value of the variable x.
Print the memory address.
The value stored at the memory address of the variable x.

Sample output:

10
memory address
10