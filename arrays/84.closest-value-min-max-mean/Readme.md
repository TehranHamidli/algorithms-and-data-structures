Given an array of integers and a number x, find and print whether x is closest to the minimum value in the array, the maximum value, or the arithmetic mean of the array.

Input Format

The first line contains an integer N, representing the size of the array. The second line contains N space-separated integers representing the elements of the array. The third line contains an integer x.

Constraints

1 <= N <= 100 Each integer in the array will be within the range of -1000 to 1000.

Output Format

Print "Minimum" if x is closest to the minimum value in the array. Print "Maximum" if x is closest to the maximum value in the array. Print "Mean" if x is closest to the arithmetic mean of the array.

Sample Input 0

5
1 3 5 7 9
4
Sample Output 0

Mean
Sample Input 1

6
10 20 30 40 50 60
12
Sample Output 1

Minimum
Sample Input 2

6
10 20 30 40 50 60
56
Sample Output 2

Maximum