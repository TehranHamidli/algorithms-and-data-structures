You are given a sequence of integers. Your task is to find the maximum element in the sequence and determine its first and last occurrences.

Input Format

The input consists of two parts:

The first line contains an integer N (1 ≤ N ≤ 100) representing the size of the sequence. The second line contains N space-separated integers, each representing an element of the sequence.

Constraints

1 <= N <= 100 Each integer in the sequence will be within the range of -1000 to 1000.

Output Format

Print the following information:

The maximum element in the sequence. The number of occurrences of the maximum element. The position (0-indexed) of the first occurrence of the maximum element. The position (0-indexed) of the last occurrence of the maximum element.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

The maximum element is: 5
The number of occurrences of the maximum element is: 1
The position of the first maximum element is: 4
The position of the last maximum element is: 4
Sample Input 1

6
7 3 7 7 7 1
Sample Output 1

The maximum element is: 7
The number of occurrences of the maximum element is: 4
The position of the first maximum element is: 0
The position of the last maximum element is: 4
Sample Input 2

3
-3 -3 -3
Sample Output 2

The maximum element is: -3
The number of occurrences of the maximum element is: 3
The position of the first maximum element is: 0
The position of the last maximum element is: 2