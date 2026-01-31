Write a C++ program to perform the following steps:

Declare a character array text of size 100 to store the string.
Declare a character pointer ptr.
Ask the user to enter a string (character array) of up to 100 characters.
/*
    In C++, cin.getline(str, sizeof(str)) is used to read a line of text from the
    standard input (usually the keyboard) and store it in the character array 
    or string str. 
    
    This function is commonly used to handle input in a way that avoids some of the
    issues associated with using >> or cin for reading strings.
*/

cin.getline(str, sizeof(str));
Assign the memory address of the character array text to the pointer ptr.
Use a loop and pointer arithmetic to iterate through the characters using the pointer and count the number of characters until the null character \0 is encountered.
Display the length of the string.
Input Format

The user needs to provide a string (character array) of up to 100 characters.

Constraints

Do not mind

Output Format

Display the length of the string.

Sample Input 0

Hello, World!
Sample Output 0

Length of the string: 13
Sample Input 1

Hello World
Sample Output 1

Length of the string: 11