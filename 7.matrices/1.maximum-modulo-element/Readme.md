Given an m × n matrix, find the largest element whose value is a multiple of its position's sum.

Input Format

The first line contains two integers, m and n, separated by a space. The next m lines each contain n integers, representing the matrix.

Constraints

1 ≤ m, n ≤ 100 1 ≤ Matrix[i][j] ≤ 1000

Output Format

Print the largest modulo element value and its indices as "Value x y".

Sample Input 0

3 4
10 5 20 15
6 8 2 9
25 30 1 12
Sample Output 0

Value: 30 2 1
Explanation 0

30 is the largest modulo, 2 is the row index, 1 is the column index.

Sample Input 1

2 2
3 6
12 5
Sample Output 1

Value: 12 1 0
Sample Input 2

4 4
7 14 3 4
2 16 8 10
15 6 11 9
12 5 20 18
Sample Output 2

Value: 20 3 2