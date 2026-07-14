Given an array of N elements, replace each element (except the first and last) with half the sum of its neighboring elements.

Input Format

The first line contains an integer N, representing the size of the array. The second line contains N space-separated integers representing the elements of the array.

Constraints

1 <= N <= 100

Output Format

Print the modified array after replacing elements with half the sum of neighbors. Separate the elements by space.

Sample Input 0

6
1 2 3 4 5 6
Sample Output 0

1 2 3 4 5 6
Sample Input 1

7
2 5 7 4 8 1 9
Sample Output 1

2 4.5 4.5 7.5 2.5 8.5 9
Sample Input 2

10
1 1 1 1 1 1 2 0 0 0
Sample Output 2

1 1 1 1 1 1.5 0.5 1 0 0