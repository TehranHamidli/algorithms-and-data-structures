Consider the following C++ code:

#include <iostream>
using namespace std;

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 30;

    ptr = &var;

    pptr = &ptr;
    
    cout << var << endl;
    cout << &var << endl;
    cout << *(&var) << endl << endl;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl << endl;

    cout << pptr << endl;
    cout << &pptr << endl;
    cout << *pptr << endl;
    cout << &(*pptr) << endl << endl;

    cout << **pptr << endl;
    cout << &(**pptr) << endl << endl;

    return 0;
}
Predict the output of the program and explain each output line based on the operations involving regular pointers and pointer to pointers.

Sample Output:

    30
    m3
    30

    m2
    m1
    30

    m2
    m3
    m3
    m3

    30
    m2
Instead of var memory address just type m1, for ptr memory address type m2, for pptr memory address type m3

Input Format

Forget it.

Constraints

Never mind.

Output Format

Output as in the example above.

Submissions: 197
Max Score: 50
Difficulty: Hard
Rate This Challenge:

    
More
