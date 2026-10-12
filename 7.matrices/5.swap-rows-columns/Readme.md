Given a square matrix of order n, swap its rows and columns to create a new matrix.

Input Format

The first line contains a single integer n, the order of the square matrix.

The next n lines each contain n real numbers, representing the matrix.

Constraints

1 ≤ n ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print the modified square matrix after swapping rows and columns.

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 4 7
2 5 8
3 6 9
Sample Input 1

2
-1 2
3 4
Sample Output 1

-1 3
2 4
Sample Input 2

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output 2

1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16