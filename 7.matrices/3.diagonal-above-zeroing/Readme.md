Given a square matrix of order n, replace all its elements located on the main diagonal and above it with zeros.

Input Format

The first line contains a single integer n, the order of the square matrix.

The next n lines each contain n real numbers, representing the matrix.

Constraints

1 ≤ n ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print the modified square matrix after replacing the elements.

Sample Input 0

4
1 3 2 7
5 4 7 8
9 6 4 9
1 2 2 1
Sample Output 0

0 0 0 0
5 0 0 0
9 6 0 0
1 2 2 0
Explanation 0

The main diagonal and above it.

Sample Input 1

2
5 2
3 5
Sample Output 1

0 0
3 0
Sample Input 2

5
1 2 3 4 5
5 6 7 8 9
9 10 11 12 13
13 14 15 16 17
17 18 19 20 21
Sample Output 2

0 0 0 0 0
5 0 0 0 0
9 10 0 0 0
13 14 15 0 0
17 18 19 20 0