Given a sequence of integers, find the length of the largest ascending portion in the sequence. An ascending portion is a subsequence in which each element is greater than the previous element.

Input Format

The first line contains an integer N, representing the size of the sequence. The second line contains N space-separated integers representing the elements of the sequence.

Constraints

1 <= N <= 100 Each integer in the sequence will be within the range of -1000 to 1000.

Output Format

Print the length of the largest ascending portion in the sequence.

Sample Input 0

10
2 3 1 2 4 6 8 5 9 10
Sample Output 0

Length of Largest Ascending Portion: 4
Sample Input 1

7
1 2 3 1 2 3 4
Sample Output 1

Length of Largest Ascending Portion: 3
Sample Input 2

15
1 2 0 1 1 2 2 3 3 4 5 6 7 8 8
Sample Output 2

Length of Largest Ascending Portion: 5