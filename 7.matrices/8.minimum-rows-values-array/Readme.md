Given a matrix of size n × m, calculate the smallest element in each row and create a one-dimensional array where each element is equal to the smallest element in the corresponding row of the matrix.

Input Format

The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

The next n lines each contain m real numbers, representing the matrix.

Constraints

1 ≤ n, m ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print a one-dimensional array of size m containing the smallest values of the rows of the matrix, separated by spaces.

Sample Input 0

3 4
5 2 9 4
8 1 7 3
6 10 11 12
Sample Output 0

2 1 6
Sample Input 1

2 3
-1 2 3
4 5 6
Sample Output 1

-1 4
Sample Input 2

4 2
7 14
1 2
15 30
2 4
Sample Output 2

7 1 15 2