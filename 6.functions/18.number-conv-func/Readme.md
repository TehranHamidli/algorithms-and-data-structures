Write a C++ function named convertTo that takes two parameters: a number and a format string ("hex", "oct", "bin"). The function should return the number converted to the specified format. If the format is not provided, it should default to decimal ("dec").

// Function Signature:
string convertTo(int num, const string& format = "dec");
Input Format

An integer representing the number to be converted. A string format parameter indicating the desired format.

Constraints

none

Output Format

The function returns a string representing the input number in the specified format.

Sample Input 0

42
hex
Sample Output 0

2A
Sample Input 1

42
bin
Sample Output 1

101010
Sample Input 2

42
oct
Sample Output 2

52
Sample Input 3

123
oct
Sample Output 3

173
Sample Input 4

123
bin
Sample Output 4

1111011