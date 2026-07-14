Given a sequence of integers, count the number of even numbers that appear at even positions (0-based index) in the sequence.

Input Format

The first line contains an integer N, representing the size of the sequence. The second line contains N space-separated integers representing the sequence.

Constraints

1 <= N <= 100 Each integer in the sequence will be within the range of -1000 to 1000.

Output Format

Print the count of even numbers in even places.

Sample Input 0

7
1 2 3 4 5 6 7
Sample Output 0

0
Explanation 0

Explanation:

The given sequence is 1 2 3 4 5 6 7. The even numbers in odd indices are 2, 4 and 6.

Sample Input 1

6
10 7 4 12 9 6
Sample Output 1

2
Explanation 1

Explanation:

The given sequence is 10 7 4 12 9 6. The even numbers in even places are 10 and 4.

Sample Input 2

8
9 3 6 12 8 7 5 10
Sample Output 2

2
Explanation 2

Explanation:

The given sequence is 9 3 6 12 8 7 5 10. The even numbers in even places are 6 and 8. Therefore, the count of even numbers in even places is 2.