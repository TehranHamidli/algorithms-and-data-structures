Given a sequence of integers, find the number of occurrences of the subsequence 1, 2, 3, ..., 10 in the sequence. The subsequence should appear in the same order as given (i.e., consecutive elements from 1 to 10).

Input Format

The first line contains an integer N, representing the size of the sequence. The second line contains N space-separated integers representing the elements of the sequence.

Constraints

1 <= N <= 100 Each integer in the sequence will be within the range of 1 to 10.

Output Format

Print the number of occurrences of the subsequence 1, 2, 3, ..., 10 in the sequence.

Sample Input 0

20
1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10
Sample Output 0

Occurrences of Subsequence: 2
Sample Input 1

15
1 2 3 4 5 6 7 8 9 2 3 4 5 6 7
Sample Output 1

Occurrences of Subsequence: 0
Sample Input 2

24
3 2 -1 0 1 2 3 4 5 6 7 8 9 10 10 9 8 7 6 5 4 3 2 1
Sample Output 2

Occurrences of Subsequence: 1
Sample Input 3

10
1 2 3 4 5 15 7 8 9 10
Sample Output 3

Occurrences of Subsequence: 0
Sample Input 4

27
9 2 1 2 3 4 5 6 7 8 9 10 10 11 1 2 3 1 8 3 4 5 6 7 8 9 10 
Sample Output 4

Occurrences of Subsequence: 1