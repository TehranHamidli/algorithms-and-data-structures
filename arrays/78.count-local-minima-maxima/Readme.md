Given an array of integers of size N, find the number of local minima and local maxima. A local minimum is an element (except for the first and last) that is less than both of its neighbors. A local maximum is an element (except for the first and last) that is greater than both of its neighbors.

Input Format

The first line contains an integer N, representing the size of the array. The second line contains N space-separated integers representing the elements of the array.

Constraints

3 <= N <= 100 Each integer in the array will be within the range of -1000 to 1000.

Output Format

Print the number of local minima and local maxima in the array.

Sample Input 0

7
7 4 9 5 9 6 8
Sample Output 0

Local Minima: 3
Local Maxima: 2
Explanation 0

Explanation:

The given array is [7 4 9 5 9 6 8]. The local minima elements are 4, 5 and 6. The local maxima elements are 9 and 9 (at indices 2 and 4).

Sample Input 1

5
12 6 9 3 7
Sample Output 1

Local Minima: 2
Local Maxima: 1
Sample Input 2

12
4 5 3 2 7 1 2 4 4 5 6 9
Sample Output 2

Local Minima: 2
Local Maxima: 2