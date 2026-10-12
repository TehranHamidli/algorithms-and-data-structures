Given a matrix of size n × m, calculate the sum of elements in each column and create a one-dimensional array where each element is equal to the sum of the elements in the corresponding column of the matrix.

Input Format

The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

The next n lines each contain m real numbers, representing the matrix.

Constraints

1 ≤ n, m ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print a one-dimensional array of size n containing the sums of the columns of the matrix, separated by spaces.

Sample Input 0

3 4
1 2 3 4
5 6 7 8
9 10 11 12
Sample Output 0

15 18 21 24
Sample Input 1

2 3
-1 2 3
4 5 6
Sample Output 1

3 7 9
Sample Input 2

4 2
7 14
1 2
15 30
2 4
Sample Output 2

25 50