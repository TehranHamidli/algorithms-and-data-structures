Write a C++ program to perform the following steps:

Declare two character arrays str1 and str2 of size 100 to store the strings.
Declare two character pointer variables s1 and s2.
Ask the user to enter two strings (character arrays) of up to 100 characters each.
Assign the memory address of the character array str1 to the pointer s1.
Assign the memory address of the character array str2 to the pointer s2.
Determine the length of the first string using strlen function and store it in a variable len1.
/*
    Don't forget to include the cstring library for the strlen function.
    'strlen' function used on a character array.
*/

#include <cstring>
Iterate through the second string using a loop and pointer arithmetic, and concatenate each character to the end of the first string using the pointer s1.
Add a null character \0 at the end of the concatenated string to terminate it.
Display the concatenated string.
Input Format

The user needs to provide two strings (character arrays) of up to 100 characters each.

Constraints

Forget.

Output Format

Display the concatenated string.

Sample Input 0

Hello
World!
Sample Output 0

Concatenated string: HelloWorld!
Sample Input 1

Hello
World
Sample Output 1

Concatenated string: HelloWorld