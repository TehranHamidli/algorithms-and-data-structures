Given a square matrix of order n, find the sum of the elements on the main diagonal and the sum of the elements on the secondary diagonal.

Input Format

The first line contains a single integer n, the order of the square matrix.

The next n lines each contain n real numbers, representing the matrix.

Constraints

1 ≤ n ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print two real numbers separated by a space: the sum of the main diagonal elements and the sum of the secondary diagonal elements.

Sample Input 0

3
1 3 2
5 0 7
9 6 4
Sample Output 0

5 11
Explanation 0

The sum of main diagonal elements: 1 + 0 + 4 = 5 The sum of secondary diagonal elements: 2 + 0 + 9 = 11

Sample Input 1

2
-1 2
3 0
Sample Output 1

-1 5
Sample Input 2

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output 2

34 34